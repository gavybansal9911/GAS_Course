// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Interaction/EnemyInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyInterface() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UEnemyInterface();
	AURA_API UClass* Z_Construct_UClass_UEnemyInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UEnemyInterface::StaticRegisterNativesUEnemyInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyInterface);
	UClass* Z_Construct_UClass_UEnemyInterface_NoRegister()
	{
		return UEnemyInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/EnemyInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEnemyInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyInterface_Statics::ClassParams = {
		&UEnemyInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEnemyInterface()
	{
		if (!Z_Registration_Info_UClass_UEnemyInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyInterface.OuterSingleton, Z_Construct_UClass_UEnemyInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyInterface.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UEnemyInterface>()
	{
		return UEnemyInterface::StaticClass();
	}
	UEnemyInterface::UEnemyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyInterface);
	UEnemyInterface::~UEnemyInterface() {}
	struct Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Interaction_EnemyInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Interaction_EnemyInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyInterface, UEnemyInterface::StaticClass, TEXT("UEnemyInterface"), &Z_Registration_Info_UClass_UEnemyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyInterface), 1736835009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Interaction_EnemyInterface_h_3915404036(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Interaction_EnemyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_Interaction_EnemyInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
