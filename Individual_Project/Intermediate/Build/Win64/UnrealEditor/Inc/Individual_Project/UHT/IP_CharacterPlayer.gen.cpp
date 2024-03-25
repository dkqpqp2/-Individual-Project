// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/IP_CharacterPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIP_CharacterPlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_AIP_CharacterBase();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_AIP_CharacterPlayer();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_AIP_CharacterPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Individual_Project();
// End Cross Module References
	void AIP_CharacterPlayer::StaticRegisterNativesAIP_CharacterPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIP_CharacterPlayer);
	UClass* Z_Construct_UClass_AIP_CharacterPlayer_NoRegister()
	{
		return AIP_CharacterPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AIP_CharacterPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_JumpAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIP_CharacterPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AIP_CharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Individual_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterPlayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_CharacterPlayer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/IP_CharacterPlayer.h" },
		{ "ModuleRelativePath", "Character/IP_CharacterPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/IP_CharacterPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_CharacterPlayer, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/IP_CharacterPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_CharacterPlayer, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/IP_CharacterPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_CharacterPlayer, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/IP_CharacterPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_CharacterPlayer, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/IP_CharacterPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_CharacterPlayer, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/IP_CharacterPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_CharacterPlayer, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_JumpAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIP_CharacterPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_CharacterPlayer_Statics::NewProp_JumpAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIP_CharacterPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIP_CharacterPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIP_CharacterPlayer_Statics::ClassParams = {
		&AIP_CharacterPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIP_CharacterPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AIP_CharacterPlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterPlayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AIP_CharacterPlayer()
	{
		if (!Z_Registration_Info_UClass_AIP_CharacterPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIP_CharacterPlayer.OuterSingleton, Z_Construct_UClass_AIP_CharacterPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIP_CharacterPlayer.OuterSingleton;
	}
	template<> INDIVIDUAL_PROJECT_API UClass* StaticClass<AIP_CharacterPlayer>()
	{
		return AIP_CharacterPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIP_CharacterPlayer);
	AIP_CharacterPlayer::~AIP_CharacterPlayer() {}
	struct Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIP_CharacterPlayer, AIP_CharacterPlayer::StaticClass, TEXT("AIP_CharacterPlayer"), &Z_Registration_Info_UClass_AIP_CharacterPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIP_CharacterPlayer), 799865838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterPlayer_h_3803672331(TEXT("/Script/Individual_Project"),
		Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
