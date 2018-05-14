// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVEMENT_movementCharacter_generated_h
#error "movementCharacter.generated.h already included, missing '#pragma once' in movementCharacter.h"
#endif
#define MOVEMENT_movementCharacter_generated_h

#define movement_Source_movement_movementCharacter_h_12_RPC_WRAPPERS
#define movement_Source_movement_movementCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define movement_Source_movement_movementCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmovementCharacter(); \
	friend MOVEMENT_API class UClass* Z_Construct_UClass_AmovementCharacter(); \
public: \
	DECLARE_CLASS(AmovementCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/movement"), NO_API) \
	DECLARE_SERIALIZER(AmovementCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define movement_Source_movement_movementCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAmovementCharacter(); \
	friend MOVEMENT_API class UClass* Z_Construct_UClass_AmovementCharacter(); \
public: \
	DECLARE_CLASS(AmovementCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/movement"), NO_API) \
	DECLARE_SERIALIZER(AmovementCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define movement_Source_movement_movementCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AmovementCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AmovementCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmovementCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmovementCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmovementCharacter(AmovementCharacter&&); \
	NO_API AmovementCharacter(const AmovementCharacter&); \
public:


#define movement_Source_movement_movementCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmovementCharacter(AmovementCharacter&&); \
	NO_API AmovementCharacter(const AmovementCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmovementCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmovementCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AmovementCharacter)


#define movement_Source_movement_movementCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AmovementCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AmovementCharacter, FollowCamera); }


#define movement_Source_movement_movementCharacter_h_9_PROLOG
#define movement_Source_movement_movementCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	movement_Source_movement_movementCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	movement_Source_movement_movementCharacter_h_12_RPC_WRAPPERS \
	movement_Source_movement_movementCharacter_h_12_INCLASS \
	movement_Source_movement_movementCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define movement_Source_movement_movementCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	movement_Source_movement_movementCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	movement_Source_movement_movementCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	movement_Source_movement_movementCharacter_h_12_INCLASS_NO_PURE_DECLS \
	movement_Source_movement_movementCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID movement_Source_movement_movementCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
