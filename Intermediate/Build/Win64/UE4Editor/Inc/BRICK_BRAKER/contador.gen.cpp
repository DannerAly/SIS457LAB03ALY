// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BRICK_BRAKER/contador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecontador() {}
// Cross Module References
	BRICK_BRAKER_API UClass* Z_Construct_UClass_Acontador_NoRegister();
	BRICK_BRAKER_API UClass* Z_Construct_UClass_Acontador();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BRICK_BRAKER();
// End Cross Module References
	void Acontador::StaticRegisterNativesAcontador()
	{
	}
	UClass* Z_Construct_UClass_Acontador_NoRegister()
	{
		return Acontador::StaticClass();
	}
	struct Z_Construct_UClass_Acontador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Acontador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BRICK_BRAKER,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acontador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "contador.h" },
		{ "ModuleRelativePath", "contador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Acontador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acontador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Acontador_Statics::ClassParams = {
		&Acontador::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Acontador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Acontador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Acontador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Acontador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Acontador, 479259835);
	template<> BRICK_BRAKER_API UClass* StaticClass<Acontador>()
	{
		return Acontador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Acontador(Z_Construct_UClass_Acontador, &Acontador::StaticClass, TEXT("/Script/BRICK_BRAKER"), TEXT("Acontador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Acontador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
