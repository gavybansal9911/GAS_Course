// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Characters/AuraCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraCharacterBase() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAuraCharacterBase();
	AURA_API UClass* Z_Construct_UClass_AAuraCharacterBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void AAuraCharacterBase::StaticRegisterNativesAAuraCharacterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraCharacterBase);
	UClass* Z_Construct_UClass_AAuraCharacterBase_NoRegister()
	{
		return AAuraCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AAuraCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Weapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuraCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/AuraCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Characters/AuraCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0024080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_Weapon_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_Weapon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraCharacterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_Weapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraCharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraCharacterBase_Statics::ClassParams = {
		&AAuraCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAuraCharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraCharacterBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAuraCharacterBase()
	{
		if (!Z_Registration_Info_UClass_AAuraCharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraCharacterBase.OuterSingleton, Z_Construct_UClass_AAuraCharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAuraCharacterBase.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AAuraCharacterBase>()
	{
		return AAuraCharacterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraCharacterBase);
	AAuraCharacterBase::~AAuraCharacterBase() {}
	struct Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Characters_AuraCharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Characters_AuraCharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAuraCharacterBase, AAuraCharacterBase::StaticClass, TEXT("AAuraCharacterBase"), &Z_Registration_Info_UClass_AAuraCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraCharacterBase), 3046612106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Characters_AuraCharacterBase_h_1704463136(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Characters_AuraCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Characters_AuraCharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
