// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/IP_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIP_PlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_AIP_PlayerController();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_AIP_PlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Individual_Project();
// End Cross Module References
	void AIP_PlayerController::StaticRegisterNativesAIP_PlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIP_PlayerController);
	UClass* Z_Construct_UClass_AIP_PlayerController_NoRegister()
	{
		return AIP_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AIP_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIP_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Individual_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_PlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_PlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/IP_PlayerController.h" },
		{ "ModuleRelativePath", "Player/IP_PlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIP_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIP_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIP_PlayerController_Statics::ClassParams = {
		&AIP_PlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AIP_PlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AIP_PlayerController()
	{
		if (!Z_Registration_Info_UClass_AIP_PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIP_PlayerController.OuterSingleton, Z_Construct_UClass_AIP_PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIP_PlayerController.OuterSingleton;
	}
	template<> INDIVIDUAL_PROJECT_API UClass* StaticClass<AIP_PlayerController>()
	{
		return AIP_PlayerController::StaticClass();
	}
	AIP_PlayerController::AIP_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIP_PlayerController);
	AIP_PlayerController::~AIP_PlayerController() {}
	struct Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Player_IP_PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Player_IP_PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIP_PlayerController, AIP_PlayerController::StaticClass, TEXT("AIP_PlayerController"), &Z_Registration_Info_UClass_AIP_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIP_PlayerController), 2166686090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Player_IP_PlayerController_h_2463657851(TEXT("/Script/Individual_Project"),
		Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Player_IP_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Player_IP_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
