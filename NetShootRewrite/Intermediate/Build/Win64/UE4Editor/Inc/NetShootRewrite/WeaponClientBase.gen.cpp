// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetShootRewrite/WeaponClientBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponClientBase() {}
// Cross Module References
	NETSHOOTREWRITE_API UClass* Z_Construct_UClass_AWeaponClientBase_NoRegister();
	NETSHOOTREWRITE_API UClass* Z_Construct_UClass_AWeaponClientBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NetShootRewrite();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AWeaponClientBase::StaticRegisterNativesAWeaponClientBase()
	{
	}
	UClass* Z_Construct_UClass_AWeaponClientBase_NoRegister()
	{
		return AWeaponClientBase::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponClientBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponClientAcotr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponClientAcotr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponClientBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NetShootRewrite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponClientBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponClientBase.h" },
		{ "ModuleRelativePath", "WeaponClientBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_WeaponClientAcotr_MetaData[] = {
		{ "Category", "WeaponClientBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponClientBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_WeaponClientAcotr = { "WeaponClientAcotr", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponClientBase, WeaponClientAcotr), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_WeaponClientAcotr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_WeaponClientAcotr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponClientBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_WeaponClientAcotr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponClientBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponClientBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponClientBase_Statics::ClassParams = {
		&AWeaponClientBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeaponClientBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponClientBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponClientBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponClientBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponClientBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponClientBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponClientBase, 3033565576);
	template<> NETSHOOTREWRITE_API UClass* StaticClass<AWeaponClientBase>()
	{
		return AWeaponClientBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponClientBase(Z_Construct_UClass_AWeaponClientBase, &AWeaponClientBase::StaticClass, TEXT("/Script/NetShootRewrite"), TEXT("AWeaponClientBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponClientBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
