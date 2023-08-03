// Copyright 2020. All Rights Reserved.
#include "ObjectDelivererManager.h"
#include "Protocol/ObjectDelivererProtocol.h"
#include "PacketRule/PacketRule.h"
#include "DeliveryBox/DeliveryBox.h"
#include "Async/Async.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Misc/ScopeLock.h"
#include <string>
#include "Engine.h"
#include "Misc/Paths.h"
#include "Developer/DesktopPlatform/Public/IDesktopPlatform.h"
#include "Developer/DesktopPlatform/Public/DesktopPlatformModule.h"
#include "Editor/MainFrame/Public/Interfaces/IMainFrameModule.h"


static FCriticalSection LockObj;

UObjectDelivererManager* UObjectDelivererManager::CreateDelivererManager(bool _IsEventWithGameThread /* = true*/)
{
	auto manager = NewObject<UObjectDelivererManager>();
	manager->IsEventWithGameThread = _IsEventWithGameThread;
	return manager;
}

UObjectDelivererManager::UObjectDelivererManager()
	: IsEventWithGameThread(true)
	, IsDestorying(false)
{

}

UObjectDelivererManager::~UObjectDelivererManager()
{
}

void UObjectDelivererManager::StartConnection(UObjectDelivererProtocol* Protocol, UPacketRule* PacketRule)
{
	if (!Protocol || !PacketRule) return;

	CurrentProtocol = Protocol;
	CurrentProtocol->SetPacketRule(PacketRule);

	DeliveryBox = nullptr;
	if (DeliveryBox)
	{
		DeliveryBox->RequestSend.BindLambda([this](const UObjectDelivererProtocol* Destination, const TArray<uint8>& Buffer)
		{
			if (Destination)
			{
				SendTo(Buffer, Destination);
			}
			else
			{
				Send(Buffer);
			}
			
		});
	}

	CurrentProtocol->Connected.BindLambda([this](const UObjectDelivererProtocol* ConnectedObject) 
	{
		ConnectedList.Add(ConnectedObject);

		DispatchEvent([this, ConnectedObject]()
		{
			Connected.Broadcast(ConnectedObject);
		});
	});

	CurrentProtocol->Disconnected.BindLambda([this](const UObjectDelivererProtocol* DisconnectedObject)
	{
		if (ConnectedList.Contains(DisconnectedObject))
		{
			ConnectedList.Remove(DisconnectedObject);
		}

		DispatchEvent([this, DisconnectedObject]()
		{
			Disconnected.Broadcast(DisconnectedObject);
		});
	});

	CurrentProtocol->ReceiveData.BindLambda([this](const UObjectDelivererProtocol* FromObject, const TArray<uint8>& Buffer)
	{
		DispatchEvent([this, FromObject, Buffer]() {
			ReceiveData.Broadcast(FromObject, Buffer);

			if (DeliveryBox)
			{
				DeliveryBox->NotifyReceiveBuffer(FromObject, Buffer);
			}
		});
	});

	ConnectedList.SetNum(0);

	CurrentProtocol->Start();
}

void UObjectDelivererManager::DispatchEvent(TFunction<void()> EventAction)
{
	if (IsDestorying) return;
	if (!IsValid(this)) return;

	if (IsEventWithGameThread)
	{
		AsyncTask(ENamedThreads::GameThread, [this, EventAction]() {
			if (IsDestorying) return;
			EventAction();
		});
	}
	else
	{
		EventAction();
	}
}

void UObjectDelivererManager::Close()
{
	if (!IsValid(CurrentProtocol)) return;

	if (DeliveryBox)
	{
		if (DeliveryBox->RequestSend.IsBound())
		{
			DeliveryBox->RequestSend.Unbind();
		}
	}

	if (CurrentProtocol->Connected.IsBound())
	{
		CurrentProtocol->Connected.Unbind();
	}
	
	if (CurrentProtocol->Disconnected.IsBound())
	{
		CurrentProtocol->Disconnected.Unbind();
	}
	
	if (CurrentProtocol->ReceiveData.IsBound())
	{
		CurrentProtocol->ReceiveData.Unbind();
	}
	
	CurrentProtocol->Close();

	CurrentProtocol = nullptr;
}

void UObjectDelivererManager::Send(const TArray<uint8>& DataBuffer)
{
	if (!CurrentProtocol) return;
	if (IsDestorying) return;

	CurrentProtocol->Send(DataBuffer);
}

void UObjectDelivererManager::SendActorRecenter()
{
	if (!CurrentProtocol) return;
	if (IsDestorying) return;

	const FString message("<MoveCharacterToOriginReq>");
	std::string _str = TCHAR_TO_UTF8(*message);
	TArray<uint8> DataBuffer;

	DataBuffer.SetNum(_str.size() + 1);
	DataBuffer[DataBuffer.Num() - 1] = 0x00;

	FMemory::Memcpy(DataBuffer.GetData(), _str.c_str(), _str.size());

	CurrentProtocol->Send(DataBuffer);
}

bool UObjectDelivererManager::LoadTxt(FString FileNameA, FString& SaveTextA, FString FilePath)
{
     return FFileHelper::LoadFileToString(SaveTextA, *(FilePath + FileNameA));
}

bool UObjectDelivererManager::SaveTxt(FString SaveTextB, FString FileNameB, FString FilePath)
{
     return FFileHelper::SaveStringToFile(SaveTextB, *(FilePath + FileNameB));
}

void UObjectDelivererManager::SendPlayPause()
{
	if (!CurrentProtocol) return;
	if (IsDestorying) return;

	const FString message("<PlayPauseReq>");
	std::string _str = TCHAR_TO_UTF8(*message);
	TArray<uint8> DataBuffer;

	DataBuffer.SetNum(_str.size() + 1);
	DataBuffer[DataBuffer.Num() - 1] = 0x00;

	FMemory::Memcpy(DataBuffer.GetData(), _str.c_str(), _str.size());

	CurrentProtocol->Send(DataBuffer);
}

void UObjectDelivererManager::SendStartRecord(const FString& strfile)
{
	if (!CurrentProtocol) return;
	if (IsDestorying) return;
	
	const FString str1 ("<StartRecordingReq SessionName=");
	const FString str2("/>");
	const FString message(str1 + "\"" + strfile + "\"" + str2);
	std::string _str = TCHAR_TO_UTF8(*message);
	TArray<uint8> DataBuffer;

	DataBuffer.SetNum(_str.size() + 1);
	DataBuffer[DataBuffer.Num() - 1] = 0x00;

	FMemory::Memcpy(DataBuffer.GetData(), _str.c_str(), _str.size());

	CurrentProtocol->Send(DataBuffer);
}

void UObjectDelivererManager::SendStopRecord()
{
	if (!CurrentProtocol) return;
	if (IsDestorying) return;

	const FString message("<StopRecordingReq>");
	std::string _str = TCHAR_TO_UTF8(*message);
	TArray<uint8> DataBuffer;

	DataBuffer.SetNum(_str.size() + 1);
	DataBuffer[DataBuffer.Num() - 1] = 0x00;

	FMemory::Memcpy(DataBuffer.GetData(), _str.c_str(), _str.size());

	CurrentProtocol->Send(DataBuffer);
}

void UObjectDelivererManager::SendTo(const TArray<uint8>& DataBuffer, const UObjectDelivererProtocol* Target)
{
	if (!CurrentProtocol) return;
	if (IsDestorying) return;

	Target->Send(DataBuffer);
}

FName UObjectDelivererManager::GetActorStreamingLevelName(AActor* Actor)
{
	if (Actor != nullptr)
	{
		return Actor->GetLevel()->GetOuter()->GetFName();
	}

	return NAME_None;
}

bool UObjectDelivererManager::IsConnected()
{
	return ConnectedList.Num() > 0;
}

void UObjectDelivererManager::BeginDestroy()
{
	IsDestorying = true;

	Close();

	Super::BeginDestroy();

}

void UObjectDelivererManager::OpenFileDialog(
	EDialogResult& OutputPin,
	TArray<FString>& FilePath,
	const FString& DialogTitle,
	const FString& DefaultPath,
	const FString& DefaultFile,
	const FString& FileType,
	bool IsMultiple
)
{
	void* windowHandle = UObjectDelivererManager::GetWindowHandle();

	if (windowHandle)
	{
		IDesktopPlatform* desktopPlatform = FDesktopPlatformModule::Get();
		if (desktopPlatform)
		{
			bool result = desktopPlatform->OpenFileDialog(
				windowHandle,
				DialogTitle,
				DefaultPath,
				DefaultFile,
				FileType,
				(IsMultiple ? EFileDialogFlags::Type::Multiple : EFileDialogFlags::Type::None),
				FilePath
			);

			if (result)
			{
				for (FString& fp : FilePath)
				{
					fp = FPaths::ConvertRelativePathToFull(fp);
					//UE_LOG(FilePickerPlugin, Log, TEXT("Acquired file path : %s"), *fp);
				}

				//UE_LOG(FilePickerPlugin, Log, TEXT("Open File Dialog : Successful"));
				OutputPin = EDialogResult::Successful;
				return;
			}
		}
	}

	//UE_LOG(FilePickerPlugin, Log, TEXT("Open File Dialog : Cancelled"));
	OutputPin = EDialogResult::Cancelled;
}

void UObjectDelivererManager::OpenDirectoryDialog(
	EDialogResult& OutputPin,
	FString& FolderPath,
	const FString& DialogTitle,
	const FString& DefaultPath
)
{
	void* windowHandle = UObjectDelivererManager::GetWindowHandle();

	if (windowHandle)
	{
		IDesktopPlatform* desktopPlatform = FDesktopPlatformModule::Get();
		if (desktopPlatform)
		{
			bool result = desktopPlatform->OpenDirectoryDialog(
				windowHandle,
				DialogTitle,
				DefaultPath,
				FolderPath
			);

			if (result)
			{
				FolderPath = FPaths::ConvertRelativePathToFull(FolderPath);
				//UE_LOG(FilePickerPlugin, Log, TEXT("Acquired folder path : %s"), *FolderPath);

				//UE_LOG(FilePickerPlugin, Log, TEXT("Open Directory Dialog : Successful"));
				OutputPin = EDialogResult::Successful;
				return;
			}
		}
	}

	//UE_LOG(FilePickerPlugin, Log, TEXT("Open Directory Dialog : Cancelled"));
	OutputPin = EDialogResult::Cancelled;
}

void* UObjectDelivererManager::GetWindowHandle()
{
	if (GIsEditor)
	{
		IMainFrameModule& MainFrameModule = IMainFrameModule::Get();
		TSharedPtr<SWindow> MainWindow = MainFrameModule.GetParentWindow();

		if (MainWindow.IsValid() && MainWindow->GetNativeWindow().IsValid())
		{
			return MainWindow->GetNativeWindow()->GetOSWindowHandle();
		}
	}
	else
	{
		if (GEngine && GEngine->GameViewport)
		{
			return GEngine->GameViewport->GetWindow()->GetNativeWindow()->GetOSWindowHandle();
		}
	}

	return nullptr;
}