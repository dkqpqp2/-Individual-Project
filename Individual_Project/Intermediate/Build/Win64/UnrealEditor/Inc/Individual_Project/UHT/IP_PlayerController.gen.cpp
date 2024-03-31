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
	struct IP_PlayerController_eventK2_OnScoreChanged_Parms
	{
		int32 NewScore;
	};
	static FName NAME_AIP_PlayerController_K2_OnGameClear = FName(TEXT("K2_OnGameClear"));
	void AIP_PlayerController::K2_OnGameClear()
	{
		ProcessEvent(FindFunctionChecked(NAME_AIP_PlayerController_K2_OnGameClear),NULL);
	}
	static FName NAME_AIP_PlayerController_K2_OnGameOver = FName(TEXT("K2_OnGameOver"));
	void AIP_PlayerController::K2_OnGameOver()
	{
		ProcessEvent(FindFunctionChecked(NAME_AIP_PlayerController_K2_OnGameOver),NULL);
	}
	static FName NAME_AIP_PlayerController_K2_OnScoreChanged = FName(TEXT("K2_OnScoreChanged"));
	void AIP_PlayerController::K2_OnScoreChanged(int32 NewScore)
	{
		IP_PlayerController_eventK2_OnScoreChanged_Parms Parms;
		Parms.NewScore=NewScore;
		ProcessEvent(FindFunctionChecked(NAME_AIP_PlayerController_K2_OnScoreChanged),&Parms);
	}
	void AIP_PlayerController::StaticRegisterNativesAIP_PlayerController()
	{
	}
	struct Z_Construct_UFunction_AIP_PlayerController_K2_OnGameClear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIP_PlayerController_K2_OnGameClear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "DisplayName", "OnGameClearCpp" },
		{ "ModuleRelativePath", "Player/IP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIP_PlayerController_K2_OnGameClear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIP_PlayerController, nullptr, "K2_OnGameClear", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIP_PlayerController_K2_OnGameClear_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIP_PlayerController_K2_OnGameClear_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AIP_PlayerController_K2_OnGameClear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIP_PlayerController_K2_OnGameClear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AIP_PlayerController_K2_OnGameOver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIP_PlayerController_K2_OnGameOver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "DisplayName", "OnGameOverCpp" },
		{ "ModuleRelativePath", "Player/IP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIP_PlayerController_K2_OnGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIP_PlayerController, nullptr, "K2_OnGameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIP_PlayerController_K2_OnGameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIP_PlayerController_K2_OnGameOver_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AIP_PlayerController_K2_OnGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIP_PlayerController_K2_OnGameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AIP_PlayerController_K2_OnScoreChanged_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewScore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AIP_PlayerController_K2_OnScoreChanged_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IP_PlayerController_eventK2_OnScoreChanged_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIP_PlayerController_K2_OnScoreChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIP_PlayerController_K2_OnScoreChanged_Statics::NewProp_NewScore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIP_PlayerController_K2_OnScoreChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "DisplayName", "OnScoreChangedCpp" },
		{ "ModuleRelativePath", "Player/IP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIP_PlayerController_K2_OnScoreChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIP_PlayerController, nullptr, "K2_OnScoreChanged", nullptr, nullptr, Z_Construct_UFunction_AIP_PlayerController_K2_OnScoreChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIP_PlayerController_K2_OnScoreChanged_Statics::PropPointers), sizeof(IP_PlayerController_eventK2_OnScoreChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIP_PlayerController_K2_OnScoreChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIP_PlayerController_K2_OnScoreChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIP_PlayerController_K2_OnScoreChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(IP_PlayerController_eventK2_OnScoreChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AIP_PlayerController_K2_OnScoreChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIP_PlayerController_K2_OnScoreChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIP_PlayerController);
	UClass* Z_Construct_UClass_AIP_PlayerController_NoRegister()
	{
		return AIP_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AIP_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AIP_PlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AIP_PlayerController_K2_OnGameClear, "K2_OnGameClear" }, // 1270409609
		{ &Z_Construct_UFunction_AIP_PlayerController_K2_OnGameOver, "K2_OnGameOver" }, // 1209815725
		{ &Z_Construct_UFunction_AIP_PlayerController_K2_OnScoreChanged, "K2_OnScoreChanged" }, // 1401533554
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_PlayerController_Statics::FuncInfo) < 2048);
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
		FuncInfo,
		Z_Construct_UClass_AIP_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AIP_PlayerController, AIP_PlayerController::StaticClass, TEXT("AIP_PlayerController"), &Z_Registration_Info_UClass_AIP_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIP_PlayerController), 2781917252U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Player_IP_PlayerController_h_3056468845(TEXT("/Script/Individual_Project"),
		Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Player_IP_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Player_IP_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
