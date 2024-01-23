// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoWayOut/NoWayOutPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoWayOutPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NOWAYOUT_API UClass* Z_Construct_UClass_ANoWayOutPlayerController();
	NOWAYOUT_API UClass* Z_Construct_UClass_ANoWayOutPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NoWayOut();
// End Cross Module References
	void ANoWayOutPlayerController::StaticRegisterNativesANoWayOutPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANoWayOutPlayerController);
	UClass* Z_Construct_UClass_ANoWayOutPlayerController_NoRegister()
	{
		return ANoWayOutPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ANoWayOutPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationClickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationClickAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationTouchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationTouchAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANoWayOutPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_NoWayOut,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANoWayOutPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoWayOutPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NoWayOutPlayerController.h" },
		{ "ModuleRelativePath", "NoWayOutPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
#endif
		{ "ModuleRelativePath", "NoWayOutPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time Threshold to know if it was a short press" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoWayOutPlayerController, ShortPressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_ShortPressThreshold_MetaData), Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_ShortPressThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
#endif
		{ "ModuleRelativePath", "NoWayOutPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX Class that we will spawn when clicking" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoWayOutPlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_FXCursor_MetaData), Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_FXCursor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "NoWayOutPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoWayOutPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_SetDestinationClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "NoWayOutPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_SetDestinationClickAction = { "SetDestinationClickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoWayOutPlayerController, SetDestinationClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_SetDestinationClickAction_MetaData), Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_SetDestinationClickAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "NoWayOutPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_SetDestinationTouchAction = { "SetDestinationTouchAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoWayOutPlayerController, SetDestinationTouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData), Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANoWayOutPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_ShortPressThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_FXCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_SetDestinationClickAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoWayOutPlayerController_Statics::NewProp_SetDestinationTouchAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANoWayOutPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANoWayOutPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANoWayOutPlayerController_Statics::ClassParams = {
		&ANoWayOutPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANoWayOutPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANoWayOutPlayerController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANoWayOutPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANoWayOutPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANoWayOutPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ANoWayOutPlayerController()
	{
		if (!Z_Registration_Info_UClass_ANoWayOutPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANoWayOutPlayerController.OuterSingleton, Z_Construct_UClass_ANoWayOutPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANoWayOutPlayerController.OuterSingleton;
	}
	template<> NOWAYOUT_API UClass* StaticClass<ANoWayOutPlayerController>()
	{
		return ANoWayOutPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANoWayOutPlayerController);
	ANoWayOutPlayerController::~ANoWayOutPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_NoWayOutPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_NoWayOutPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANoWayOutPlayerController, ANoWayOutPlayerController::StaticClass, TEXT("ANoWayOutPlayerController"), &Z_Registration_Info_UClass_ANoWayOutPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANoWayOutPlayerController), 2329932713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_NoWayOutPlayerController_h_3621592391(TEXT("/Script/NoWayOut"),
		Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_NoWayOutPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_NoWayOutPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
