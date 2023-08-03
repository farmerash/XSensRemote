// Copyright 2020. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "PacketRule/PacketRuleFactory.h"
#include "Protocol/ProtocolFactory.h"
#include "DeliveryBox/DeliveryBoxFactory.h"
#include "UObject/GCObject.h"
#include "Delegates/DelegateCombinations.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "GameFramework/Actor.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ObjectDelivererManager.generated.h"

class UObjectDelivererProtocol;
class UPacketRule;
class UDeliveryBox;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectDelivererManagerConnected, const UObjectDelivererProtocol*, ClientSocket);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectDelivererManagerDisconnected, const UObjectDelivererProtocol*, ClientSocket);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FObjectDelivererManagerReceiveData, const UObjectDelivererProtocol*, ClientSocket, const TArray<uint8>&, Buffer);


UENUM()
enum class EDialogResult : uint8
{
	Successful, Cancelled
};

UCLASS(BlueprintType, Blueprintable)
class XSENSREMOTE_API UObjectDelivererManager : public UObject
{
	GENERATED_BODY()

public:
	UObjectDelivererManager();
	~UObjectDelivererManager();

	/**
	 * create ObjectDelivererManager
	 * @param IsEventWithGameThread - Process events with GameThread
	 */
	UFUNCTION(BlueprintPure, Category = "XSensRemote")
	static UObjectDelivererManager* CreateDelivererManager(bool IsEventWithGameThread = true);

	/**
	 * start communication protocol.
	 * @param Protocol - Communication protocol
	 * @param PacketRule - Data division rule
	 * @param DeliveryBox - Serialization method(optional)
	 */
	UFUNCTION(BlueprintCallable, Category = "XSensRemote")
	void StartConnection(UObjectDelivererProtocol* Protocol, UPacketRule* PacketRule);

	/**
	 * close communication protocol.
	 */
	UFUNCTION(BlueprintCallable, Category = "XSensRemote")
	void Close();

	/**
	 * send the data to the connection destination.
	 * @param DataBuffer - databuffer
	 */
	UFUNCTION(BlueprintCallable, Category = "XSensRemote")
	void Send(const TArray<uint8>& DataBuffer);

	UFUNCTION(BlueprintCallable, Category = "XSensRemote")
	void SendActorRecenter();

	UFUNCTION(BlueprintCallable, Category = "XSensRemote")
	void SendPlayPause();

	UFUNCTION(BlueprintCallable, Category = "XSensRemote")
	void SendStartRecord(const FString& strfile);

	UFUNCTION(BlueprintCallable, Category = "XSensRemote")
	void SendStopRecord();
	/**
	 * send the data to the connection destination.
	 * @param DataBuffer - databuffer
	 * @param Target - send destination
	 */
	UFUNCTION(BlueprintCallable, Category = "XSensRemote")
	void SendTo(const TArray<uint8>& DataBuffer, const UObjectDelivererProtocol* Target);

	UFUNCTION(BlueprintPure, Category = "XSensRemote", meta = (Keywords = "LoadTxt"))
	static bool LoadTxt(FString FileNameA, FString& SaveTextA, FString FilePath);

	UFUNCTION(BlueprintCallable, Category = "XSensRemote", meta = (Keywords = "SaveTxt"))
	static bool SaveTxt(FString SaveTextB, FString FileNameB, FString FilePath);

	UFUNCTION(BlueprintPure, Category = "XSensRemote")
	static FName GetActorStreamingLevelName(AActor* Actor);

	/**
	* Whether connected
	* @return true:connected, false:disconnected
	*/
	UFUNCTION(BlueprintPure, Category = "XSensRemote")
	bool IsConnected();

	/**
	* Preparation for transmission / reception is completed
	*/
	UPROPERTY(BlueprintAssignable, Category = "XSensRemote")
	FObjectDelivererManagerConnected Connected;

	/**
	* lost my connection
	*/
	UPROPERTY(BlueprintAssignable, Category = "XSensRemote")
	FObjectDelivererManagerDisconnected Disconnected;

	/**
	* Received data
	*/
	UPROPERTY(BlueprintAssignable, Category = "XSensRemote")
	FObjectDelivererManagerReceiveData ReceiveData;

	virtual void BeginDestroy() override;

	/**
	* Process events with GameThread
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = true), Category = "XSensRemote")
	bool IsEventWithGameThread;

	/**
	* Connected list
	*/
	UPROPERTY(BlueprintReadOnly, Category = "XSensRemote")
	TArray<const UObjectDelivererProtocol*> ConnectedList;

	UFUNCTION(BlueprintCallable, Category = "XSensRemote | OpenFileDialog", meta = (ExpandEnumAsExecs = "OutputPin"))
		static void OpenFileDialog(
			EDialogResult& OutputPin,
			TArray<FString>& FilePath,
			const FString& DialogTitle = TEXT("Open File Dialog"),
			const FString& DefaultPath = TEXT(""),
			const FString& DefaultFile = TEXT(""),
			const FString& FileType = TEXT("All (*)|*.*"),
			bool IsMultiple = false
		);

	UFUNCTION(BlueprintCallable, Category = "XSensRemote | OpenDirectoryDialog", meta = (ExpandEnumAsExecs = "OutputPin"))
		static void OpenDirectoryDialog(
			EDialogResult& OutputPin,
			FString& FolderPath,
			const FString& DialogTitle = TEXT("Open Directory Dialog"),
			const FString& DefaultPath = TEXT("")
		);

protected:
	static void* GetWindowHandle();

private:
	void DispatchEvent(TFunction<void()> EventAction);

private:
	UPROPERTY(Transient)
	UObjectDelivererProtocol* CurrentProtocol;
	UPROPERTY(Transient)
	UDeliveryBox* DeliveryBox;

	bool IsDestorying;
};

