// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/IP_GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIP_GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_AIP_GameMode();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_AIP_GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Individual_Project();
// End Cross Module References
	void AIP_GameMode::StaticRegisterNativesAIP_GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIP_GameMode);
	UClass* Z_Construct_UClass_AIP_GameMode_NoRegister()
	{
		return AIP_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AIP_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIP_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Individual_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_GameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/IP_GameMode.h" },
		{ "ModuleRelativePath", "Game/IP_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIP_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIP_GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIP_GameMode_Statics::ClassParams = {
		&AIP_GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AIP_GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AIP_GameMode()
	{
		if (!Z_Registration_Info_UClass_AIP_GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIP_GameMode.OuterSingleton, Z_Construct_UClass_AIP_GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIP_GameMode.OuterSingleton;
	}
	template<> INDIVIDUAL_PROJECT_API UClass* StaticClass<AIP_GameMode>()
	{
		return AIP_GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIP_GameMode);
	AIP_GameMode::~AIP_GameMode() {}
	struct Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Game_IP_GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Game_IP_GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIP_GameMode, AIP_GameMode::StaticClass, TEXT("AIP_GameMode"), &Z_Registration_Info_UClass_AIP_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIP_GameMode), 2561684060U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Game_IP_GameMode_h_4013064392(TEXT("/Script/Individual_Project"),
		Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Game_IP_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Game_IP_GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
