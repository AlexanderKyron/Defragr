// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FQuat;
struct FVector;
#ifdef AFPSMOVEMENT_AFPSPlayer_generated_h
#error "AFPSPlayer.generated.h already included, missing '#pragma once' in AFPSPlayer.h"
#endif
#define AFPSMOVEMENT_AFPSPlayer_generated_h

#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_SPARSE_DATA
#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execDoJump); \
	DECLARE_FUNCTION(execGetGroundSpeed); \
	DECLARE_FUNCTION(execGetRotation); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execSetRelativeVelocity); \
	DECLARE_FUNCTION(execSetVelocity); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execSetPosition);


#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execDoJump); \
	DECLARE_FUNCTION(execGetGroundSpeed); \
	DECLARE_FUNCTION(execGetRotation); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execSetRelativeVelocity); \
	DECLARE_FUNCTION(execSetVelocity); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execSetPosition);


#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAFPSPlayer(); \
	friend struct Z_Construct_UClass_AAFPSPlayer_Statics; \
public: \
	DECLARE_CLASS(AAFPSPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AFPSMovement"), NO_API) \
	DECLARE_SERIALIZER(AAFPSPlayer)


#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAAFPSPlayer(); \
	friend struct Z_Construct_UClass_AAFPSPlayer_Statics; \
public: \
	DECLARE_CLASS(AAFPSPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AFPSMovement"), NO_API) \
	DECLARE_SERIALIZER(AAFPSPlayer)


#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAFPSPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAFPSPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAFPSPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAFPSPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAFPSPlayer(AAFPSPlayer&&); \
	NO_API AAFPSPlayer(const AAFPSPlayer&); \
public:


#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAFPSPlayer(AAFPSPlayer&&); \
	NO_API AAFPSPlayer(const AAFPSPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAFPSPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAFPSPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAFPSPlayer)


#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_PRIVATE_PROPERTY_OFFSET
#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_21_PROLOG
#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_PRIVATE_PROPERTY_OFFSET \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_SPARSE_DATA \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_RPC_WRAPPERS \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_INCLASS \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_PRIVATE_PROPERTY_OFFSET \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_SPARSE_DATA \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_INCLASS_NO_PURE_DECLS \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AFPSMOVEMENT_API UClass* StaticClass<class AAFPSPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
