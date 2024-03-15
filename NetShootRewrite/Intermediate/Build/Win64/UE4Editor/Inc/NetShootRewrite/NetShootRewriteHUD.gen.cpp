// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetShootRewrite/NetShootRewriteHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetShootRewriteHUD() {}
// Cross Module References
	NETSHOOTREWRITE_API UClass* Z_Construct_UClass_ANetShootRewriteHUD_NoRegister();
	NETSHOOTREWRITE_API UClass* Z_Construct_UClass_ANetShootRewriteHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_NetShootRewrite();
// End Cross Module References
	void ANetShootRewriteHUD::StaticRegisterNativesANetShootRewriteHUD()
	{
	}
	UClass* Z_Construct_UClass_ANetShootRewriteHUD_NoRegister()
	{
		return ANetShootRewriteHUD::StaticClass();
	}
	struct Z_Construct_UClass_ANetShootRewriteHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetShootRewriteHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_NetShootRewrite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetShootRewriteHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "NetShootRewriteHUD.h" },
		{ "ModuleRelativePath", "NetShootRewriteHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetShootRewriteHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetShootRewriteHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANetShootRewriteHUD_Statics::ClassParams = {
		&ANetShootRewriteHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANetShootRewriteHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANetShootRewriteHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANetShootRewriteHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANetShootRewriteHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANetShootRewriteHUD, 1924212358);
	template<> NETSHOOTREWRITE_API UClass* StaticClass<ANetShootRewriteHUD>()
	{
		return ANetShootRewriteHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANetShootRewriteHUD(Z_Construct_UClass_ANetShootRewriteHUD, &ANetShootRewriteHUD::StaticClass, TEXT("/Script/NetShootRewrite"), TEXT("ANetShootRewriteHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetShootRewriteHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
