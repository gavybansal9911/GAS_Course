// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/AuraAttributeSet.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAttributeSet() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraAttributeSet();
	AURA_API UClass* Z_Construct_UClass_UAuraAttributeSet_NoRegister();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FEffectProperties();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EffectProperties;
class UScriptStruct* FEffectProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EffectProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EffectProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectProperties, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("EffectProperties"));
	}
	return Z_Registration_Info_UScriptStruct_EffectProperties.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FEffectProperties>()
{
	return FEffectProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEffectProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAvatarActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAvatarActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetASC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAvatarActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetAvatarActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffectProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor = { "SourceAvatarActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController = { "SourceController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter = { "SourceCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC = { "TargetASC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor = { "TargetAvatarActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController = { "TargetController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		&NewStructOps,
		"EffectProperties",
		Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers),
		sizeof(FEffectProperties),
		alignof(FEffectProperties),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEffectProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_EffectProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EffectProperties.InnerSingleton, Z_Construct_UScriptStruct_FEffectProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EffectProperties.InnerSingleton;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_ManaRegeneration)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldManaRegeneration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ManaRegeneration(Z_Param_Out_OldManaRegeneration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_HealthRegeneration)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealthRegeneration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HealthRegeneration(Z_Param_Out_OldHealthRegeneration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_CriticalHitResistance)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCriticalHitResistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CriticalHitResistance(Z_Param_Out_OldCriticalHitResistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_CriticalHitDamage)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCriticalHitDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CriticalHitDamage(Z_Param_Out_OldCriticalHitDamage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_CriticalHitChance)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCriticalHitChance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CriticalHitChance(Z_Param_Out_OldCriticalHitChance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_BlockChance)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldBlockChance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BlockChance(Z_Param_Out_OldBlockChance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_ArmorPenetration)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldArmorPenetration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ArmorPenetration(Z_Param_Out_OldArmorPenetration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Armor)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldArmor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Armor(Z_Param_Out_OldArmor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Vigor)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldVigor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Vigor(Z_Param_Out_OldVigor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Resilience)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldResilience);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Resilience(Z_Param_Out_OldResilience);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Intelligence)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldIntelligence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Intelligence(Z_Param_Out_OldIntelligence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Strength)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Strength(Z_Param_Out_OldStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_MaxMana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxMana(Z_Param_Out_OldMaxMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Mana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_MaxHealth)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
		P_NATIVE_END;
	}
	void UAuraAttributeSet::StaticRegisterNativesUAuraAttributeSet()
	{
		UClass* Class = UAuraAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Armor", &UAuraAttributeSet::execOnRep_Armor },
			{ "OnRep_ArmorPenetration", &UAuraAttributeSet::execOnRep_ArmorPenetration },
			{ "OnRep_BlockChance", &UAuraAttributeSet::execOnRep_BlockChance },
			{ "OnRep_CriticalHitChance", &UAuraAttributeSet::execOnRep_CriticalHitChance },
			{ "OnRep_CriticalHitDamage", &UAuraAttributeSet::execOnRep_CriticalHitDamage },
			{ "OnRep_CriticalHitResistance", &UAuraAttributeSet::execOnRep_CriticalHitResistance },
			{ "OnRep_Health", &UAuraAttributeSet::execOnRep_Health },
			{ "OnRep_HealthRegeneration", &UAuraAttributeSet::execOnRep_HealthRegeneration },
			{ "OnRep_Intelligence", &UAuraAttributeSet::execOnRep_Intelligence },
			{ "OnRep_Mana", &UAuraAttributeSet::execOnRep_Mana },
			{ "OnRep_ManaRegeneration", &UAuraAttributeSet::execOnRep_ManaRegeneration },
			{ "OnRep_MaxHealth", &UAuraAttributeSet::execOnRep_MaxHealth },
			{ "OnRep_MaxMana", &UAuraAttributeSet::execOnRep_MaxMana },
			{ "OnRep_Resilience", &UAuraAttributeSet::execOnRep_Resilience },
			{ "OnRep_Strength", &UAuraAttributeSet::execOnRep_Strength },
			{ "OnRep_Vigor", &UAuraAttributeSet::execOnRep_Vigor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics
	{
		struct AuraAttributeSet_eventOnRep_Armor_Parms
		{
			FGameplayAttributeData OldArmor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldArmor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldArmor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor = { "OldArmor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Armor_Parms, OldArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Armor", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::AuraAttributeSet_eventOnRep_Armor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::AuraAttributeSet_eventOnRep_Armor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics
	{
		struct AuraAttributeSet_eventOnRep_ArmorPenetration_Parms
		{
			FGameplayAttributeData OldArmorPenetration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldArmorPenetration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldArmorPenetration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_OldArmorPenetration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_OldArmorPenetration = { "OldArmorPenetration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_ArmorPenetration_Parms, OldArmorPenetration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_OldArmorPenetration_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_OldArmorPenetration_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_OldArmorPenetration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_ArmorPenetration", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::AuraAttributeSet_eventOnRep_ArmorPenetration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::AuraAttributeSet_eventOnRep_ArmorPenetration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics
	{
		struct AuraAttributeSet_eventOnRep_BlockChance_Parms
		{
			FGameplayAttributeData OldBlockChance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldBlockChance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldBlockChance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance = { "OldBlockChance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_BlockChance_Parms, OldBlockChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_BlockChance", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::AuraAttributeSet_eventOnRep_BlockChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::AuraAttributeSet_eventOnRep_BlockChance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance_Statics
	{
		struct AuraAttributeSet_eventOnRep_CriticalHitChance_Parms
		{
			FGameplayAttributeData OldCriticalHitChance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldCriticalHitChance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldCriticalHitChance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance_Statics::NewProp_OldCriticalHitChance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance_Statics::NewProp_OldCriticalHitChance = { "OldCriticalHitChance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_CriticalHitChance_Parms, OldCriticalHitChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance_Statics::NewProp_OldCriticalHitChance_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance_Statics::NewProp_OldCriticalHitChance_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance_Statics::NewProp_OldCriticalHitChance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_CriticalHitChance", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance_Statics::AuraAttributeSet_eventOnRep_CriticalHitChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance_Statics::AuraAttributeSet_eventOnRep_CriticalHitChance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage_Statics
	{
		struct AuraAttributeSet_eventOnRep_CriticalHitDamage_Parms
		{
			FGameplayAttributeData OldCriticalHitDamage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldCriticalHitDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldCriticalHitDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage_Statics::NewProp_OldCriticalHitDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage_Statics::NewProp_OldCriticalHitDamage = { "OldCriticalHitDamage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_CriticalHitDamage_Parms, OldCriticalHitDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage_Statics::NewProp_OldCriticalHitDamage_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage_Statics::NewProp_OldCriticalHitDamage_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage_Statics::NewProp_OldCriticalHitDamage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_CriticalHitDamage", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage_Statics::AuraAttributeSet_eventOnRep_CriticalHitDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage_Statics::AuraAttributeSet_eventOnRep_CriticalHitDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics
	{
		struct AuraAttributeSet_eventOnRep_CriticalHitResistance_Parms
		{
			FGameplayAttributeData OldCriticalHitResistance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldCriticalHitResistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldCriticalHitResistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_OldCriticalHitResistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_OldCriticalHitResistance = { "OldCriticalHitResistance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_CriticalHitResistance_Parms, OldCriticalHitResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_OldCriticalHitResistance_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_OldCriticalHitResistance_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_OldCriticalHitResistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_CriticalHitResistance", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::AuraAttributeSet_eventOnRep_CriticalHitResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::AuraAttributeSet_eventOnRep_CriticalHitResistance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics
	{
		struct AuraAttributeSet_eventOnRep_Health_Parms
		{
			FGameplayAttributeData OldHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::AuraAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::AuraAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration_Statics
	{
		struct AuraAttributeSet_eventOnRep_HealthRegeneration_Parms
		{
			FGameplayAttributeData OldHealthRegeneration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealthRegeneration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealthRegeneration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration_Statics::NewProp_OldHealthRegeneration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration_Statics::NewProp_OldHealthRegeneration = { "OldHealthRegeneration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_HealthRegeneration_Parms, OldHealthRegeneration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration_Statics::NewProp_OldHealthRegeneration_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration_Statics::NewProp_OldHealthRegeneration_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration_Statics::NewProp_OldHealthRegeneration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_HealthRegeneration", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration_Statics::AuraAttributeSet_eventOnRep_HealthRegeneration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration_Statics::AuraAttributeSet_eventOnRep_HealthRegeneration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics
	{
		struct AuraAttributeSet_eventOnRep_Intelligence_Parms
		{
			FGameplayAttributeData OldIntelligence;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldIntelligence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldIntelligence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence = { "OldIntelligence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Intelligence_Parms, OldIntelligence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Intelligence", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::AuraAttributeSet_eventOnRep_Intelligence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::AuraAttributeSet_eventOnRep_Intelligence_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics
	{
		struct AuraAttributeSet_eventOnRep_Mana_Parms
		{
			FGameplayAttributeData OldMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::NewProp_OldMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Mana", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::AuraAttributeSet_eventOnRep_Mana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::AuraAttributeSet_eventOnRep_Mana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration_Statics
	{
		struct AuraAttributeSet_eventOnRep_ManaRegeneration_Parms
		{
			FGameplayAttributeData OldManaRegeneration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldManaRegeneration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldManaRegeneration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration_Statics::NewProp_OldManaRegeneration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration_Statics::NewProp_OldManaRegeneration = { "OldManaRegeneration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_ManaRegeneration_Parms, OldManaRegeneration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration_Statics::NewProp_OldManaRegeneration_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration_Statics::NewProp_OldManaRegeneration_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration_Statics::NewProp_OldManaRegeneration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_ManaRegeneration", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration_Statics::AuraAttributeSet_eventOnRep_ManaRegeneration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration_Statics::AuraAttributeSet_eventOnRep_ManaRegeneration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics
	{
		struct AuraAttributeSet_eventOnRep_MaxHealth_Parms
		{
			FGameplayAttributeData OldMaxHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::AuraAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::AuraAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics
	{
		struct AuraAttributeSet_eventOnRep_MaxMana_Parms
		{
			FGameplayAttributeData OldMaxMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_MaxMana_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_MaxMana", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::AuraAttributeSet_eventOnRep_MaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::AuraAttributeSet_eventOnRep_MaxMana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics
	{
		struct AuraAttributeSet_eventOnRep_Resilience_Parms
		{
			FGameplayAttributeData OldResilience;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldResilience_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldResilience;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::NewProp_OldResilience_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::NewProp_OldResilience = { "OldResilience", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Resilience_Parms, OldResilience), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::NewProp_OldResilience_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::NewProp_OldResilience_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::NewProp_OldResilience,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Resilience", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::AuraAttributeSet_eventOnRep_Resilience_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::AuraAttributeSet_eventOnRep_Resilience_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics
	{
		struct AuraAttributeSet_eventOnRep_Strength_Parms
		{
			FGameplayAttributeData OldStrength;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldStrength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength = { "OldStrength", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Strength_Parms, OldStrength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Strength", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::AuraAttributeSet_eventOnRep_Strength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::AuraAttributeSet_eventOnRep_Strength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics
	{
		struct AuraAttributeSet_eventOnRep_Vigor_Parms
		{
			FGameplayAttributeData OldVigor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldVigor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldVigor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::NewProp_OldVigor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::NewProp_OldVigor = { "OldVigor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Vigor_Parms, OldVigor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::NewProp_OldVigor_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::NewProp_OldVigor_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::NewProp_OldVigor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Vigor", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::AuraAttributeSet_eventOnRep_Vigor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::AuraAttributeSet_eventOnRep_Vigor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraAttributeSet);
	UClass* Z_Construct_UClass_UAuraAttributeSet_NoRegister()
	{
		return UAuraAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UAuraAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intelligence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Intelligence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resilience_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resilience;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vigor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vigor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmorPenetration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArmorPenetration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockChance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitChance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalHitChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalHitDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitResistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalHitResistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegeneration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegeneration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegeneration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManaRegeneration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuraAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor, "OnRep_Armor" }, // 439278704
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration, "OnRep_ArmorPenetration" }, // 428745567
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance, "OnRep_BlockChance" }, // 2895123199
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitChance, "OnRep_CriticalHitChance" }, // 965412241
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitDamage, "OnRep_CriticalHitDamage" }, // 2907017322
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance, "OnRep_CriticalHitResistance" }, // 463870411
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health, "OnRep_Health" }, // 928571338
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegeneration, "OnRep_HealthRegeneration" }, // 3409747441
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence, "OnRep_Intelligence" }, // 196417345
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 1393059406
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegeneration, "OnRep_ManaRegeneration" }, // 258620113
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 3682557547
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 346995521
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience, "OnRep_Resilience" }, // 2799951733
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength, "OnRep_Strength" }, // 3845953358
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor, "OnRep_Vigor" }, // 1012220849
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/AuraAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Vital Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Vital Attributes\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Vital Attributes" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Health_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Health_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxHealth_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Mana_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Mana_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxMana_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxMana_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Primary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Primary Attributes\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Primary Attributes" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Strength = { "Strength", "OnRep_Strength", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Strength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Strength_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Strength_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Intelligence_MetaData[] = {
		{ "Category", "Primary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Intelligence = { "Intelligence", "OnRep_Intelligence", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Intelligence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Intelligence_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Intelligence_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Resilience_MetaData[] = {
		{ "Category", "Primary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Resilience = { "Resilience", "OnRep_Resilience", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Resilience), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Resilience_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Resilience_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Vigor_MetaData[] = {
		{ "Category", "Primary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Vigor = { "Vigor", "OnRep_Vigor", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Vigor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Vigor_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Vigor_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "Secondary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Secondary Attributes\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Secondary Attributes" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Armor = { "Armor", "OnRep_Armor", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Armor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Armor_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Armor_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ArmorPenetration_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ArmorPenetration = { "ArmorPenetration", "OnRep_ArmorPenetration", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, ArmorPenetration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ArmorPenetration_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ArmorPenetration_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_BlockChance_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_BlockChance = { "BlockChance", "OnRep_BlockChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, BlockChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_BlockChance_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_BlockChance_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitChance_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitChance = { "CriticalHitChance", "OnRep_CriticalHitChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, CriticalHitChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitChance_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitChance_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitDamage_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitDamage = { "CriticalHitDamage", "OnRep_CriticalHitDamage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, CriticalHitDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitDamage_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitDamage_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitResistance_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitResistance = { "CriticalHitResistance", "OnRep_CriticalHitResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, CriticalHitResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitResistance_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitResistance_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_HealthRegeneration_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_HealthRegeneration = { "HealthRegeneration", "OnRep_HealthRegeneration", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, HealthRegeneration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_HealthRegeneration_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_HealthRegeneration_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ManaRegeneration_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ManaRegeneration = { "ManaRegeneration", "OnRep_ManaRegeneration", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, ManaRegeneration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ManaRegeneration_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ManaRegeneration_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuraAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Intelligence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Resilience,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Vigor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Armor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ArmorPenetration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_BlockChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitResistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_HealthRegeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ManaRegeneration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAttributeSet_Statics::ClassParams = {
		&UAuraAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAuraAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraAttributeSet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAuraAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UAuraAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAttributeSet.OuterSingleton, Z_Construct_UClass_UAuraAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraAttributeSet.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraAttributeSet>()
	{
		return UAuraAttributeSet::StaticClass();
	}

	void UAuraAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_Mana(TEXT("Mana"));
		static const FName Name_MaxMana(TEXT("MaxMana"));
		static const FName Name_Strength(TEXT("Strength"));
		static const FName Name_Intelligence(TEXT("Intelligence"));
		static const FName Name_Resilience(TEXT("Resilience"));
		static const FName Name_Vigor(TEXT("Vigor"));
		static const FName Name_Armor(TEXT("Armor"));
		static const FName Name_ArmorPenetration(TEXT("ArmorPenetration"));
		static const FName Name_BlockChance(TEXT("BlockChance"));
		static const FName Name_CriticalHitChance(TEXT("CriticalHitChance"));
		static const FName Name_CriticalHitDamage(TEXT("CriticalHitDamage"));
		static const FName Name_CriticalHitResistance(TEXT("CriticalHitResistance"));
		static const FName Name_HealthRegeneration(TEXT("HealthRegeneration"));
		static const FName Name_ManaRegeneration(TEXT("ManaRegeneration"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
			&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
			&& Name_Strength == ClassReps[(int32)ENetFields_Private::Strength].Property->GetFName()
			&& Name_Intelligence == ClassReps[(int32)ENetFields_Private::Intelligence].Property->GetFName()
			&& Name_Resilience == ClassReps[(int32)ENetFields_Private::Resilience].Property->GetFName()
			&& Name_Vigor == ClassReps[(int32)ENetFields_Private::Vigor].Property->GetFName()
			&& Name_Armor == ClassReps[(int32)ENetFields_Private::Armor].Property->GetFName()
			&& Name_ArmorPenetration == ClassReps[(int32)ENetFields_Private::ArmorPenetration].Property->GetFName()
			&& Name_BlockChance == ClassReps[(int32)ENetFields_Private::BlockChance].Property->GetFName()
			&& Name_CriticalHitChance == ClassReps[(int32)ENetFields_Private::CriticalHitChance].Property->GetFName()
			&& Name_CriticalHitDamage == ClassReps[(int32)ENetFields_Private::CriticalHitDamage].Property->GetFName()
			&& Name_CriticalHitResistance == ClassReps[(int32)ENetFields_Private::CriticalHitResistance].Property->GetFName()
			&& Name_HealthRegeneration == ClassReps[(int32)ENetFields_Private::HealthRegeneration].Property->GetFName()
			&& Name_ManaRegeneration == ClassReps[(int32)ENetFields_Private::ManaRegeneration].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAuraAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraAttributeSet);
	UAuraAttributeSet::~UAuraAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_Statics::ScriptStructInfo[] = {
		{ FEffectProperties::StaticStruct, Z_Construct_UScriptStruct_FEffectProperties_Statics::NewStructOps, TEXT("EffectProperties"), &Z_Registration_Info_UScriptStruct_EffectProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffectProperties), 4150027264U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAttributeSet, UAuraAttributeSet::StaticClass, TEXT("UAuraAttributeSet"), &Z_Registration_Info_UClass_UAuraAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAttributeSet), 1782675507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_2731793153(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
