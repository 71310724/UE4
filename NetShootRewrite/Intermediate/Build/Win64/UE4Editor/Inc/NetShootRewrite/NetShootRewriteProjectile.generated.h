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
struct FVector;
struct FHitResult;
#ifdef NETSHOOTREWRITE_NetShootRewriteProjectile_generated_h
#error "NetShootRewriteProjectile.generated.h already included, missing '#pragma once' in NetShootRewriteProjectile.h"
#endif
#define NETSHOOTREWRITE_NetShootRewriteProjectile_generated_h

#define NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_SPARSE_DATA
#define NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetShootRewriteProjectile(); \
	friend struct Z_Construct_UClass_ANetShootRewriteProjectile_Statics; \
public: \
	DECLARE_CLASS(ANetShootRewriteProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetShootRewrite"), NO_API) \
	DECLARE_SERIALIZER(ANetShootRewriteProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANetShootRewriteProjectile(); \
	friend struct Z_Construct_UClass_ANetShootRewriteProjectile_Statics; \
public: \
	DECLARE_CLASS(ANetShootRewriteProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetShootRewrite"), NO_API) \
	DECLARE_SERIALIZER(ANetShootRewriteProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANetShootRewriteProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetShootRewriteProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetShootRewriteProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetShootRewriteProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetShootRewriteProjectile(ANetShootRewriteProjectile&&); \
	NO_API ANetShootRewriteProjectile(const ANetShootRewriteProjectile&); \
public:


#define NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetShootRewriteProjectile(ANetShootRewriteProjectile&&); \
	NO_API ANetShootRewriteProjectile(const ANetShootRewriteProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetShootRewriteProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetShootRewriteProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetShootRewriteProjectile)


#define NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ANetShootRewriteProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ANetShootRewriteProjectile, ProjectileMovement); }


#define NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_12_PROLOG
#define NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_SPARSE_DATA \
	NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_RPC_WRAPPERS \
	NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_INCLASS \
	NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_SPARSE_DATA \
	NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_INCLASS_NO_PURE_DECLS \
	NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETSHOOTREWRITE_API UClass* StaticClass<class ANetShootRewriteProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetShootRewrite_Source_NetShootRewrite_NetShootRewriteProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
