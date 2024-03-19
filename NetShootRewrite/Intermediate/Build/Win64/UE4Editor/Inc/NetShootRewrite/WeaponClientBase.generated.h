// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETSHOOTREWRITE_WeaponClientBase_generated_h
#error "WeaponClientBase.generated.h already included, missing '#pragma once' in WeaponClientBase.h"
#endif
#define NETSHOOTREWRITE_WeaponClientBase_generated_h

#define NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_SPARSE_DATA
#define NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisplayWeaponEffect);


#define NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisplayWeaponEffect);


#define NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_EVENT_PARMS
#define NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_CALLBACK_WRAPPERS
#define NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponClientBase(); \
	friend struct Z_Construct_UClass_AWeaponClientBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponClientBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetShootRewrite"), NO_API) \
	DECLARE_SERIALIZER(AWeaponClientBase)


#define NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponClientBase(); \
	friend struct Z_Construct_UClass_AWeaponClientBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponClientBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetShootRewrite"), NO_API) \
	DECLARE_SERIALIZER(AWeaponClientBase)


#define NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponClientBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponClientBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponClientBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponClientBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponClientBase(AWeaponClientBase&&); \
	NO_API AWeaponClientBase(const AWeaponClientBase&); \
public:


#define NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponClientBase(AWeaponClientBase&&); \
	NO_API AWeaponClientBase(const AWeaponClientBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponClientBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponClientBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponClientBase)


#define NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponClientAcotr() { return STRUCT_OFFSET(AWeaponClientBase, WeaponClientAcotr); }


#define NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_9_PROLOG \
	NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_EVENT_PARMS


#define NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_PRIVATE_PROPERTY_OFFSET \
	NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_SPARSE_DATA \
	NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_RPC_WRAPPERS \
	NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_CALLBACK_WRAPPERS \
	NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_INCLASS \
	NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_PRIVATE_PROPERTY_OFFSET \
	NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_SPARSE_DATA \
	NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_CALLBACK_WRAPPERS \
	NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_INCLASS_NO_PURE_DECLS \
	NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETSHOOTREWRITE_API UClass* StaticClass<class AWeaponClientBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetShootRewrite_Source_NetShootRewrite_WeaponClientBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
