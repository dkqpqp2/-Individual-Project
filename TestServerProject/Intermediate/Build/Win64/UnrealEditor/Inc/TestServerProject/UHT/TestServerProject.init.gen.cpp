// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestServerProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestServerProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestServerProject()
	{
		if (!Z_Registration_Info_UPackage__Script_TestServerProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestServerProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x013685E3,
				0xCBA9886A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestServerProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestServerProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestServerProject(Z_Construct_UPackage__Script_TestServerProject, TEXT("/Script/TestServerProject"), Z_Registration_Info_UPackage__Script_TestServerProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x013685E3, 0xCBA9886A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
