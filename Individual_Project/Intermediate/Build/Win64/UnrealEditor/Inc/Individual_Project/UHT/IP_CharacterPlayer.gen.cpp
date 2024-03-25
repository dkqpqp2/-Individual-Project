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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIP_CharacterPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIP_CharacterPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIP_CharacterPlayer_Statics::ClassParams = {
		&AIP_CharacterPlayer::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AIP_CharacterPlayer_Statics::Class_MetaDataParams)
	};
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
	AIP_CharacterPlayer::AIP_CharacterPlayer() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIP_CharacterPlayer);
	AIP_CharacterPlayer::~AIP_CharacterPlayer() {}
	struct Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIP_CharacterPlayer, AIP_CharacterPlayer::StaticClass, TEXT("AIP_CharacterPlayer"), &Z_Registration_Info_UClass_AIP_CharacterPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIP_CharacterPlayer), 1854393007U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterPlayer_h_2600587057(TEXT("/Script/Individual_Project"),
		Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
