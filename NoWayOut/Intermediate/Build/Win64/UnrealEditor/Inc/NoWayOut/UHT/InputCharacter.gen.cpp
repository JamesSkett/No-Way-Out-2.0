// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoWayOut/Player/InputCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	NOWAYOUT_API UClass* Z_Construct_UClass_AInputCharacter();
	NOWAYOUT_API UClass* Z_Construct_UClass_AInputCharacter_NoRegister();
	NOWAYOUT_API UClass* Z_Construct_UClass_ANWO_Projectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NoWayOut();
// End Cross Module References
	void AInputCharacter::StaticRegisterNativesAInputCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInputCharacter);
	UClass* Z_Construct_UClass_AInputCharacter_NoRegister()
	{
		return AInputCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AInputCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_springArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_springArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_inputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_inputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_moveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_moveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_jumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_jumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_lookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_lookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_shootAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_shootAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInputCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NoWayOut,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInputCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInputCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/InputCharacter.h" },
		{ "ModuleRelativePath", "Player/InputCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InputCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/InputCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_camera = { "m_camera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInputCharacter, m_camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_camera_MetaData), Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_springArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InputCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/InputCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_springArm = { "m_springArm", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInputCharacter, m_springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_springArm_MetaData), Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_springArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInputCharacter_Statics::NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gun muzzle offset from the camera location.\n" },
#endif
		{ "ModuleRelativePath", "Player/InputCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gun muzzle offset from the camera location." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInputCharacter_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInputCharacter, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInputCharacter_Statics::NewProp_MuzzleOffset_MetaData), Z_Construct_UClass_AInputCharacter_Statics::NewProp_MuzzleOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_inputMapping_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/InputCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_inputMapping = { "m_inputMapping", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInputCharacter, m_inputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_inputMapping_MetaData), Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_inputMapping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_moveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/InputCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_moveAction = { "m_moveAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInputCharacter, m_moveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_moveAction_MetaData), Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_moveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_jumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/InputCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_jumpAction = { "m_jumpAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInputCharacter, m_jumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_jumpAction_MetaData), Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_jumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_lookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/InputCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_lookAction = { "m_lookAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInputCharacter, m_lookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_lookAction_MetaData), Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_lookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_shootAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/InputCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_shootAction = { "m_shootAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInputCharacter, m_shootAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_shootAction_MetaData), Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_shootAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInputCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile class to spawn.\n" },
#endif
		{ "ModuleRelativePath", "Player/InputCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile class to spawn." },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInputCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInputCharacter, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ANWO_Projectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInputCharacter_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_AInputCharacter_Statics::NewProp_ProjectileClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInputCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_springArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInputCharacter_Statics::NewProp_MuzzleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_inputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_moveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_jumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_lookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInputCharacter_Statics::NewProp_m_shootAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInputCharacter_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInputCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInputCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInputCharacter_Statics::ClassParams = {
		&AInputCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInputCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInputCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInputCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AInputCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInputCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AInputCharacter()
	{
		if (!Z_Registration_Info_UClass_AInputCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInputCharacter.OuterSingleton, Z_Construct_UClass_AInputCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInputCharacter.OuterSingleton;
	}
	template<> NOWAYOUT_API UClass* StaticClass<AInputCharacter>()
	{
		return AInputCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInputCharacter);
	AInputCharacter::~AInputCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_James_Documents_Projects_Unreal_No_Way_Out_2_0_NoWayOut_Source_NoWayOut_Player_InputCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_James_Documents_Projects_Unreal_No_Way_Out_2_0_NoWayOut_Source_NoWayOut_Player_InputCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInputCharacter, AInputCharacter::StaticClass, TEXT("AInputCharacter"), &Z_Registration_Info_UClass_AInputCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInputCharacter), 3301677974U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_James_Documents_Projects_Unreal_No_Way_Out_2_0_NoWayOut_Source_NoWayOut_Player_InputCharacter_h_3618569046(TEXT("/Script/NoWayOut"),
		Z_CompiledInDeferFile_FID_Users_James_Documents_Projects_Unreal_No_Way_Out_2_0_NoWayOut_Source_NoWayOut_Player_InputCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_James_Documents_Projects_Unreal_No_Way_Out_2_0_NoWayOut_Source_NoWayOut_Player_InputCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
