// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterMovement/Public/FPCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPCharacter() {}
// Cross Module References
	SHOOTERMOVEMENT_API UClass* Z_Construct_UClass_AFPCharacter_NoRegister();
	SHOOTERMOVEMENT_API UClass* Z_Construct_UClass_AFPCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ShooterMovement();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AFPCharacter::StaticRegisterNativesAFPCharacter()
	{
	}
	UClass* Z_Construct_UClass_AFPCharacter_NoRegister()
	{
		return AFPCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFPCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jumping_MetaData[];
#endif
		static void NewProp_jumping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_jumping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPCharacter.h" },
		{ "ModuleRelativePath", "Public/FPCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPCharacter_Statics::NewProp_cam_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPCharacter_Statics::NewProp_cam = { "cam", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPCharacter, cam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPCharacter_Statics::NewProp_cam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacter_Statics::NewProp_cam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPCharacter_Statics::NewProp_jumping_MetaData[] = {
		{ "ModuleRelativePath", "Public/FPCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPCharacter_Statics::NewProp_jumping_SetBit(void* Obj)
	{
		((AFPCharacter*)Obj)->jumping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPCharacter_Statics::NewProp_jumping = { "jumping", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPCharacter), &Z_Construct_UClass_AFPCharacter_Statics::NewProp_jumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPCharacter_Statics::NewProp_jumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacter_Statics::NewProp_jumping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPCharacter_Statics::NewProp_cam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPCharacter_Statics::NewProp_jumping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPCharacter_Statics::ClassParams = {
		&AFPCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFPCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPCharacter, 3679700734);
	template<> SHOOTERMOVEMENT_API UClass* StaticClass<AFPCharacter>()
	{
		return AFPCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPCharacter(Z_Construct_UClass_AFPCharacter, &AFPCharacter::StaticClass, TEXT("/Script/ShooterMovement"), TEXT("AFPCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
