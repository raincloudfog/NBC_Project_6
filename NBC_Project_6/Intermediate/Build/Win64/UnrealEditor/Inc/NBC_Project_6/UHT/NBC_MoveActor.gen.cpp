// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_6/Public/NBC_MoveActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_MoveActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_ANBC_MoveActor();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_ANBC_MoveActor_NoRegister();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_ANBC_MoveMentActor();
UPackage* Z_Construct_UPackage__Script_NBC_Project_6();
// End Cross Module References

// Begin Class ANBC_MoveActor
void ANBC_MoveActor::StaticRegisterNativesANBC_MoveActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBC_MoveActor);
UClass* Z_Construct_UClass_ANBC_MoveActor_NoRegister()
{
	return ANBC_MoveActor::StaticClass();
}
struct Z_Construct_UClass_ANBC_MoveActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NBC_MoveActor.h" },
		{ "ModuleRelativePath", "Public/NBC_MoveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "NBC_Move" },
		{ "ModuleRelativePath", "Public/NBC_MoveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "NBC_Move" },
		{ "ModuleRelativePath", "Public/NBC_MoveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "NBC_Move" },
		{ "ModuleRelativePath", "Public/NBC_MoveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsForward_MetaData[] = {
		{ "Category", "NBC_Move" },
		{ "ModuleRelativePath", "Public/NBC_MoveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsElevator_MetaData[] = {
		{ "Category", "NBC_Move" },
		{ "ModuleRelativePath", "Public/NBC_MoveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTest_MetaData[] = {
		{ "Category", "NBC_Move" },
		{ "ModuleRelativePath", "Public/NBC_MoveActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static void NewProp_IsForward_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsForward;
	static void NewProp_IsElevator_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsElevator;
	static void NewProp_IsTest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBC_MoveActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_MoveActor_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_MoveActor, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_MoveActor_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_MoveActor, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANBC_MoveActor_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_MoveActor, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
void Z_Construct_UClass_ANBC_MoveActor_Statics::NewProp_IsForward_SetBit(void* Obj)
{
	((ANBC_MoveActor*)Obj)->IsForward = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANBC_MoveActor_Statics::NewProp_IsForward = { "IsForward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANBC_MoveActor), &Z_Construct_UClass_ANBC_MoveActor_Statics::NewProp_IsForward_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsForward_MetaData), NewProp_IsForward_MetaData) };
void Z_Construct_UClass_ANBC_MoveActor_Statics::NewProp_IsElevator_SetBit(void* Obj)
{
	((ANBC_MoveActor*)Obj)->IsElevator = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANBC_MoveActor_Statics::NewProp_IsElevator = { "IsElevator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANBC_MoveActor), &Z_Construct_UClass_ANBC_MoveActor_Statics::NewProp_IsElevator_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsElevator_MetaData), NewProp_IsElevator_MetaData) };
void Z_Construct_UClass_ANBC_MoveActor_Statics::NewProp_IsTest_SetBit(void* Obj)
{
	((ANBC_MoveActor*)Obj)->IsTest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANBC_MoveActor_Statics::NewProp_IsTest = { "IsTest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANBC_MoveActor), &Z_Construct_UClass_ANBC_MoveActor_Statics::NewProp_IsTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTest_MetaData), NewProp_IsTest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBC_MoveActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_MoveActor_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_MoveActor_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_MoveActor_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_MoveActor_Statics::NewProp_IsForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_MoveActor_Statics::NewProp_IsElevator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_MoveActor_Statics::NewProp_IsTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_MoveActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBC_MoveActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANBC_MoveMentActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_MoveActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBC_MoveActor_Statics::ClassParams = {
	&ANBC_MoveActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANBC_MoveActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_MoveActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_MoveActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBC_MoveActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBC_MoveActor()
{
	if (!Z_Registration_Info_UClass_ANBC_MoveActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBC_MoveActor.OuterSingleton, Z_Construct_UClass_ANBC_MoveActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBC_MoveActor.OuterSingleton;
}
template<> NBC_PROJECT_6_API UClass* StaticClass<ANBC_MoveActor>()
{
	return ANBC_MoveActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBC_MoveActor);
ANBC_MoveActor::~ANBC_MoveActor() {}
// End Class ANBC_MoveActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_MoveActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBC_MoveActor, ANBC_MoveActor::StaticClass, TEXT("ANBC_MoveActor"), &Z_Registration_Info_UClass_ANBC_MoveActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBC_MoveActor), 1572076071U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_MoveActor_h_3065425285(TEXT("/Script/NBC_Project_6"),
	Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_MoveActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_MoveActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
