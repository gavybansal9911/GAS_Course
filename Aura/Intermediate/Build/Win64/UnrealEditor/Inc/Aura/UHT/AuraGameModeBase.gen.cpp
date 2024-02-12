// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Game/AuraGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraGameModeBase() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAuraGameModeBase();
	AURA_API UClass* Z_Construct_UClass_AAuraGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void AAuraGameModeBase::StaticRegisterNativesAAuraGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraGameModeBase);
	UClass* Z_Construct_UClass_AAuraGameModeBase_NoRegister()
	{
		return AAuraGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAuraGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuraGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/AuraGameModeBase.h" },
		{ "ModuleRelativePath", "Public/Game/AuraGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraGameModeBase_Statics::ClassParams = {
		&AAuraGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAuraGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AAuraGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraGameModeBase.OuterSingleton, Z_Construct_UClass_AAuraGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAuraGameModeBase.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AAuraGameModeBase>()
	{
		return AAuraGameModeBase::StaticClass();
	}
	AAuraGameModeBase::AAuraGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraGameModeBase);
	AAuraGameModeBase::~AAuraGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Game_AuraGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Game_AuraGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAuraGameModeBase, AAuraGameModeBase::StaticClass, TEXT("AAuraGameModeBase"), &Z_Registration_Info_UClass_AAuraGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraGameModeBase), 3116762504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Game_AuraGameModeBase_h_531190491(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Game_AuraGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Game_AuraGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
