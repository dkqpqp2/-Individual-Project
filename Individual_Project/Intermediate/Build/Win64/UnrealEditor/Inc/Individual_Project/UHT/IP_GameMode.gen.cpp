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
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_UIP_GameInterface_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearScore_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClearScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentScore_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCleared_MetaData[];
#endif
		static void NewProp_bIsCleared_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCleared;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_GameMode_Statics::NewProp_ClearScore_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Game/IP_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AIP_GameMode_Statics::NewProp_ClearScore = { "ClearScore", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_GameMode, ClearScore), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_GameMode_Statics::NewProp_ClearScore_MetaData), Z_Construct_UClass_AIP_GameMode_Statics::NewProp_ClearScore_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_GameMode_Statics::NewProp_CurrentScore_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Game/IP_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AIP_GameMode_Statics::NewProp_CurrentScore = { "CurrentScore", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_GameMode, CurrentScore), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_GameMode_Statics::NewProp_CurrentScore_MetaData), Z_Construct_UClass_AIP_GameMode_Statics::NewProp_CurrentScore_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_GameMode_Statics::NewProp_bIsCleared_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Game/IP_GameMode.h" },
	};
#endif
	void Z_Construct_UClass_AIP_GameMode_Statics::NewProp_bIsCleared_SetBit(void* Obj)
	{
		((AIP_GameMode*)Obj)->bIsCleared = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIP_GameMode_Statics::NewProp_bIsCleared = { "bIsCleared", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AIP_GameMode), &Z_Construct_UClass_AIP_GameMode_Statics::NewProp_bIsCleared_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_GameMode_Statics::NewProp_bIsCleared_MetaData), Z_Construct_UClass_AIP_GameMode_Statics::NewProp_bIsCleared_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIP_GameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_GameMode_Statics::NewProp_ClearScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_GameMode_Statics::NewProp_CurrentScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_GameMode_Statics::NewProp_bIsCleared,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AIP_GameMode_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIP_GameInterface_NoRegister, (int32)VTABLE_OFFSET(AIP_GameMode, IIP_GameInterface), false },  // 151233687
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_GameMode_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIP_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIP_GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIP_GameMode_Statics::ClassParams = {
		&AIP_GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIP_GameMode_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIP_GameMode_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AIP_GameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_GameMode_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_AIP_GameMode, AIP_GameMode::StaticClass, TEXT("AIP_GameMode"), &Z_Registration_Info_UClass_AIP_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIP_GameMode), 459454964U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Game_IP_GameMode_h_3216509559(TEXT("/Script/Individual_Project"),
		Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Game_IP_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Game_IP_GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
