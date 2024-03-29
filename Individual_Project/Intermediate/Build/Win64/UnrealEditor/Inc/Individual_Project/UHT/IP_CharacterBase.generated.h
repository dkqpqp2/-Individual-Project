// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/IP_CharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INDIVIDUAL_PROJECT_IP_CharacterBase_generated_h
#error "IP_CharacterBase.generated.h already included, missing '#pragma once' in IP_CharacterBase.h"
#endif
#define INDIVIDUAL_PROJECT_IP_CharacterBase_generated_h

#define FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTakeItemDelegateWrapper_Statics; \
	INDIVIDUAL_PROJECT_API static class UScriptStruct* StaticStruct();


template<> INDIVIDUAL_PROJECT_API UScriptStruct* StaticStruct<struct FTakeItemDelegateWrapper>();

#define FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_36_SPARSE_DATA
#define FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_36_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_36_ACCESSORS
#define FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIP_CharacterBase(); \
	friend struct Z_Construct_UClass_AIP_CharacterBase_Statics; \
public: \
	DECLARE_CLASS(AIP_CharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Individual_Project"), NO_API) \
	DECLARE_SERIALIZER(AIP_CharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AIP_CharacterBase*>(this); }


#define FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIP_CharacterBase(AIP_CharacterBase&&); \
	NO_API AIP_CharacterBase(const AIP_CharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIP_CharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIP_CharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIP_CharacterBase) \
	NO_API virtual ~AIP_CharacterBase();


#define FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_33_PROLOG
#define FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_36_SPARSE_DATA \
	FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_36_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_36_ACCESSORS \
	FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_36_INCLASS_NO_PURE_DECLS \
	FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INDIVIDUAL_PROJECT_API UClass* StaticClass<class AIP_CharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Individual_Project_Source_Individual_Project_Character_IP_CharacterBase_h


#define FOREACH_ENUM_ECHARACTERCONTROLTYPE(op) \
	op(ECharacterControlType::Quater) \
	op(ECharacterControlType::Shoulder) 

enum class ECharacterControlType : uint8;
template<> struct TIsUEnumClass<ECharacterControlType> { enum { Value = true }; };
template<> INDIVIDUAL_PROJECT_API UEnum* StaticEnum<ECharacterControlType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
