// Copyright 2020. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"


class IObjectDeliverer : public IModuleInterface
{

public:

	static inline IObjectDeliverer& Get()
	{
		return FModuleManager::LoadModuleChecked< IObjectDeliverer >( "XSensRemote" );
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded( "XSensRemote" );
	}
};

