// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERMOVEMENT_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define SHOOTERMOVEMENT_MyCharacter_generated_h

#define ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_SPARSE_DATA
#define ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_RPC_WRAPPERS
#define ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterMovement"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterMovement"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public:


#define ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter)


#define ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseTurnRate() { return STRUCT_OFFSET(AMyCharacter, BaseTurnRate); } \
	FORCEINLINE static uint32 __PPO__BaseLookUpRate() { return STRUCT_OFFSET(AMyCharacter, BaseLookUpRate); } \
	FORCEINLINE static uint32 __PPO__sprinting() { return STRUCT_OFFSET(AMyCharacter, sprinting); }


#define ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_13_PROLOG
#define ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_SPARSE_DATA \
	ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_RPC_WRAPPERS \
	ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_INCLASS \
	ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_SPARSE_DATA \
	ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_INCLASS_NO_PURE_DECLS \
	ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERMOVEMENT_API UClass* StaticClass<class AMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterMovement_Source_ShooterMovement_Public_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
