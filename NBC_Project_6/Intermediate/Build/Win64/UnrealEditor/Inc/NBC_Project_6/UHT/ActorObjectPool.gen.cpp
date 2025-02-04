// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_6/Public/ActorObjectPool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorObjectPool() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_AActorObjectPool();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_AActorObjectPool_NoRegister();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_ANBC_MoveMentActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_6();
// End Cross Module References

// Begin Class AActorObjectPool
void AActorObjectPool::StaticRegisterNativesAActorObjectPool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorObjectPool);
UClass* Z_Construct_UClass_AActorObjectPool_NoRegister()
{
	return AActorObjectPool::StaticClass();
}
struct Z_Construct_UClass_AActorObjectPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ActorObjectPool.h" },
		{ "ModuleRelativePath", "Public/ActorObjectPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorObjects_MetaData[] = {
		{ "Category", "Object" },
		{ "ModuleRelativePath", "Public/ActorObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorObjectPool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AActorObjectPool_Statics::NewProp_ActorObjects_Inner = { "ActorObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ANBC_MoveMentActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AActorObjectPool_Statics::NewProp_ActorObjects = { "ActorObjects", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorObjectPool, ActorObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorObjects_MetaData), NewProp_ActorObjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorObjectPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorObjectPool_Statics::NewProp_ActorObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorObjectPool_Statics::NewProp_ActorObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorObjectPool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AActorObjectPool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorObjectPool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorObjectPool_Statics::ClassParams = {
	&AActorObjectPool::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AActorObjectPool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AActorObjectPool_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorObjectPool_Statics::Class_MetaDataParams), Z_Construct_UClass_AActorObjectPool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActorObjectPool()
{
	if (!Z_Registration_Info_UClass_AActorObjectPool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorObjectPool.OuterSingleton, Z_Construct_UClass_AActorObjectPool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActorObjectPool.OuterSingleton;
}
template<> NBC_PROJECT_6_API UClass* StaticClass<AActorObjectPool>()
{
	return AActorObjectPool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActorObjectPool);
AActorObjectPool::~AActorObjectPool() {}
// End Class AActorObjectPool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_ActorObjectPool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActorObjectPool, AActorObjectPool::StaticClass, TEXT("AActorObjectPool"), &Z_Registration_Info_UClass_AActorObjectPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorObjectPool), 1568303025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_ActorObjectPool_h_3089820397(TEXT("/Script/NBC_Project_6"),
	Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_ActorObjectPool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_ActorObjectPool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
