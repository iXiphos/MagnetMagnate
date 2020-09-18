// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterMovement/Public/MagnetPlates.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagnetPlates() {}
// Cross Module References
	SHOOTERMOVEMENT_API UClass* Z_Construct_UClass_UMagnetPlates_NoRegister();
	SHOOTERMOVEMENT_API UClass* Z_Construct_UClass_UMagnetPlates();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_ShooterMovement();
// End Cross Module References
	void UMagnetPlates::StaticRegisterNativesUMagnetPlates()
	{
	}
	UClass* Z_Construct_UClass_UMagnetPlates_NoRegister()
	{
		return UMagnetPlates::StaticClass();
	}
	struct Z_Construct_UClass_UMagnetPlates_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagnetPlates_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagnetPlates_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MagnetPlates.h" },
		{ "ModuleRelativePath", "Public/MagnetPlates.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagnetPlates_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagnetPlates>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagnetPlates_Statics::ClassParams = {
		&UMagnetPlates::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMagnetPlates_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagnetPlates_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagnetPlates()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagnetPlates_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagnetPlates, 2092629547);
	template<> SHOOTERMOVEMENT_API UClass* StaticClass<UMagnetPlates>()
	{
		return UMagnetPlates::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagnetPlates(Z_Construct_UClass_UMagnetPlates, &UMagnetPlates::StaticClass, TEXT("/Script/ShooterMovement"), TEXT("UMagnetPlates"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagnetPlates);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
