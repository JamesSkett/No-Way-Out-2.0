// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoWayOut/BP_PlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_PlayerCharacter() {}
// Cross Module References
	NOWAYOUT_API UClass* Z_Construct_UClass_ABP_PlayerCharacter();
	NOWAYOUT_API UClass* Z_Construct_UClass_ABP_PlayerCharacter_NoRegister();
	NOWAYOUT_API UClass* Z_Construct_UClass_APlayerCharacter();
	UPackage* Z_Construct_UPackage__Script_NoWayOut();
// End Cross Module References
	void ABP_PlayerCharacter::StaticRegisterNativesABP_PlayerCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABP_PlayerCharacter);
	UClass* Z_Construct_UClass_ABP_PlayerCharacter_NoRegister()
	{
		return ABP_PlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABP_PlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_PlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NoWayOut,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BP_PlayerCharacter.h" },
		{ "ModuleRelativePath", "BP_PlayerCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_PlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_PlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABP_PlayerCharacter_Statics::ClassParams = {
		&ABP_PlayerCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABP_PlayerCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABP_PlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_ABP_PlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_PlayerCharacter.OuterSingleton, Z_Construct_UClass_ABP_PlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABP_PlayerCharacter.OuterSingleton;
	}
	template<> NOWAYOUT_API UClass* StaticClass<ABP_PlayerCharacter>()
	{
		return ABP_PlayerCharacter::StaticClass();
	}
	ABP_PlayerCharacter::ABP_PlayerCharacter() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_PlayerCharacter);
	ABP_PlayerCharacter::~ABP_PlayerCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_BP_PlayerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_BP_PlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABP_PlayerCharacter, ABP_PlayerCharacter::StaticClass, TEXT("ABP_PlayerCharacter"), &Z_Registration_Info_UClass_ABP_PlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_PlayerCharacter), 1424942717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_BP_PlayerCharacter_h_3368758013(TEXT("/Script/NoWayOut"),
		Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_BP_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_BP_PlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
