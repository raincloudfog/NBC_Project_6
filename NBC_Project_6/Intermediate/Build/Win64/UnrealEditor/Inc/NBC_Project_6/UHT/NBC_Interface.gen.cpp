// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_6/Public/NBC_Interface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_Interface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_UNBC_Interface();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_UNBC_Interface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_6();
// End Cross Module References

// Begin Interface UNBC_Interface
void UNBC_Interface::StaticRegisterNativesUNBC_Interface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNBC_Interface);
UClass* Z_Construct_UClass_UNBC_Interface_NoRegister()
{
	return UNBC_Interface::StaticClass();
}
struct Z_Construct_UClass_UNBC_Interface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBC_Interface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INBC_Interface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNBC_Interface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNBC_Interface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNBC_Interface_Statics::ClassParams = {
	&UNBC_Interface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNBC_Interface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNBC_Interface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNBC_Interface()
{
	if (!Z_Registration_Info_UClass_UNBC_Interface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNBC_Interface.OuterSingleton, Z_Construct_UClass_UNBC_Interface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNBC_Interface.OuterSingleton;
}
template<> NBC_PROJECT_6_API UClass* StaticClass<UNBC_Interface>()
{
	return UNBC_Interface::StaticClass();
}
UNBC_Interface::UNBC_Interface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNBC_Interface);
UNBC_Interface::~UNBC_Interface() {}
// End Interface UNBC_Interface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_Interface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNBC_Interface, UNBC_Interface::StaticClass, TEXT("UNBC_Interface"), &Z_Registration_Info_UClass_UNBC_Interface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNBC_Interface), 1947912512U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_Interface_h_1647799525(TEXT("/Script/NBC_Project_6"),
	Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_Interface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_Interface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
