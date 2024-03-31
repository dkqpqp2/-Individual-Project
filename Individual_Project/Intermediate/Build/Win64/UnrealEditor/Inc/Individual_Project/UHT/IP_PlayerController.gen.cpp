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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_AIP_PlayerController();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_AIP_PlayerController_NoRegister();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_UIP_HUDWidget_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IP_HUDWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_IP_HUDWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IP_HUDWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IP_HUDWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_PlayerController_Statics::NewProp_IP_HUDWidgetClass_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Player/IP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AIP_PlayerController_Statics::NewProp_IP_HUDWidgetClass = { "IP_HUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_PlayerController, IP_HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UIP_HUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_PlayerController_Statics::NewProp_IP_HUDWidgetClass_MetaData), Z_Construct_UClass_AIP_PlayerController_Statics::NewProp_IP_HUDWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_PlayerController_Statics::NewProp_IP_HUDWidget_MetaData[] = {
		{ "Category", "HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/IP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIP_PlayerController_Statics::NewProp_IP_HUDWidget = { "IP_HUDWidget", nullptr, (EPropertyFlags)0x002408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_PlayerController, IP_HUDWidget), Z_Construct_UClass_UIP_HUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_PlayerController_Statics::NewProp_IP_HUDWidget_MetaData), Z_Construct_UClass_AIP_PlayerController_Statics::NewProp_IP_HUDWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIP_PlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_PlayerController_Statics::NewProp_IP_HUDWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_PlayerController_Statics::NewProp_IP_HUDWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIP_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIP_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIP_PlayerController_Statics::ClassParams = {
		&AIP_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIP_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIP_PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AIP_PlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_PlayerController_Statics::PropPointers) < 2048);
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIP_PlayerController);
	AIP_PlayerController::~AIP_PlayerController() {}
	struct Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Player_IP_PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Player_IP_PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIP_PlayerController, AIP_PlayerController::StaticClass, TEXT("AIP_PlayerController"), &Z_Registration_Info_UClass_AIP_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIP_PlayerController), 4094708837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Player_IP_PlayerController_h_4245628523(TEXT("/Script/Individual_Project"),
		Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Player_IP_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Player_IP_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
