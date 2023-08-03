// Copyright 2020. All Rights Reserved.

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "IObjectDeliverer.h"


class FObjectDeliverer : public IObjectDeliverer
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE(FObjectDeliverer, XSensRemote)



void FObjectDeliverer::StartupModule()
{
}


void FObjectDeliverer::ShutdownModule()
{
}



