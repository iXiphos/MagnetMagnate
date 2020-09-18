// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERMOVEMENT_FPCharacter_generated_h
#error "FPCharacter.generated.h already included, missing '#pragma once' in FPCharacter.h"
#endif
#define SHOOTERMOVEMENT_FPCharacter_generated_h

#define ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_SPARSE_DATA
#define ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_RPC_WRAPPERS
#define ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPCharacter(); \
	friend struct Z_Construct_UClass_AFPCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterMovement"), NO_API) \
	DECLARE_SERIALIZER(AFPCharacter)


#define ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPCharacter(); \
	friend struct Z_Construct_UClass_AFPCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterMovement"), NO_API) \
	DECLARE_SERIALIZER(AFPCharacter)


#define ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPCharacter(AFPCharacter&&); \
	NO_API AFPCharacter(const AFPCharacter&); \
public:


#define ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPCharacter(AFPCharacter&&); \
	NO_API AFPCharacter(const AFPCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPCharacter)


#define ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__jumping() { return STRUCT_OFFSET(AFPCharacter, jumping); } \
	FORCEINLINE static uint32 __PPO__cam() { return STRUCT_OFFSET(AFPCharacter, cam); }


#define ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_11_PROLOG
#define ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_SPARSE_DATA \
	ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_RPC_WRAPPERS \
	ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_INCLASS \
	ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_SPARSE_DATA \
	ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_INCLASS_NO_PURE_DECLS \
	ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERMOVEMENT_API UClass* StaticClass<class AFPCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterMovement_Source_ShooterMovement_Public_FPCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
