// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetShootRewrite/NetShootPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetShootPlayerController() {}
// Cross Module References
	NETSHOOTREWRITE_API UClass* Z_Construct_UClass_ANetShootPlayerController_NoRegister();
	NETSHOOTREWRITE_API UClass* Z_Construct_UClass_ANetShootPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_NetShootRewrite();
// End Cross Module References
	static FName NAME_ANetShootPlayerController_CreatPlayerUI = FName(TEXT("CreatPlayerUI"));
	void ANetShootPlayerController::CreatPlayerUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANetShootPlayerController_CreatPlayerUI),NULL);
	}
	static FName NAME_ANetShootPlayerController_DoCrosshairRecoil = FName(TEXT("DoCrosshairRecoil"));
	void ANetShootPlayerController::DoCrosshairRecoil()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANetShootPlayerController_DoCrosshairRecoil),NULL);
	}
	void ANetShootPlayerController::StaticRegisterNativesANetShootPlayerController()
	{
	}
	struct Z_Construct_UFunction_ANetShootPlayerController_CreatPlayerUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetShootPlayerController_CreatPlayerUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "PLayerUI" },
		{ "ModuleRelativePath", "NetShootPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetShootPlayerController_CreatPlayerUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetShootPlayerController, nullptr, "CreatPlayerUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetShootPlayerController_CreatPlayerUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetShootPlayerController_CreatPlayerUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetShootPlayerController_CreatPlayerUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANetShootPlayerController_CreatPlayerUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetShootPlayerController_DoCrosshairRecoil_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetShootPlayerController_DoCrosshairRecoil_Statics::Function_MetaDataParams[] = {
		{ "Category", "PLayerUI" },
		{ "ModuleRelativePath", "NetShootPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetShootPlayerController_DoCrosshairRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetShootPlayerController, nullptr, "DoCrosshairRecoil", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetShootPlayerController_DoCrosshairRecoil_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetShootPlayerController_DoCrosshairRecoil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetShootPlayerController_DoCrosshairRecoil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANetShootPlayerController_DoCrosshairRecoil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANetShootPlayerController_NoRegister()
	{
		return ANetShootPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ANetShootPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetShootPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_NetShootRewrite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANetShootPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetShootPlayerController_CreatPlayerUI, "CreatPlayerUI" }, // 2140008512
		{ &Z_Construct_UFunction_ANetShootPlayerController_DoCrosshairRecoil, "DoCrosshairRecoil" }, // 3513371926
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetShootPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NetShootPlayerController.h" },
		{ "ModuleRelativePath", "NetShootPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetShootPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetShootPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANetShootPlayerController_Statics::ClassParams = {
		&ANetShootPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANetShootPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANetShootPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANetShootPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANetShootPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANetShootPlayerController, 990672971);
	template<> NETSHOOTREWRITE_API UClass* StaticClass<ANetShootPlayerController>()
	{
		return ANetShootPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANetShootPlayerController(Z_Construct_UClass_ANetShootPlayerController, &ANetShootPlayerController::StaticClass, TEXT("/Script/NetShootRewrite"), TEXT("ANetShootPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetShootPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
