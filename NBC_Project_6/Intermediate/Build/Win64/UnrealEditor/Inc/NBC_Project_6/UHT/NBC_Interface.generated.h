// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NBC_Interface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBC_PROJECT_6_NBC_Interface_generated_h
#error "NBC_Interface.generated.h already included, missing '#pragma once' in NBC_Interface.h"
#endif
#define NBC_PROJECT_6_NBC_Interface_generated_h

#define FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_Interface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NBC_PROJECT_6_API UNBC_Interface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNBC_Interface(UNBC_Interface&&); \
	UNBC_Interface(const UNBC_Interface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NBC_PROJECT_6_API, UNBC_Interface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNBC_Interface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNBC_Interface) \
	NBC_PROJECT_6_API virtual ~UNBC_Interface();


#define FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_Interface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNBC_Interface(); \
	friend struct Z_Construct_UClass_UNBC_Interface_Statics; \
public: \
	DECLARE_CLASS(UNBC_Interface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NBC_Project_6"), NBC_PROJECT_6_API) \
	DECLARE_SERIALIZER(UNBC_Interface)


#define FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_Interface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_Interface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_Interface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_Interface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INBC_Interface() {} \
public: \
	typedef UNBC_Interface UClassType; \
	typedef INBC_Interface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_Interface_h_10_PROLOG
#define FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_Interface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_Interface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_PROJECT_6_API UClass* StaticClass<class UNBC_Interface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_qordl_Documents_GitHub_NBC_Project_6_NBC_Project_6_Source_NBC_Project_6_Public_NBC_Interface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
