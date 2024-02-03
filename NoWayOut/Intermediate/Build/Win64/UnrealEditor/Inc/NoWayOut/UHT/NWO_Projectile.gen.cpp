// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoWayOut/Player/NWO_Projectile.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNWO_Projectile() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NOWAYOUT_API UClass* Z_Construct_UClass_ANWO_Projectile();
	NOWAYOUT_API UClass* Z_Construct_UClass_ANWO_Projectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NoWayOut();
// End Cross Module References
	DEFINE_FUNCTION(ANWO_Projectile::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void ANWO_Projectile::StaticRegisterNativesANWO_Projectile()
	{
		UClass* Class = ANWO_Projectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &ANWO_Projectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics
	{
		struct NWO_Projectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NWO_Projectile_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NWO_Projectile_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NWO_Projectile_eventOnHit_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_OtherComponent_MetaData), Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_OtherComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NWO_Projectile_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NWO_Projectile_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function that is called when the projectile hits something.\n" },
#endif
		{ "ModuleRelativePath", "Player/NWO_Projectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function that is called when the projectile hits something." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANWO_Projectile, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NWO_Projectile_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::NWO_Projectile_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANWO_Projectile_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANWO_Projectile_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANWO_Projectile);
	UClass* Z_Construct_UClass_ANWO_Projectile_NoRegister()
	{
		return ANWO_Projectile::StaticClass();
	}
	struct Z_Construct_UClass_ANWO_Projectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANWO_Projectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NoWayOut,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANWO_Projectile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ANWO_Projectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANWO_Projectile_OnHit, "OnHit" }, // 2800479502
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANWO_Projectile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANWO_Projectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/NWO_Projectile.h" },
		{ "ModuleRelativePath", "Player/NWO_Projectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sphere collision component.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/NWO_Projectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere collision component." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANWO_Projectile, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_CollisionComponent_MetaData), Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_CollisionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile movement component.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/NWO_Projectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile movement component." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANWO_Projectile, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_ProjectileMovementComponent_MetaData), Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_ProjectileMovementComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_ProjectileMeshComponent_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile mesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/NWO_Projectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile mesh" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_ProjectileMeshComponent = { "ProjectileMeshComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANWO_Projectile, ProjectileMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_ProjectileMeshComponent_MetaData), Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_ProjectileMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_ProjectileMaterialInstance_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile material\n" },
#endif
		{ "ModuleRelativePath", "Player/NWO_Projectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile material" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_ProjectileMaterialInstance = { "ProjectileMaterialInstance", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANWO_Projectile, ProjectileMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_ProjectileMaterialInstance_MetaData), Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_ProjectileMaterialInstance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANWO_Projectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_ProjectileMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_ProjectileMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANWO_Projectile_Statics::NewProp_ProjectileMaterialInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANWO_Projectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANWO_Projectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANWO_Projectile_Statics::ClassParams = {
		&ANWO_Projectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANWO_Projectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANWO_Projectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANWO_Projectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ANWO_Projectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANWO_Projectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ANWO_Projectile()
	{
		if (!Z_Registration_Info_UClass_ANWO_Projectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANWO_Projectile.OuterSingleton, Z_Construct_UClass_ANWO_Projectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANWO_Projectile.OuterSingleton;
	}
	template<> NOWAYOUT_API UClass* StaticClass<ANWO_Projectile>()
	{
		return ANWO_Projectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANWO_Projectile);
	ANWO_Projectile::~ANWO_Projectile() {}
	struct Z_CompiledInDeferFile_FID_Users_James_Documents_Projects_Unreal_No_Way_Out_2_0_NoWayOut_Source_NoWayOut_Player_NWO_Projectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_James_Documents_Projects_Unreal_No_Way_Out_2_0_NoWayOut_Source_NoWayOut_Player_NWO_Projectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANWO_Projectile, ANWO_Projectile::StaticClass, TEXT("ANWO_Projectile"), &Z_Registration_Info_UClass_ANWO_Projectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANWO_Projectile), 653478996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_James_Documents_Projects_Unreal_No_Way_Out_2_0_NoWayOut_Source_NoWayOut_Player_NWO_Projectile_h_1853730399(TEXT("/Script/NoWayOut"),
		Z_CompiledInDeferFile_FID_Users_James_Documents_Projects_Unreal_No_Way_Out_2_0_NoWayOut_Source_NoWayOut_Player_NWO_Projectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_James_Documents_Projects_Unreal_No_Way_Out_2_0_NoWayOut_Source_NoWayOut_Player_NWO_Projectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
