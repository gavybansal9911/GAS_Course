// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/WidgetControllers/OverlayWidgetController.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlayWidgetController() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraUserWidget_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UAuraWidgetController();
	AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController();
	AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FUIWidgetRow();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

static_assert(std::is_polymorphic<FUIWidgetRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FUIWidgetRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIWidgetRow;
class UScriptStruct* FUIWidgetRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIWidgetRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIWidgetRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIWidgetRow, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("UIWidgetRow"));
	}
	return Z_Registration_Info_UScriptStruct_UIWidgetRow.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FUIWidgetRow>()
{
	return FUIWidgetRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIWidgetRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MessageTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MessageWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIWidgetRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIWidgetRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageTag_MetaData[] = {
		{ "Category", "UIWidgetRow" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageTag = { "MessageTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWidgetRow, MessageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageTag_MetaData), Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "UIWidgetRow" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWidgetRow, Message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Message_MetaData), Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Message_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageWidgetClass_MetaData[] = {
		{ "Category", "UIWidgetRow" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageWidgetClass = { "MessageWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWidgetRow, MessageWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAuraUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageWidgetClass_MetaData), Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "UIWidgetRow" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWidgetRow, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Image_MetaData), Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Image_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIWidgetRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Image,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"UIWidgetRow",
		Z_Construct_UScriptStruct_FUIWidgetRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::PropPointers),
		sizeof(FUIWidgetRow),
		alignof(FUIWidgetRow),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIWidgetRow_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUIWidgetRow()
	{
		if (!Z_Registration_Info_UScriptStruct_UIWidgetRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIWidgetRow.InnerSingleton, Z_Construct_UScriptStruct_FUIWidgetRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIWidgetRow.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature_Statics
	{
		struct _Script_Aura_eventOnAttributeChangedSignature_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventOnAttributeChangedSignature_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "OnAttributeChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature_Statics::_Script_Aura_eventOnAttributeChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature_Statics::_Script_Aura_eventOnAttributeChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttributeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChangedSignature, float NewValue)
{
	struct _Script_Aura_eventOnAttributeChangedSignature_Parms
	{
		float NewValue;
	};
	_Script_Aura_eventOnAttributeChangedSignature_Parms Parms;
	Parms.NewValue=NewValue;
	OnAttributeChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics
	{
		struct _Script_Aura_eventMessageWidgetRowSignature_Parms
		{
			FUIWidgetRow Row;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventMessageWidgetRowSignature_Parms, Row), Z_Construct_UScriptStruct_FUIWidgetRow, METADATA_PARAMS(0, nullptr) }; // 2801986045
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::NewProp_Row,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "MessageWidgetRowSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::_Script_Aura_eventMessageWidgetRowSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::_Script_Aura_eventMessageWidgetRowSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMessageWidgetRowSignature_DelegateWrapper(const FMulticastScriptDelegate& MessageWidgetRowSignature, FUIWidgetRow Row)
{
	struct _Script_Aura_eventMessageWidgetRowSignature_Parms
	{
		FUIWidgetRow Row;
	};
	_Script_Aura_eventMessageWidgetRowSignature_Parms Parms;
	Parms.Row=Row;
	MessageWidgetRowSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UOverlayWidgetController::StaticRegisterNativesUOverlayWidgetController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOverlayWidgetController);
	UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister()
	{
		return UOverlayWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UOverlayWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxHealthChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnManaChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManaChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxManaChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxManaChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageWidgetRowDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MessageWidgetRowDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageWidgetDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MessageWidgetDataTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOverlayWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAuraWidgetController,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetControllers/OverlayWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnHealthChanged), Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged_MetaData) }; // 2267843249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnMaxHealthChanged), Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged_MetaData) }; // 2267843249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnManaChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnManaChanged = { "OnManaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnManaChanged), Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnManaChanged_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnManaChanged_MetaData) }; // 2267843249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxManaChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxManaChanged = { "OnMaxManaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnMaxManaChanged), Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxManaChanged_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxManaChanged_MetaData) }; // 2267843249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetRowDelegate_MetaData[] = {
		{ "Category", "GAS|Messages" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetRowDelegate = { "MessageWidgetRowDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, MessageWidgetRowDelegate), Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetRowDelegate_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetRowDelegate_MetaData) }; // 2236464418
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetDataTable_MetaData[] = {
		{ "Category", "Widget Data" },
		{ "ModuleRelativePath", "Public/UI/WidgetControllers/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetDataTable = { "MessageWidgetDataTable", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, MessageWidgetDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetDataTable_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetDataTable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnManaChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxManaChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetRowDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOverlayWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverlayWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverlayWidgetController_Statics::ClassParams = {
		&UOverlayWidgetController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UOverlayWidgetController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOverlayWidgetController()
	{
		if (!Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton, Z_Construct_UClass_UOverlayWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UOverlayWidgetController>()
	{
		return UOverlayWidgetController::StaticClass();
	}
	UOverlayWidgetController::UOverlayWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlayWidgetController);
	UOverlayWidgetController::~UOverlayWidgetController() {}
	struct Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_UI_WidgetControllers_OverlayWidgetController_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_UI_WidgetControllers_OverlayWidgetController_h_Statics::ScriptStructInfo[] = {
		{ FUIWidgetRow::StaticStruct, Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewStructOps, TEXT("UIWidgetRow"), &Z_Registration_Info_UScriptStruct_UIWidgetRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIWidgetRow), 2801986045U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_UI_WidgetControllers_OverlayWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOverlayWidgetController, UOverlayWidgetController::StaticClass, TEXT("UOverlayWidgetController"), &Z_Registration_Info_UClass_UOverlayWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverlayWidgetController), 1144356667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_UI_WidgetControllers_OverlayWidgetController_h_1168865335(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_UI_WidgetControllers_OverlayWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_UI_WidgetControllers_OverlayWidgetController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_UI_WidgetControllers_OverlayWidgetController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gavyb_OneDrive_Desktop_Tutorials_Unreal_GAS_Course_Aura_Source_Aura_Public_UI_WidgetControllers_OverlayWidgetController_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
