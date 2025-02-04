// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_6/Public/RotatorActorObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatorActorObject() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_ARotatorActorObject();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_ARotatorActorObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_6();
// End Cross Module References

// Begin Class ARotatorActorObject
void ARotatorActorObject::StaticRegisterNativesARotatorActorObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotatorActorObject);
UClass* Z_Construct_UClass_ARotatorActorObject_NoRegister()
{
	return ARotatorActorObject::StaticClass();
}
struct Z_Construct_UClass_ARotatorActorObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RotatorActorObject.h" },
		{ "ModuleRelativePath", "Public/RotatorActorObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Rotator|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotatorActorObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Rotator|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotatorActorObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Rotator|Float" },
		{ "ModuleRelativePath", "Public/RotatorActorObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotatorActorObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotatorActorObject_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatorActorObject, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotatorActorObject_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatorActorObject, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotatorActorObject_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatorActorObject, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotatorActorObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatorActorObject_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatorActorObject_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatorActorObject_Statics::NewProp_RotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatorActorObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARotatorActorObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatorActorObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotatorActorObject_Statics::ClassParams = {
	&ARotatorActorObject::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARotatorActorObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARotatorActorObject_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatorActorObject_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotatorActorObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotatorActorObject()
{
	if (!Z_Registration_Info_UClass_ARotatorActorObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotatorActorObject.OuterSingleton, Z_Construct_UClass_ARotatorActorObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotatorActorObject.OuterSingleton;
}
template<> NBC_PROJECT_6_API UClass* StaticClass<ARotatorActorObject>()
{
	return ARotatorActorObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotatorActorObject);
ARotatorActorObject::~ARotatorActorObject() {}
// End Class ARotatorActorObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_RotatorActorObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotatorActorObject, ARotatorActorObject::StaticClass, TEXT("ARotatorActorObject"), &Z_Registration_Info_UClass_ARotatorActorObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotatorActorObject), 569092857U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_RotatorActorObject_h_1025190485(TEXT("/Script/NBC_Project_6"),
	Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_RotatorActorObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_RotatorActorObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
