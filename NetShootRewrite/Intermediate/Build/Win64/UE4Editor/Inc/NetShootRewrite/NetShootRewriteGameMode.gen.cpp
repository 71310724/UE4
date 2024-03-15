// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetShootRewrite/NetShootRewriteGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetShootRewriteGameMode() {}
// Cross Module References
	NETSHOOTREWRITE_API UClass* Z_Construct_UClass_ANetShootRewriteGameMode_NoRegister();
	NETSHOOTREWRITE_API UClass* Z_Construct_UClass_ANetShootRewriteGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NetShootRewrite();
// End Cross Module References
	void ANetShootRewriteGameMode::StaticRegisterNativesANetShootRewriteGameMode()
	{
	}
	UClass* Z_Construct_UClass_ANetShootRewriteGameMode_NoRegister()
	{
		return ANetShootRewriteGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANetShootRewriteGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetShootRewriteGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NetShootRewrite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetShootRewriteGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NetShootRewriteGameMode.h" },
		{ "ModuleRelativePath", "NetShootRewriteGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetShootRewriteGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetShootRewriteGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANetShootRewriteGameMode_Statics::ClassParams = {
		&ANetShootRewriteGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANetShootRewriteGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANetShootRewriteGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANetShootRewriteGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANetShootRewriteGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANetShootRewriteGameMode, 779438863);
	template<> NETSHOOTREWRITE_API UClass* StaticClass<ANetShootRewriteGameMode>()
	{
		return ANetShootRewriteGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANetShootRewriteGameMode(Z_Construct_UClass_ANetShootRewriteGameMode, &ANetShootRewriteGameMode::StaticClass, TEXT("/Script/NetShootRewrite"), TEXT("ANetShootRewriteGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetShootRewriteGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
