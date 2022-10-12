// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BRICK_BRAKER/Ladrillo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLadrillo() {}
// Cross Module References
	BRICK_BRAKER_API UClass* Z_Construct_UClass_ALadrillo_NoRegister();
	BRICK_BRAKER_API UClass* Z_Construct_UClass_ALadrillo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BRICK_BRAKER();
// End Cross Module References
	void ALadrillo::StaticRegisterNativesALadrillo()
	{
	}
	UClass* Z_Construct_UClass_ALadrillo_NoRegister()
	{
		return ALadrillo::StaticClass();
	}
	struct Z_Construct_UClass_ALadrillo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALadrillo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BRICK_BRAKER,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALadrillo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ladrillo.h" },
		{ "ModuleRelativePath", "Ladrillo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALadrillo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALadrillo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALadrillo_Statics::ClassParams = {
		&ALadrillo::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALadrillo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALadrillo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALadrillo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALadrillo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALadrillo, 3686726956);
	template<> BRICK_BRAKER_API UClass* StaticClass<ALadrillo>()
	{
		return ALadrillo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALadrillo(Z_Construct_UClass_ALadrillo, &ALadrillo::StaticClass, TEXT("/Script/BRICK_BRAKER"), TEXT("ALadrillo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALadrillo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
