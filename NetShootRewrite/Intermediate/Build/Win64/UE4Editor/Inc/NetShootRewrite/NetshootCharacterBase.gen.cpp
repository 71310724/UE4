// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetShootRewrite/NetshootCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetshootCharacterBase() {}
// Cross Module References
	NETSHOOTREWRITE_API UClass* Z_Construct_UClass_ANetshootCharacterBase_NoRegister();
	NETSHOOTREWRITE_API UClass* Z_Construct_UClass_ANetshootCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_NetShootRewrite();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ANetshootCharacterBase::StaticRegisterNativesANetshootCharacterBase()
	{
	}
	UClass* Z_Construct_UClass_ANetshootCharacterBase_NoRegister()
	{
		return ANetshootCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ANetshootCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPArmMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPArmMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetshootCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NetShootRewrite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetshootCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NetshootCharacterBase.h" },
		{ "ModuleRelativePath", "NetshootCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_PlayerCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NetshootCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANetshootCharacterBase, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_PlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_PlayerCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_FPArmMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NetshootCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_FPArmMesh = { "FPArmMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANetshootCharacterBase, FPArmMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_FPArmMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_FPArmMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetshootCharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_PlayerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_FPArmMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetshootCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetshootCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANetshootCharacterBase_Statics::ClassParams = {
		&ANetshootCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANetshootCharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANetshootCharacterBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANetshootCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANetshootCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANetshootCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANetshootCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANetshootCharacterBase, 2118319610);
	template<> NETSHOOTREWRITE_API UClass* StaticClass<ANetshootCharacterBase>()
	{
		return ANetshootCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANetshootCharacterBase(Z_Construct_UClass_ANetshootCharacterBase, &ANetshootCharacterBase::StaticClass, TEXT("/Script/NetShootRewrite"), TEXT("ANetshootCharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetshootCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
