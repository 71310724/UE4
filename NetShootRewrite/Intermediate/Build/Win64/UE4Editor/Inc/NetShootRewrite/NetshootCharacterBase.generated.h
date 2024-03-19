// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETSHOOTREWRITE_NetshootCharacterBase_generated_h
#error "NetshootCharacterBase.generated.h already included, missing '#pragma once' in NetshootCharacterBase.h"
#endif
#define NETSHOOTREWRITE_NetshootCharacterBase_generated_h

#define NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_SPARSE_DATA
#define NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_RPC_WRAPPERS \
	virtual void ClientEquitFPArmPrimary_Implementation(); \
	virtual bool ServerNormalSpeedWalk_Validate(); \
	virtual void ServerNormalSpeedWalk_Implementation(); \
	virtual bool ServerLowSpeedWalk_Validate(); \
	virtual void ServerLowSpeedWalk_Implementation(); \
	virtual void ClientFire_Implementation(); \
 \
	DECLARE_FUNCTION(execClientEquitFPArmPrimary); \
	DECLARE_FUNCTION(execServerNormalSpeedWalk); \
	DECLARE_FUNCTION(execServerLowSpeedWalk); \
	DECLARE_FUNCTION(execClientFire); \
	DECLARE_FUNCTION(execStopFirePrimary);


#define NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientFire_Implementation(); \
 \
	DECLARE_FUNCTION(execClientEquitFPArmPrimary); \
	DECLARE_FUNCTION(execServerNormalSpeedWalk); \
	DECLARE_FUNCTION(execServerLowSpeedWalk); \
	DECLARE_FUNCTION(execClientFire); \
	DECLARE_FUNCTION(execStopFirePrimary);


#define NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_EVENT_PARMS
#define NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_CALLBACK_WRAPPERS
#define NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetshootCharacterBase(); \
	friend struct Z_Construct_UClass_ANetshootCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ANetshootCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetShootRewrite"), NO_API) \
	DECLARE_SERIALIZER(ANetshootCharacterBase)


#define NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesANetshootCharacterBase(); \
	friend struct Z_Construct_UClass_ANetshootCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ANetshootCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetShootRewrite"), NO_API) \
	DECLARE_SERIALIZER(ANetshootCharacterBase)


#define NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANetshootCharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetshootCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetshootCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetshootCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetshootCharacterBase(ANetshootCharacterBase&&); \
	NO_API ANetshootCharacterBase(const ANetshootCharacterBase&); \
public:


#define NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetshootCharacterBase(ANetshootCharacterBase&&); \
	NO_API ANetshootCharacterBase(const ANetshootCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetshootCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetshootCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetshootCharacterBase)


#define NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerCamera() { return STRUCT_OFFSET(ANetshootCharacterBase, PlayerCamera); } \
	FORCEINLINE static uint32 __PPO__FPArmMesh() { return STRUCT_OFFSET(ANetshootCharacterBase, FPArmMesh); } \
	FORCEINLINE static uint32 __PPO__ClientArmAnimWEapon() { return STRUCT_OFFSET(ANetshootCharacterBase, ClientArmAnimWEapon); } \
	FORCEINLINE static uint32 __PPO__NetPlayerController() { return STRUCT_OFFSET(ANetshootCharacterBase, NetPlayerController); } \
	FORCEINLINE static uint32 __PPO__ServerWeaponBase() { return STRUCT_OFFSET(ANetshootCharacterBase, ServerWeaponBase); } \
	FORCEINLINE static uint32 __PPO__ClientWeaponeBase() { return STRUCT_OFFSET(ANetshootCharacterBase, ClientWeaponeBase); } \
	FORCEINLINE static uint32 __PPO__ActiveWeapon() { return STRUCT_OFFSET(ANetshootCharacterBase, ActiveWeapon); }


#define NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_11_PROLOG \
	NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_EVENT_PARMS


#define NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_PRIVATE_PROPERTY_OFFSET \
	NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_SPARSE_DATA \
	NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_RPC_WRAPPERS \
	NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_CALLBACK_WRAPPERS \
	NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_INCLASS \
	NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_PRIVATE_PROPERTY_OFFSET \
	NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_SPARSE_DATA \
	NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_CALLBACK_WRAPPERS \
	NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_INCLASS_NO_PURE_DECLS \
	NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETSHOOTREWRITE_API UClass* StaticClass<class ANetshootCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetShootRewrite_Source_NetShootRewrite_NetshootCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
