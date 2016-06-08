// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "BoosterPrivatePCH.h"


class BOOSTER_API FBoosterModule : public IBoosterModule
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};





void FBoosterModule::StartupModule()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
}


void FBoosterModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

IMPLEMENT_MODULE(FBoosterModule, Booster)
