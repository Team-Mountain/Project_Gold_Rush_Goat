// Copyright Epic Games, Inc. All Rights Reserved.

#include "UP_The_Mountain.h"

#define LOCTEXT_NAMESPACE "FUP_The_MountainModule"

void FUP_The_MountainModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FUP_The_MountainModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUP_The_MountainModule, UP_The_Mountain)