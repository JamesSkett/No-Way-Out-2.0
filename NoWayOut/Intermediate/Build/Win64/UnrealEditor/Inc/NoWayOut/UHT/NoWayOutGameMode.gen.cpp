// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoWayOut/NoWayOutGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoWayOutGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	NOWAYOUT_API UClass* Z_Construct_UClass_ANoWayOutGameMode();
	NOWAYOUT_API UClass* Z_Construct_UClass_ANoWayOutGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NoWayOut();
// End Cross Module References
	void ANoWayOutGameMode::StaticRegisterNativesANoWayOutGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANoWayOutGameMode);
	UClass* Z_Construct_UClass_ANoWayOutGameMode_NoRegister()
	{
		return ANoWayOutGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANoWayOutGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANoWayOutGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NoWayOut,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANoWayOutGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoWayOutGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NoWayOutGameMode.h" },
		{ "ModuleRelativePath", "NoWayOutGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANoWayOutGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANoWayOutGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANoWayOutGameMode_Statics::ClassParams = {
		&ANoWayOutGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANoWayOutGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANoWayOutGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ANoWayOutGameMode()
	{
		if (!Z_Registration_Info_UClass_ANoWayOutGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANoWayOutGameMode.OuterSingleton, Z_Construct_UClass_ANoWayOutGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANoWayOutGameMode.OuterSingleton;
	}
	template<> NOWAYOUT_API UClass* StaticClass<ANoWayOutGameMode>()
	{
		return ANoWayOutGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANoWayOutGameMode);
	ANoWayOutGameMode::~ANoWayOutGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_NoWayOutGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_NoWayOutGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANoWayOutGameMode, ANoWayOutGameMode::StaticClass, TEXT("ANoWayOutGameMode"), &Z_Registration_Info_UClass_ANoWayOutGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANoWayOutGameMode), 410097571U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_NoWayOutGameMode_h_1728859538(TEXT("/Script/NoWayOut"),
		Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_NoWayOutGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_James_Documents_Unreal_Projects_NoWayOut_Source_NoWayOut_NoWayOutGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
