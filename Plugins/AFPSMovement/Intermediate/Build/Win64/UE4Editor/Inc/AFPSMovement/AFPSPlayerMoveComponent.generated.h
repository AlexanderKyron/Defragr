// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AFPSMOVEMENT_AFPSPlayerMoveComponent_generated_h
#error "AFPSPlayerMoveComponent.generated.h already included, missing '#pragma once' in AFPSPlayerMoveComponent.h"
#endif
#define AFPSMOVEMENT_AFPSPlayerMoveComponent_generated_h

#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_SPARSE_DATA
#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_RPC_WRAPPERS
#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAFPSPlayerMoveComponent(); \
	friend struct Z_Construct_UClass_UAFPSPlayerMoveComponent_Statics; \
public: \
	DECLARE_CLASS(UAFPSPlayerMoveComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AFPSMovement"), NO_API) \
	DECLARE_SERIALIZER(UAFPSPlayerMoveComponent)


#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAFPSPlayerMoveComponent(); \
	friend struct Z_Construct_UClass_UAFPSPlayerMoveComponent_Statics; \
public: \
	DECLARE_CLASS(UAFPSPlayerMoveComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AFPSMovement"), NO_API) \
	DECLARE_SERIALIZER(UAFPSPlayerMoveComponent)


#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFPSPlayerMoveComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFPSPlayerMoveComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFPSPlayerMoveComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFPSPlayerMoveComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFPSPlayerMoveComponent(UAFPSPlayerMoveComponent&&); \
	NO_API UAFPSPlayerMoveComponent(const UAFPSPlayerMoveComponent&); \
public:


#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFPSPlayerMoveComponent(UAFPSPlayerMoveComponent&&); \
	NO_API UAFPSPlayerMoveComponent(const UAFPSPlayerMoveComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFPSPlayerMoveComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFPSPlayerMoveComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFPSPlayerMoveComponent)


#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_PRIVATE_PROPERTY_OFFSET
#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_23_PROLOG
#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_SPARSE_DATA \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_RPC_WRAPPERS \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_INCLASS \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_SPARSE_DATA \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_INCLASS_NO_PURE_DECLS \
	DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AFPSMOVEMENT_API UClass* StaticClass<class UAFPSPlayerMoveComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeFraGr_Plugins_AFPSMovement_Source_AFPSMovement_Public_AFPSPlayerMoveComponent_h


#define FOREACH_ENUM_EMOVEMENTTYPE(op) \
	op(EMovementType::Fly) \
	op(EMovementType::Spectate) \
	op(EMovementType::Normal) 

enum class EMovementType : uint8;
template<> AFPSMOVEMENT_API UEnum* StaticEnum<EMovementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
