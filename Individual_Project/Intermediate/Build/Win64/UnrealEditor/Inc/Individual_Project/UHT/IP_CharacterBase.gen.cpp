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
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_AIP_CharacterBase();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_AIP_CharacterBase_NoRegister();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_UIP_AnimationAttackInterface_NoRegister();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_UIP_CharacterControlData_NoRegister();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_UIP_CharacterItemInterface_NoRegister();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_UIP_CharacterStatComponent_NoRegister();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_UIP_CharacterWidgetInterface_NoRegister();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_UIP_ComboActionData_NoRegister();
	INDIVIDUAL_PROJECT_API UClass* Z_Construct_UClass_UIP_WidgetComponent_NoRegister();
	INDIVIDUAL_PROJECT_API UEnum* Z_Construct_UEnum_Individual_Project_ECharacterControlType();
	INDIVIDUAL_PROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTakeItemDelegateWrapper();
	UPackage* Z_Construct_UPackage__Script_Individual_Project();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterControlType;
	static UEnum* ECharacterControlType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterControlType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterControlType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Individual_Project_ECharacterControlType, (UObject*)Z_Construct_UPackage__Script_Individual_Project(), TEXT("ECharacterControlType"));
		}
		return Z_Registration_Info_UEnum_ECharacterControlType.OuterSingleton;
	}
	template<> INDIVIDUAL_PROJECT_API UEnum* StaticEnum<ECharacterControlType>()
	{
		return ECharacterControlType_StaticEnum();
	}
	struct Z_Construct_UEnum_Individual_Project_ECharacterControlType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Individual_Project_ECharacterControlType_Statics::Enumerators[] = {
		{ "ECharacterControlType::Quater", (int64)ECharacterControlType::Quater },
		{ "ECharacterControlType::Shoulder", (int64)ECharacterControlType::Shoulder },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Individual_Project_ECharacterControlType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/IP_CharacterBase.h" },
		{ "Quater.Name", "ECharacterControlType::Quater" },
		{ "Shoulder.Name", "ECharacterControlType::Shoulder" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Individual_Project_ECharacterControlType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Individual_Project,
		nullptr,
		"ECharacterControlType",
		"ECharacterControlType",
		Z_Construct_UEnum_Individual_Project_ECharacterControlType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Individual_Project_ECharacterControlType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Individual_Project_ECharacterControlType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Individual_Project_ECharacterControlType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Individual_Project_ECharacterControlType()
	{
		if (!Z_Registration_Info_UEnum_ECharacterControlType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterControlType.InnerSingleton, Z_Construct_UEnum_Individual_Project_ECharacterControlType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterControlType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TakeItemDelegateWrapper;
class UScriptStruct* FTakeItemDelegateWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TakeItemDelegateWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TakeItemDelegateWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTakeItemDelegateWrapper, (UObject*)Z_Construct_UPackage__Script_Individual_Project(), TEXT("TakeItemDelegateWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_TakeItemDelegateWrapper.OuterSingleton;
}
template<> INDIVIDUAL_PROJECT_API UScriptStruct* StaticStruct<FTakeItemDelegateWrapper>()
{
	return FTakeItemDelegateWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTakeItemDelegateWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeItemDelegateWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Character/IP_CharacterBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTakeItemDelegateWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTakeItemDelegateWrapper>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTakeItemDelegateWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Individual_Project,
		nullptr,
		&NewStructOps,
		"TakeItemDelegateWrapper",
		nullptr,
		0,
		sizeof(FTakeItemDelegateWrapper),
		alignof(FTakeItemDelegateWrapper),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeItemDelegateWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTakeItemDelegateWrapper_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTakeItemDelegateWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_TakeItemDelegateWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TakeItemDelegateWrapper.InnerSingleton, Z_Construct_UScriptStruct_FTakeItemDelegateWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TakeItemDelegateWrapper.InnerSingleton;
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterControlManager_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterControlManager_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterControlManager_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterControlManager_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterControlManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboActionMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComboActionMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboActionData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComboActionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeadMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Stat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HpBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HpBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Weapon;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TakeItemActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakeItemActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TakeItemActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_CharacterControlManager_ValueProp = { "CharacterControlManager", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UIP_CharacterControlData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_CharacterControlManager_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_CharacterControlManager_Key_KeyProp = { "CharacterControlManager_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Individual_Project_ECharacterControlType, METADATA_PARAMS(0, nullptr) }; // 1376525430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_CharacterControlManager_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterControl" },
		{ "ModuleRelativePath", "Character/IP_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_CharacterControlManager = { "CharacterControlManager", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_CharacterBase, CharacterControlManager), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_CharacterControlManager_MetaData), Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_CharacterControlManager_MetaData) }; // 1376525430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_ComboActionMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Character/IP_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_ComboActionMontage = { "ComboActionMontage", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_CharacterBase, ComboActionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_ComboActionMontage_MetaData), Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_ComboActionMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_ComboActionData_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Character/IP_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_ComboActionData = { "ComboActionData", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_CharacterBase, ComboActionData), Z_Construct_UClass_UIP_ComboActionData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_ComboActionData_MetaData), Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_ComboActionData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_DeadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Character/IP_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_DeadMontage = { "DeadMontage", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_CharacterBase, DeadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_DeadMontage_MetaData), Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_DeadMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_Stat_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/IP_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_CharacterBase, Stat), Z_Construct_UClass_UIP_CharacterStatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_Stat_MetaData), Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_Stat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_HpBar_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/IP_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_HpBar = { "HpBar", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_CharacterBase, HpBar), Z_Construct_UClass_UIP_WidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_HpBar_MetaData), Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_HpBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_Weapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Equipment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/IP_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_CharacterBase, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_Weapon_MetaData), Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_Weapon_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_TakeItemActions_Inner = { "TakeItemActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTakeItemDelegateWrapper, METADATA_PARAMS(0, nullptr) }; // 4284473058
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_TakeItemActions_MetaData[] = {
		{ "ModuleRelativePath", "Character/IP_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_TakeItemActions = { "TakeItemActions", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_CharacterBase, TakeItemActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_TakeItemActions_MetaData), Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_TakeItemActions_MetaData) }; // 4284473058
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIP_CharacterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_CharacterControlManager_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_CharacterControlManager_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_CharacterControlManager_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_CharacterControlManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_ComboActionMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_ComboActionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_DeadMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_Stat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_HpBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_TakeItemActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_CharacterBase_Statics::NewProp_TakeItemActions,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AIP_CharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIP_AnimationAttackInterface_NoRegister, (int32)VTABLE_OFFSET(AIP_CharacterBase, IIP_AnimationAttackInterface), false },  // 4146111444
			{ Z_Construct_UClass_UIP_CharacterWidgetInterface_NoRegister, (int32)VTABLE_OFFSET(AIP_CharacterBase, IIP_CharacterWidgetInterface), false },  // 3251409765
			{ Z_Construct_UClass_UIP_CharacterItemInterface_NoRegister, (int32)VTABLE_OFFSET(AIP_CharacterBase, IIP_CharacterItemInterface), false },  // 2544291565
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterBase_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIP_CharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIP_CharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIP_CharacterBase_Statics::ClassParams = {
		&AIP_CharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIP_CharacterBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AIP_CharacterBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_CharacterBase_Statics::PropPointers) < 2048);
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_Statics::EnumInfo[] = {
		{ ECharacterControlType_StaticEnum, TEXT("ECharacterControlType"), &Z_Registration_Info_UEnum_ECharacterControlType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1376525430U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_Statics::ScriptStructInfo[] = {
		{ FTakeItemDelegateWrapper::StaticStruct, Z_Construct_UScriptStruct_FTakeItemDelegateWrapper_Statics::NewStructOps, TEXT("TakeItemDelegateWrapper"), &Z_Registration_Info_UScriptStruct_TakeItemDelegateWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTakeItemDelegateWrapper), 4284473058U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIP_CharacterBase, AIP_CharacterBase::StaticClass, TEXT("AIP_CharacterBase"), &Z_Registration_Info_UClass_AIP_CharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIP_CharacterBase), 4281642538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_3768056154(TEXT("/Script/Individual_Project"),
		Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
