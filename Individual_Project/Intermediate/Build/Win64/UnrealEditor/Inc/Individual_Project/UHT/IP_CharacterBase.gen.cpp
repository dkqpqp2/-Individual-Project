// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/IP_CharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIP_CharacterBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_AIP_CharacterBase();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_AIP_CharacterBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Individual_Project();
// End Cross Module References
	void AIP_CharacterBase::StaticRegisterNativesAIP_CharacterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIP_CharacterBase);
	UClass* Z_Construct_UClass_AIP_CharacterBase_NoRegister()
	{
		return AIP_CharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AIP_CharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIP_CharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Individual_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_CharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/IP_CharacterBase.h" },
		{ "ModuleRelativePath", "Character/IP_CharacterBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIP_CharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIP_CharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIP_CharacterBase_Statics::ClassParams = {
		&AIP_CharacterBase::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AIP_CharacterBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AIP_CharacterBase()
	{
		if (!Z_Registration_Info_UClass_AIP_CharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIP_CharacterBase.OuterSingleton, Z_Construct_UClass_AIP_CharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIP_CharacterBase.OuterSingleton;
	}
	template<> INDIVIDUAL_PROJECT_API UClass* StaticClass<AIP_CharacterBase>()
	{
		return AIP_CharacterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIP_CharacterBase);
	AIP_CharacterBase::~AIP_CharacterBase() {}
	struct Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIP_CharacterBase, AIP_CharacterBase::StaticClass, TEXT("AIP_CharacterBase"), &Z_Registration_Info_UClass_AIP_CharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIP_CharacterBase), 2816433820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_4014076707(TEXT("/Script/Individual_Project"),
		Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
