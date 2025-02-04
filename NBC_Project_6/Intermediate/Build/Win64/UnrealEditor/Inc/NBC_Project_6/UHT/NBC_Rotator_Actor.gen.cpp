// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_6/Public/NBC_Rotator_Actor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_Rotator_Actor() {}

// Begin Cross Module References
NBC_PROJECT_6_API UClass* Z_Construct_UClass_ANBC_MoveMentActor();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_ANBC_Rotator_Actor();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_ANBC_Rotator_Actor_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_6();
// End Cross Module References

// Begin Class ANBC_Rotator_Actor
void ANBC_Rotator_Actor::StaticRegisterNativesANBC_Rotator_Actor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBC_Rotator_Actor);
UClass* Z_Construct_UClass_ANBC_Rotator_Actor_NoRegister()
{
	return ANBC_Rotator_Actor::StaticClass();
}
struct Z_Construct_UClass_ANBC_Rotator_Actor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NBC_Rotator_Actor.h" },
		{ "ModuleRelativePath", "Public/NBC_Rotator_Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Rotator" },
		{ "ModuleRelativePath", "Public/NBC_Rotator_Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBC_Rotator_Actor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_Rotator_Actor_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Rotator_Actor, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBC_Rotator_Actor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Rotator_Actor_Statics::NewProp_RotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_Rotator_Actor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBC_Rotator_Actor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANBC_MoveMentActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_Rotator_Actor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBC_Rotator_Actor_Statics::ClassParams = {
	&ANBC_Rotator_Actor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANBC_Rotator_Actor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_Rotator_Actor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_Rotator_Actor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBC_Rotator_Actor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBC_Rotator_Actor()
{
	if (!Z_Registration_Info_UClass_ANBC_Rotator_Actor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBC_Rotator_Actor.OuterSingleton, Z_Construct_UClass_ANBC_Rotator_Actor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBC_Rotator_Actor.OuterSingleton;
}
template<> NBC_PROJECT_6_API UClass* StaticClass<ANBC_Rotator_Actor>()
{
	return ANBC_Rotator_Actor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBC_Rotator_Actor);
ANBC_Rotator_Actor::~ANBC_Rotator_Actor() {}
// End Class ANBC_Rotator_Actor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_Rotator_Actor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBC_Rotator_Actor, ANBC_Rotator_Actor::StaticClass, TEXT("ANBC_Rotator_Actor"), &Z_Registration_Info_UClass_ANBC_Rotator_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBC_Rotator_Actor), 3886205856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_Rotator_Actor_h_2910535038(TEXT("/Script/NBC_Project_6"),
	Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_Rotator_Actor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_Rotator_Actor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
