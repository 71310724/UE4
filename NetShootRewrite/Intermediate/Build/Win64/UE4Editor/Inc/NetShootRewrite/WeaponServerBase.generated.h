// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef NETSHOOTREWRITE_WeaponServerBase_generated_h
#error "WeaponServerBase.generated.h already included, missing '#pragma once' in WeaponServerBase.h"
#endif
#define NETSHOOTREWRITE_WeaponServerBase_generated_h

#define NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_SPARSE_DATA
#define NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponetBeginOverlap);


#define NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponetBeginOverlap);


#define NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponServerBase(); \
	friend struct Z_Construct_UClass_AWeaponServerBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponServerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetShootRewrite"), NO_API) \
	DECLARE_SERIALIZER(AWeaponServerBase)


#define NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponServerBase(); \
	friend struct Z_Construct_UClass_AWeaponServerBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponServerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetShootRewrite"), NO_API) \
	DECLARE_SERIALIZER(AWeaponServerBase)


#define NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponServerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponServerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponServerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponServerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponServerBase(AWeaponServerBase&&); \
	NO_API AWeaponServerBase(const AWeaponServerBase&); \
public:


#define NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponServerBase(AWeaponServerBase&&); \
	NO_API AWeaponServerBase(const AWeaponServerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponServerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponServerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponServerBase)


#define NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ServerWeaponMesh() { return STRUCT_OFFSET(AWeaponServerBase, ServerWeaponMesh); } \
	FORCEINLINE static uint32 __PPO__SphereCollision() { return STRUCT_OFFSET(AWeaponServerBase, SphereCollision); }


#define NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_16_PROLOG
#define NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_PRIVATE_PROPERTY_OFFSET \
	NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_SPARSE_DATA \
	NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_RPC_WRAPPERS \
	NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_INCLASS \
	NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_PRIVATE_PROPERTY_OFFSET \
	NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_SPARSE_DATA \
	NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_INCLASS_NO_PURE_DECLS \
	NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETSHOOTREWRITE_API UClass* StaticClass<class AWeaponServerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetShootRewrite_Source_NetShootRewrite_WeaponServerBase_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::Ak47) \
	op(EWeaponType::DesertEagle) 

enum class EWeaponType : uint8;
template<> NETSHOOTREWRITE_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
