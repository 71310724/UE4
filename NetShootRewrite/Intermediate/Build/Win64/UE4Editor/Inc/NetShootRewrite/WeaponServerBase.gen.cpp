// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetShootRewrite/WeaponServerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponServerBase() {}
// Cross Module References
	NETSHOOTREWRITE_API UEnum* Z_Construct_UEnum_NetShootRewrite_EWeaponType();
	UPackage* Z_Construct_UPackage__Script_NetShootRewrite();
	NETSHOOTREWRITE_API UClass* Z_Construct_UClass_AWeaponServerBase_NoRegister();
	NETSHOOTREWRITE_API UClass* Z_Construct_UClass_AWeaponServerBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NETSHOOTREWRITE_API UClass* Z_Construct_UClass_AWeaponClientBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	static UEnum* EWeaponType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NetShootRewrite_EWeaponType, Z_Construct_UPackage__Script_NetShootRewrite(), TEXT("EWeaponType"));
		}
		return Singleton;
	}
	template<> NETSHOOTREWRITE_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponType(EWeaponType_StaticEnum, TEXT("/Script/NetShootRewrite"), TEXT("EWeaponType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NetShootRewrite_EWeaponType_Hash() { return 4239213852U; }
	UEnum* Z_Construct_UEnum_NetShootRewrite_EWeaponType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NetShootRewrite();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponType"), 0, Get_Z_Construct_UEnum_NetShootRewrite_EWeaponType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponType::Ak47", (int64)EWeaponType::Ak47 },
				{ "EWeaponType::DesertEagle", (int64)EWeaponType::DesertEagle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ak47.DisplayName", "\xe2\x80\x9c""Ak47\xe2\x80\x9d" },
				{ "Ak47.Name", "EWeaponType::Ak47" },
				{ "BlueprintType", "true" },
				{ "DesertEagle.DisplayName", "\xe2\x80\x9c""DesertEagle\xe2\x80\x9d" },
				{ "DesertEagle.Name", "EWeaponType::DesertEagle" },
				{ "ModuleRelativePath", "WeaponServerBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NetShootRewrite,
				nullptr,
				"EWeaponType",
				"EWeaponType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AWeaponServerBase::execMuliticastShootingEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->MuliticastShootingEffect_Validate())
		{
			RPC_ValidateFailed(TEXT("MuliticastShootingEffect_Validate"));
			return;
		}
		P_THIS->MuliticastShootingEffect_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponServerBase::execOnComponetBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponetBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	static FName NAME_AWeaponServerBase_MuliticastShootingEffect = FName(TEXT("MuliticastShootingEffect"));
	void AWeaponServerBase::MuliticastShootingEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponServerBase_MuliticastShootingEffect),NULL);
	}
	void AWeaponServerBase::StaticRegisterNativesAWeaponServerBase()
	{
		UClass* Class = AWeaponServerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MuliticastShootingEffect", &AWeaponServerBase::execMuliticastShootingEffect },
			{ "OnComponetBeginOverlap", &AWeaponServerBase::execOnComponetBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponServerBase_MuliticastShootingEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponServerBase_MuliticastShootingEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponServerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponServerBase_MuliticastShootingEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponServerBase, nullptr, "MuliticastShootingEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponServerBase_MuliticastShootingEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponServerBase_MuliticastShootingEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponServerBase_MuliticastShootingEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponServerBase_MuliticastShootingEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics
	{
		struct WeaponServerBase_eventOnComponetBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponServerBase_eventOnComponetBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponServerBase_eventOnComponetBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponServerBase_eventOnComponetBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponServerBase_eventOnComponetBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((WeaponServerBase_eventOnComponetBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponServerBase_eventOnComponetBeginOverlap_Parms), &Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponServerBase_eventOnComponetBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponServerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponServerBase, nullptr, "OnComponetBeginOverlap", nullptr, nullptr, sizeof(WeaponServerBase_eventOnComponetBeginOverlap_Parms), Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeaponServerBase_NoRegister()
	{
		return AWeaponServerBase::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponServerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KindofWeapon_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KindofWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_KindofWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponClient_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunCurrentAmmon_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GunCurrentAmmon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipCurrentAmmon_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClipCurrentAmmon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipMaxAmmon_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClipMaxAmmon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerWeaponMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerWeaponMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireServerPartical_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireServerPartical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound3D_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound3D;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponServerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NetShootRewrite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponServerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponServerBase_MuliticastShootingEffect, "MuliticastShootingEffect" }, // 632773674
		{ &Z_Construct_UFunction_AWeaponServerBase_OnComponetBeginOverlap, "OnComponetBeginOverlap" }, // 3159466034
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponServerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponServerBase.h" },
		{ "ModuleRelativePath", "WeaponServerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_KindofWeapon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_KindofWeapon_MetaData[] = {
		{ "Category", "WeaponServerBase" },
		{ "ModuleRelativePath", "WeaponServerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_KindofWeapon = { "KindofWeapon", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponServerBase, KindofWeapon), Z_Construct_UEnum_NetShootRewrite_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_KindofWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_KindofWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_WeaponClient_MetaData[] = {
		{ "Category", "WeaponServerBase" },
		{ "ModuleRelativePath", "WeaponServerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_WeaponClient = { "WeaponClient", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponServerBase, WeaponClient), Z_Construct_UClass_AWeaponClientBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_WeaponClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_WeaponClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_GunCurrentAmmon_MetaData[] = {
		{ "Category", "WeaponServerBase" },
		{ "ModuleRelativePath", "WeaponServerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_GunCurrentAmmon = { "GunCurrentAmmon", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponServerBase, GunCurrentAmmon), METADATA_PARAMS(Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_GunCurrentAmmon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_GunCurrentAmmon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_ClipCurrentAmmon_MetaData[] = {
		{ "Category", "WeaponServerBase" },
		{ "Comment", "//\xe6\x9e\xaa\xe4\xbd\x93\xe6\x80\xbb\xe7\x9a\x84\xe5\xad\x90\xe5\xbc\xb9\n" },
		{ "ModuleRelativePath", "WeaponServerBase.h" },
		{ "ToolTip", "\xe6\x9e\xaa\xe4\xbd\x93\xe6\x80\xbb\xe7\x9a\x84\xe5\xad\x90\xe5\xbc\xb9" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_ClipCurrentAmmon = { "ClipCurrentAmmon", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponServerBase, ClipCurrentAmmon), METADATA_PARAMS(Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_ClipCurrentAmmon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_ClipCurrentAmmon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_ClipMaxAmmon_MetaData[] = {
		{ "Category", "WeaponServerBase" },
		{ "Comment", "//\xe5\xbd\x93\xe5\x89\x8d\xe5\xbc\xb9\xe5\xa4\xb9\xe5\xad\x90\xe5\xbc\xb9\n" },
		{ "ModuleRelativePath", "WeaponServerBase.h" },
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe5\xbc\xb9\xe5\xa4\xb9\xe5\xad\x90\xe5\xbc\xb9" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_ClipMaxAmmon = { "ClipMaxAmmon", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponServerBase, ClipMaxAmmon), METADATA_PARAMS(Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_ClipMaxAmmon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_ClipMaxAmmon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_ServerWeaponMesh_MetaData[] = {
		{ "Category", "WeaponServerBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponServerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_ServerWeaponMesh = { "ServerWeaponMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponServerBase, ServerWeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_ServerWeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_ServerWeaponMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_SphereCollision_MetaData[] = {
		{ "Category", "WeaponServerBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponServerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponServerBase, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_SphereCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_SphereCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_FireServerPartical_MetaData[] = {
		{ "Category", "WeaponServerBase" },
		{ "ModuleRelativePath", "WeaponServerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_FireServerPartical = { "FireServerPartical", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponServerBase, FireServerPartical), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_FireServerPartical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_FireServerPartical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_Sound3D_MetaData[] = {
		{ "Category", "WeaponServerBase" },
		{ "ModuleRelativePath", "WeaponServerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_Sound3D = { "Sound3D", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponServerBase, Sound3D), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_Sound3D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_Sound3D_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponServerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_KindofWeapon_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_KindofWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_WeaponClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_GunCurrentAmmon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_ClipCurrentAmmon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_ClipMaxAmmon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_ServerWeaponMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_SphereCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_FireServerPartical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponServerBase_Statics::NewProp_Sound3D,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponServerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponServerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponServerBase_Statics::ClassParams = {
		&AWeaponServerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponServerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponServerBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponServerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponServerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponServerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponServerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponServerBase, 561535154);
	template<> NETSHOOTREWRITE_API UClass* StaticClass<AWeaponServerBase>()
	{
		return AWeaponServerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponServerBase(Z_Construct_UClass_AWeaponServerBase, &AWeaponServerBase::StaticClass, TEXT("/Script/NetShootRewrite"), TEXT("AWeaponServerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponServerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
