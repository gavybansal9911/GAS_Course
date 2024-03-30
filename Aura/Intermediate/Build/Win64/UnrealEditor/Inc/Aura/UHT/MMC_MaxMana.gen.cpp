// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/MMC/MMC_MaxMana.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMC_MaxMana() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UMMC_MaxMana();
	AURA_API UClass* Z_Construct_UClass_UMMC_MaxMana_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UMMC_MaxMana::StaticRegisterNativesUMMC_MaxMana()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMC_MaxMana);
	UClass* Z_Construct_UClass_UMMC_MaxMana_NoRegister()
	{
		return UMMC_MaxMana::StaticClass();
	}
	struct Z_Construct_UClass_UMMC_MaxMana_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMC_MaxMana_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_MaxMana_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMC_MaxMana_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/MMC/MMC_MaxMana.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MMC/MMC_MaxMana.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMC_MaxMana_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_MaxMana>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_MaxMana_Statics::ClassParams = {
		&UMMC_MaxMana::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_MaxMana_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_MaxMana_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMMC_MaxMana()
	{
		if (!Z_Registration_Info_UClass_UMMC_MaxMana.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_MaxMana.OuterSingleton, Z_Construct_UClass_UMMC_MaxMana_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMMC_MaxMana.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UMMC_MaxMana>()
	{
		return UMMC_MaxMana::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_MaxMana);
	UMMC_MaxMana::~UMMC_MaxMana() {}
	struct Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_AbilitySystem_MMC_MMC_MaxMana_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_AbilitySystem_MMC_MMC_MaxMana_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_MaxMana, UMMC_MaxMana::StaticClass, TEXT("UMMC_MaxMana"), &Z_Registration_Info_UClass_UMMC_MaxMana, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_MaxMana), 3994887742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_AbilitySystem_MMC_MMC_MaxMana_h_25456143(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_AbilitySystem_MMC_MMC_MaxMana_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_AbilitySystem_MMC_MMC_MaxMana_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
