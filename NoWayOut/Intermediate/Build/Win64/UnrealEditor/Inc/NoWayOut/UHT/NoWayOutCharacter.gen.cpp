// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoWayOut/NoWayOutCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoWayOutCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	NOWAYOUT_API UClass* Z_Construct_UClass_ANoWayOutCharacter();
	NOWAYOUT_API UClass* Z_Construct_UClass_ANoWayOutCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NoWayOut();
// End Cross Module References
	void ANoWayOutCharacter::StaticRegisterNativesANoWayOutCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANoWayOutCharacter);
	UClass* Z_Construct_UClass_ANoWayOutCharacter_NoRegister()
	{
		return ANoWayOutCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ANoWayOutCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANoWayOutCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NoWayOut,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANoWayOutCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoWayOutCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NoWayOutCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "NoWayOutCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoWayOutCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NoWayOutCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANoWayOutCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoWayOutCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANoWayOutCharacter_Statics::NewProp_TopDownCameraComponent_MetaData), Z_Construct_UClass_ANoWayOutCharacter_Statics::NewProp_TopDownCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoWayOutCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NoWayOutCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANoWayOutCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoWayOutCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANoWayOutCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_ANoWayOutCharacter_Statics::NewProp_CameraBoom_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANoWayOutCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoWayOutCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoWayOutCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANoWayOutCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANoWayOutCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANoWayOutCharacter_Statics::ClassParams = {
		&ANoWayOutCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANoWayOutCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANoWayOutCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANoWayOutCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANoWayOutCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANoWayOutCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ANoWayOutCharacter()
	{
		if (!Z_Registration_Info_UClass_ANoWayOutCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANoWayOutCharacter.OuterSingleton, Z_Construct_UClass_ANoWayOutCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANoWayOutCharacter.OuterSingleton;
	}
	template<> NOWAYOUT_API UClass* StaticClass<ANoWayOutCharacter>()
	{
		return ANoWayOutCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANoWayOutCharacter);
	ANoWayOutCharacter::~ANoWayOutCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_NoWayOutCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_NoWayOutCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANoWayOutCharacter, ANoWayOutCharacter::StaticClass, TEXT("ANoWayOutCharacter"), &Z_Registration_Info_UClass_ANoWayOutCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANoWayOutCharacter), 3894915061U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_NoWayOutCharacter_h_218692162(TEXT("/Script/NoWayOut"),
		Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_NoWayOutCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_NoWayOutCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
