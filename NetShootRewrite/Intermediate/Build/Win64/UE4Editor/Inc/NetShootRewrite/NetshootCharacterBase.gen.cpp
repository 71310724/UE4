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
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	NETSHOOTREWRITE_API UClass* Z_Construct_UClass_ANetShootPlayerController_NoRegister();
	NETSHOOTREWRITE_API UClass* Z_Construct_UClass_AWeaponServerBase_NoRegister();
	NETSHOOTREWRITE_API UClass* Z_Construct_UClass_AWeaponClientBase_NoRegister();
	NETSHOOTREWRITE_API UEnum* Z_Construct_UEnum_NetShootRewrite_EWeaponType();
// End Cross Module References
	DEFINE_FUNCTION(ANetshootCharacterBase::execClientEquitFPArmPrimary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientEquitFPArmPrimary_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetshootCharacterBase::execServerNormalSpeedWalk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerNormalSpeedWalk_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerNormalSpeedWalk_Validate"));
			return;
		}
		P_THIS->ServerNormalSpeedWalk_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetshootCharacterBase::execServerLowSpeedWalk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerLowSpeedWalk_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerLowSpeedWalk_Validate"));
			return;
		}
		P_THIS->ServerLowSpeedWalk_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetshootCharacterBase::execClientFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetshootCharacterBase::execStopFirePrimary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFirePrimary();
		P_NATIVE_END;
	}
	static FName NAME_ANetshootCharacterBase_ClientEquitFPArmPrimary = FName(TEXT("ClientEquitFPArmPrimary"));
	void ANetshootCharacterBase::ClientEquitFPArmPrimary()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANetshootCharacterBase_ClientEquitFPArmPrimary),NULL);
	}
	static FName NAME_ANetshootCharacterBase_ClientFire = FName(TEXT("ClientFire"));
	void ANetshootCharacterBase::ClientFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANetshootCharacterBase_ClientFire),NULL);
	}
	static FName NAME_ANetshootCharacterBase_ServerLowSpeedWalk = FName(TEXT("ServerLowSpeedWalk"));
	void ANetshootCharacterBase::ServerLowSpeedWalk()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANetshootCharacterBase_ServerLowSpeedWalk),NULL);
	}
	static FName NAME_ANetshootCharacterBase_ServerNormalSpeedWalk = FName(TEXT("ServerNormalSpeedWalk"));
	void ANetshootCharacterBase::ServerNormalSpeedWalk()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANetshootCharacterBase_ServerNormalSpeedWalk),NULL);
	}
	void ANetshootCharacterBase::StaticRegisterNativesANetshootCharacterBase()
	{
		UClass* Class = ANetshootCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientEquitFPArmPrimary", &ANetshootCharacterBase::execClientEquitFPArmPrimary },
			{ "ClientFire", &ANetshootCharacterBase::execClientFire },
			{ "ServerLowSpeedWalk", &ANetshootCharacterBase::execServerLowSpeedWalk },
			{ "ServerNormalSpeedWalk", &ANetshootCharacterBase::execServerNormalSpeedWalk },
			{ "StopFirePrimary", &ANetshootCharacterBase::execStopFirePrimary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANetshootCharacterBase_ClientEquitFPArmPrimary_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetshootCharacterBase_ClientEquitFPArmPrimary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NetshootCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetshootCharacterBase_ClientEquitFPArmPrimary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetshootCharacterBase, nullptr, "ClientEquitFPArmPrimary", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetshootCharacterBase_ClientEquitFPArmPrimary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetshootCharacterBase_ClientEquitFPArmPrimary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetshootCharacterBase_ClientEquitFPArmPrimary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANetshootCharacterBase_ClientEquitFPArmPrimary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetshootCharacterBase_ClientFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetshootCharacterBase_ClientFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NetshootCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetshootCharacterBase_ClientFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetshootCharacterBase, nullptr, "ClientFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetshootCharacterBase_ClientFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetshootCharacterBase_ClientFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetshootCharacterBase_ClientFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANetshootCharacterBase_ClientFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetshootCharacterBase_ServerLowSpeedWalk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetshootCharacterBase_ServerLowSpeedWalk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NetshootCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetshootCharacterBase_ServerLowSpeedWalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetshootCharacterBase, nullptr, "ServerLowSpeedWalk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetshootCharacterBase_ServerLowSpeedWalk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetshootCharacterBase_ServerLowSpeedWalk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetshootCharacterBase_ServerLowSpeedWalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANetshootCharacterBase_ServerLowSpeedWalk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetshootCharacterBase_ServerNormalSpeedWalk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetshootCharacterBase_ServerNormalSpeedWalk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NetshootCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetshootCharacterBase_ServerNormalSpeedWalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetshootCharacterBase, nullptr, "ServerNormalSpeedWalk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetshootCharacterBase_ServerNormalSpeedWalk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetshootCharacterBase_ServerNormalSpeedWalk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetshootCharacterBase_ServerNormalSpeedWalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANetshootCharacterBase_ServerNormalSpeedWalk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetshootCharacterBase_StopFirePrimary_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetshootCharacterBase_StopFirePrimary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NetshootCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetshootCharacterBase_StopFirePrimary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetshootCharacterBase, nullptr, "StopFirePrimary", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetshootCharacterBase_StopFirePrimary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetshootCharacterBase_StopFirePrimary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetshootCharacterBase_StopFirePrimary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANetshootCharacterBase_StopFirePrimary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANetshootCharacterBase_NoRegister()
	{
		return ANetshootCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ANetshootCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientArmAnimWEapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientArmAnimWEapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerWeaponBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerWeaponBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientWeaponeBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientWeaponeBase;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActiveWeapon_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActiveWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetshootCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NetShootRewrite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANetshootCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetshootCharacterBase_ClientEquitFPArmPrimary, "ClientEquitFPArmPrimary" }, // 3810375867
		{ &Z_Construct_UFunction_ANetshootCharacterBase_ClientFire, "ClientFire" }, // 4289661838
		{ &Z_Construct_UFunction_ANetshootCharacterBase_ServerLowSpeedWalk, "ServerLowSpeedWalk" }, // 1193230758
		{ &Z_Construct_UFunction_ANetshootCharacterBase_ServerNormalSpeedWalk, "ServerNormalSpeedWalk" }, // 972865120
		{ &Z_Construct_UFunction_ANetshootCharacterBase_StopFirePrimary, "StopFirePrimary" }, // 1392911521
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ClientArmAnimWEapon_MetaData[] = {
		{ "ModuleRelativePath", "NetshootCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ClientArmAnimWEapon = { "ClientArmAnimWEapon", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANetshootCharacterBase, ClientArmAnimWEapon), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ClientArmAnimWEapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ClientArmAnimWEapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_NetPlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NetshootCharacterBase" },
		{ "ModuleRelativePath", "NetshootCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_NetPlayerController = { "NetPlayerController", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANetshootCharacterBase, NetPlayerController), Z_Construct_UClass_ANetShootPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_NetPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_NetPlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ServerWeaponBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "ModuleRelativePath", "NetshootCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ServerWeaponBase = { "ServerWeaponBase", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANetshootCharacterBase, ServerWeaponBase), Z_Construct_UClass_AWeaponServerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ServerWeaponBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ServerWeaponBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ClientWeaponeBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "ModuleRelativePath", "NetshootCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ClientWeaponeBase = { "ClientWeaponeBase", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANetshootCharacterBase, ClientWeaponeBase), Z_Construct_UClass_AWeaponClientBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ClientWeaponeBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ClientWeaponeBase_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ActiveWeapon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ActiveWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NetshootCharacterBase" },
		{ "ModuleRelativePath", "NetshootCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ActiveWeapon = { "ActiveWeapon", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANetshootCharacterBase, ActiveWeapon), Z_Construct_UEnum_NetShootRewrite_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ActiveWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ActiveWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetshootCharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_PlayerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_FPArmMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ClientArmAnimWEapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_NetPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ServerWeaponBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ClientWeaponeBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ActiveWeapon_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetshootCharacterBase_Statics::NewProp_ActiveWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetshootCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetshootCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANetshootCharacterBase_Statics::ClassParams = {
		&ANetshootCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANetshootCharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ANetshootCharacterBase, 3492285965);
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
