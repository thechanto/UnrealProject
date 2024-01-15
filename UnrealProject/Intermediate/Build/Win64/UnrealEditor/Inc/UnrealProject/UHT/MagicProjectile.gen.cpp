// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/Public/MagicProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicProjectile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AMagicProjectile();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AMagicProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References
	void AMagicProjectile::StaticRegisterNativesAMagicProjectile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMagicProjectile);
	UClass* Z_Construct_UClass_AMagicProjectile_NoRegister()
	{
		return AMagicProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AMagicProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagicProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MagicProjectile.h" },
		{ "ModuleRelativePath", "Public/MagicProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "MagicProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicProjectile_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagicProjectile, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_SphereComp_MetaData), Z_Construct_UClass_AMagicProjectile_Statics::NewProp_SphereComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::NewProp_MovementComp_MetaData[] = {
		{ "Category", "MagicProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicProjectile_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagicProjectile, MovementComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_MovementComp_MetaData), Z_Construct_UClass_AMagicProjectile_Statics::NewProp_MovementComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::NewProp_EffectComp_MetaData[] = {
		{ "Category", "MagicProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicProjectile_Statics::NewProp_EffectComp = { "EffectComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagicProjectile, EffectComp), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_EffectComp_MetaData), Z_Construct_UClass_AMagicProjectile_Statics::NewProp_EffectComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_SphereComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_MovementComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_EffectComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagicProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagicProjectile_Statics::ClassParams = {
		&AMagicProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMagicProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AMagicProjectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMagicProjectile()
	{
		if (!Z_Registration_Info_UClass_AMagicProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagicProjectile.OuterSingleton, Z_Construct_UClass_AMagicProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMagicProjectile.OuterSingleton;
	}
	template<> UNREALPROJECT_API UClass* StaticClass<AMagicProjectile>()
	{
		return AMagicProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicProjectile);
	AMagicProjectile::~AMagicProjectile() {}
	struct Z_CompiledInDeferFile_FID_Users_DESKTOP_GE_Documents_Unreal_Projects_UnrealProject_Source_UnrealProject_Public_MagicProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_DESKTOP_GE_Documents_Unreal_Projects_UnrealProject_Source_UnrealProject_Public_MagicProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMagicProjectile, AMagicProjectile::StaticClass, TEXT("AMagicProjectile"), &Z_Registration_Info_UClass_AMagicProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagicProjectile), 2076640470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_DESKTOP_GE_Documents_Unreal_Projects_UnrealProject_Source_UnrealProject_Public_MagicProjectile_h_3858879890(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_Users_DESKTOP_GE_Documents_Unreal_Projects_UnrealProject_Source_UnrealProject_Public_MagicProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_DESKTOP_GE_Documents_Unreal_Projects_UnrealProject_Source_UnrealProject_Public_MagicProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
