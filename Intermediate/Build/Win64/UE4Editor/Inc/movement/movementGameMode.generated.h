// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVEMENT_movementGameMode_generated_h
#error "movementGameMode.generated.h already included, missing '#pragma once' in movementGameMode.h"
#endif
#define MOVEMENT_movementGameMode_generated_h

#define movement_Source_movement_movementGameMode_h_12_RPC_WRAPPERS
#define movement_Source_movement_movementGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define movement_Source_movement_movementGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmovementGameMode(); \
	friend MOVEMENT_API class UClass* Z_Construct_UClass_AmovementGameMode(); \
public: \
	DECLARE_CLASS(AmovementGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/movement"), MOVEMENT_API) \
	DECLARE_SERIALIZER(AmovementGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define movement_Source_movement_movementGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAmovementGameMode(); \
	friend MOVEMENT_API class UClass* Z_Construct_UClass_AmovementGameMode(); \
public: \
	DECLARE_CLASS(AmovementGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/movement"), MOVEMENT_API) \
	DECLARE_SERIALIZER(AmovementGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define movement_Source_movement_movementGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVEMENT_API AmovementGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AmovementGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVEMENT_API, AmovementGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmovementGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVEMENT_API AmovementGameMode(AmovementGameMode&&); \
	MOVEMENT_API AmovementGameMode(const AmovementGameMode&); \
public:


#define movement_Source_movement_movementGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVEMENT_API AmovementGameMode(AmovementGameMode&&); \
	MOVEMENT_API AmovementGameMode(const AmovementGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVEMENT_API, AmovementGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmovementGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AmovementGameMode)


#define movement_Source_movement_movementGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define movement_Source_movement_movementGameMode_h_9_PROLOG
#define movement_Source_movement_movementGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	movement_Source_movement_movementGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	movement_Source_movement_movementGameMode_h_12_RPC_WRAPPERS \
	movement_Source_movement_movementGameMode_h_12_INCLASS \
	movement_Source_movement_movementGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define movement_Source_movement_movementGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	movement_Source_movement_movementGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	movement_Source_movement_movementGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	movement_Source_movement_movementGameMode_h_12_INCLASS_NO_PURE_DECLS \
	movement_Source_movement_movementGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID movement_Source_movement_movementGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
