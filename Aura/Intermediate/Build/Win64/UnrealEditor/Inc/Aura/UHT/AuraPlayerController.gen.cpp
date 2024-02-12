// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Player/AuraPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraPlayerController() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAuraPlayerController();
	AURA_API UClass* Z_Construct_UClass_AAuraPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void AAuraPlayerController::StaticRegisterNativesAAuraPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraPlayerController);
	UClass* Z_Construct_UClass_AAuraPlayerController_NoRegister()
	{
		return AAuraPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AAuraPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuraContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AuraContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MoveAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuraPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/AuraPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext = { "AuraContext", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, AuraContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext_MetaData), Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraPlayerController_Statics::ClassParams = {
		&AAuraPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAuraPlayerController()
	{
		if (!Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton, Z_Construct_UClass_AAuraPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AAuraPlayerController>()
	{
		return AAuraPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraPlayerController);
	AAuraPlayerController::~AAuraPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Player_AuraPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Player_AuraPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAuraPlayerController, AAuraPlayerController::StaticClass, TEXT("AAuraPlayerController"), &Z_Registration_Info_UClass_AAuraPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraPlayerController), 4200811239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Player_AuraPlayerController_h_2758404039(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Player_AuraPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Player_AuraPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
