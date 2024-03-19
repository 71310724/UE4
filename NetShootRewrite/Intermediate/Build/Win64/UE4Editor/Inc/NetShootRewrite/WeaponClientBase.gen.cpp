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
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWeaponClientBase::execDisplayWeaponEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayWeaponEffect();
		P_NATIVE_END;
	}
	static FName NAME_AWeaponClientBase_PlayAnimation = FName(TEXT("PlayAnimation"));
	void AWeaponClientBase::PlayAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponClientBase_PlayAnimation),NULL);
	}
	void AWeaponClientBase::StaticRegisterNativesAWeaponClientBase()
	{
		UClass* Class = AWeaponClientBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayWeaponEffect", &AWeaponClientBase::execDisplayWeaponEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponClientBase_DisplayWeaponEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponClientBase_DisplayWeaponEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponClientBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponClientBase_DisplayWeaponEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponClientBase, nullptr, "DisplayWeaponEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponClientBase_DisplayWeaponEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponClientBase_DisplayWeaponEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponClientBase_DisplayWeaponEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponClientBase_DisplayWeaponEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponClientBase_PlayAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponClientBase_PlayAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPSAnimtion" },
		{ "ModuleRelativePath", "WeaponClientBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponClientBase_PlayAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponClientBase, nullptr, "PlayAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponClientBase_PlayAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponClientBase_PlayAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponClientBase_PlayAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponClientBase_PlayAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeaponClientBase_NoRegister()
	{
		return AWeaponClientBase::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponClientBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponClientAcotr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponClientAcotr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientArmFireAnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientArmFireAnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireClientPartical_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireClientPartical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShakeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CameraShakeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponClientBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NetShootRewrite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponClientBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponClientBase_DisplayWeaponEffect, "DisplayWeaponEffect" }, // 2047203788
		{ &Z_Construct_UFunction_AWeaponClientBase_PlayAnimation, "PlayAnimation" }, // 3767486844
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_ClientArmFireAnimMontage_MetaData[] = {
		{ "Category", "WeaponClientBase" },
		{ "ModuleRelativePath", "WeaponClientBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_ClientArmFireAnimMontage = { "ClientArmFireAnimMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponClientBase, ClientArmFireAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_ClientArmFireAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_ClientArmFireAnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_Sound2D_MetaData[] = {
		{ "Category", "WeaponClientBase" },
		{ "ModuleRelativePath", "WeaponClientBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_Sound2D = { "Sound2D", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponClientBase, Sound2D), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_Sound2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_Sound2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_FireClientPartical_MetaData[] = {
		{ "Category", "WeaponClientBase" },
		{ "ModuleRelativePath", "WeaponClientBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_FireClientPartical = { "FireClientPartical", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponClientBase, FireClientPartical), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_FireClientPartical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_FireClientPartical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_CameraShakeClass_MetaData[] = {
		{ "Category", "WeaponClientBase" },
		{ "ModuleRelativePath", "WeaponClientBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_CameraShakeClass = { "CameraShakeClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponClientBase, CameraShakeClass), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_CameraShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_CameraShakeClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponClientBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_WeaponClientAcotr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_ClientArmFireAnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_Sound2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_FireClientPartical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponClientBase_Statics::NewProp_CameraShakeClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponClientBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponClientBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponClientBase_Statics::ClassParams = {
		&AWeaponClientBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponClientBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AWeaponClientBase, 4123069176);
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
