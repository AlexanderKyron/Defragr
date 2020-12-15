// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AFPSMovement/Public/AFPSPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFPSPlayer() {}
// Cross Module References
	AFPSMOVEMENT_API UClass* Z_Construct_UClass_AAFPSPlayer_NoRegister();
	AFPSMOVEMENT_API UClass* Z_Construct_UClass_AAFPSPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_AFPSMovement();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	AFPSMOVEMENT_API UClass* Z_Construct_UClass_UAFPSPlayerMoveComponent_NoRegister();
	AFPSMOVEMENT_API UClass* Z_Construct_UClass_UAFPSPlayerCollisionComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAFPSPlayer::execStopJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAFPSPlayer::execDoJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAFPSPlayer::execGetGroundSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGroundSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAFPSPlayer::execGetRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAFPSPlayer::execSetRotation)
	{
		P_GET_STRUCT(FQuat,Z_Param_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotation(Z_Param_NewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAFPSPlayer::execSetRelativeVelocity)
	{
		P_GET_STRUCT(FVector,Z_Param_NewVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRelativeVelocity(Z_Param_NewVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAFPSPlayer::execSetVelocity)
	{
		P_GET_STRUCT(FVector,Z_Param_NewVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVelocity(Z_Param_NewVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAFPSPlayer::execGetPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAFPSPlayer::execSetPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_NewPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPosition(Z_Param_NewPosition);
		P_NATIVE_END;
	}
	void AAFPSPlayer::StaticRegisterNativesAAFPSPlayer()
	{
		UClass* Class = AAFPSPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoJump", &AAFPSPlayer::execDoJump },
			{ "GetGroundSpeed", &AAFPSPlayer::execGetGroundSpeed },
			{ "GetPosition", &AAFPSPlayer::execGetPosition },
			{ "GetRotation", &AAFPSPlayer::execGetRotation },
			{ "SetPosition", &AAFPSPlayer::execSetPosition },
			{ "SetRelativeVelocity", &AAFPSPlayer::execSetRelativeVelocity },
			{ "SetRotation", &AAFPSPlayer::execSetRotation },
			{ "SetVelocity", &AAFPSPlayer::execSetVelocity },
			{ "StopJump", &AAFPSPlayer::execStopJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAFPSPlayer_DoJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFPSPlayer_DoJump_Statics::Function_MetaDataParams[] = {
		{ "Category", "AFPSCharacter|CharacterMovement" },
		{ "Comment", "/* Commit to a jump */" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
		{ "ToolTip", "Commit to a jump" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAFPSPlayer_DoJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAFPSPlayer, nullptr, "DoJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAFPSPlayer_DoJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSPlayer_DoJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAFPSPlayer_DoJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAFPSPlayer_DoJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAFPSPlayer_GetGroundSpeed_Statics
	{
		struct AFPSPlayer_eventGetGroundSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAFPSPlayer_GetGroundSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayer_eventGetGroundSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAFPSPlayer_GetGroundSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAFPSPlayer_GetGroundSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFPSPlayer_GetGroundSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "AFPSCharacter" },
		{ "Comment", "/* Get the player's linear speed */" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
		{ "ToolTip", "Get the player's linear speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAFPSPlayer_GetGroundSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAFPSPlayer, nullptr, "GetGroundSpeed", nullptr, nullptr, sizeof(AFPSPlayer_eventGetGroundSpeed_Parms), Z_Construct_UFunction_AAFPSPlayer_GetGroundSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSPlayer_GetGroundSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAFPSPlayer_GetGroundSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSPlayer_GetGroundSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAFPSPlayer_GetGroundSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAFPSPlayer_GetGroundSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAFPSPlayer_GetPosition_Statics
	{
		struct AFPSPlayer_eventGetPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAFPSPlayer_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayer_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAFPSPlayer_GetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAFPSPlayer_GetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFPSPlayer_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "AFPSCharacter" },
		{ "Comment", "/* Gets the position of the player */" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
		{ "ToolTip", "Gets the position of the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAFPSPlayer_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAFPSPlayer, nullptr, "GetPosition", nullptr, nullptr, sizeof(AFPSPlayer_eventGetPosition_Parms), Z_Construct_UFunction_AAFPSPlayer_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSPlayer_GetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAFPSPlayer_GetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSPlayer_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAFPSPlayer_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAFPSPlayer_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAFPSPlayer_GetRotation_Statics
	{
		struct AFPSPlayer_eventGetRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAFPSPlayer_GetRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayer_eventGetRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAFPSPlayer_GetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAFPSPlayer_GetRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFPSPlayer_GetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AFPSCharacter" },
		{ "Comment", "/* Gets the player's viewing angles */" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
		{ "ToolTip", "Gets the player's viewing angles" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAFPSPlayer_GetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAFPSPlayer, nullptr, "GetRotation", nullptr, nullptr, sizeof(AFPSPlayer_eventGetRotation_Parms), Z_Construct_UFunction_AAFPSPlayer_GetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSPlayer_GetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAFPSPlayer_GetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSPlayer_GetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAFPSPlayer_GetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAFPSPlayer_GetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAFPSPlayer_SetPosition_Statics
	{
		struct AFPSPlayer_eventSetPosition_Parms
		{
			FVector NewPosition;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAFPSPlayer_SetPosition_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayer_eventSetPosition_Parms, NewPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAFPSPlayer_SetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAFPSPlayer_SetPosition_Statics::NewProp_NewPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFPSPlayer_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "AFPSCharacter" },
		{ "Comment", "/* Sets the position of the player */" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
		{ "ToolTip", "Sets the position of the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAFPSPlayer_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAFPSPlayer, nullptr, "SetPosition", nullptr, nullptr, sizeof(AFPSPlayer_eventSetPosition_Parms), Z_Construct_UFunction_AAFPSPlayer_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSPlayer_SetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAFPSPlayer_SetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSPlayer_SetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAFPSPlayer_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAFPSPlayer_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAFPSPlayer_SetRelativeVelocity_Statics
	{
		struct AFPSPlayer_eventSetRelativeVelocity_Parms
		{
			FVector NewVelocity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAFPSPlayer_SetRelativeVelocity_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayer_eventSetRelativeVelocity_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAFPSPlayer_SetRelativeVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAFPSPlayer_SetRelativeVelocity_Statics::NewProp_NewVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFPSPlayer_SetRelativeVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "AFPSCharacter" },
		{ "Comment", "/* Sets the velocity in relation to the player */" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
		{ "ToolTip", "Sets the velocity in relation to the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAFPSPlayer_SetRelativeVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAFPSPlayer, nullptr, "SetRelativeVelocity", nullptr, nullptr, sizeof(AFPSPlayer_eventSetRelativeVelocity_Parms), Z_Construct_UFunction_AAFPSPlayer_SetRelativeVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSPlayer_SetRelativeVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAFPSPlayer_SetRelativeVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSPlayer_SetRelativeVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAFPSPlayer_SetRelativeVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAFPSPlayer_SetRelativeVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAFPSPlayer_SetRotation_Statics
	{
		struct AFPSPlayer_eventSetRotation_Parms
		{
			FQuat NewRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAFPSPlayer_SetRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayer_eventSetRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAFPSPlayer_SetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAFPSPlayer_SetRotation_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFPSPlayer_SetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AFPSCharacter" },
		{ "Comment", "/* Sets the player's viewing angles */" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
		{ "ToolTip", "Sets the player's viewing angles" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAFPSPlayer_SetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAFPSPlayer, nullptr, "SetRotation", nullptr, nullptr, sizeof(AFPSPlayer_eventSetRotation_Parms), Z_Construct_UFunction_AAFPSPlayer_SetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSPlayer_SetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAFPSPlayer_SetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSPlayer_SetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAFPSPlayer_SetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAFPSPlayer_SetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAFPSPlayer_SetVelocity_Statics
	{
		struct AFPSPlayer_eventSetVelocity_Parms
		{
			FVector NewVelocity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAFPSPlayer_SetVelocity_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayer_eventSetVelocity_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAFPSPlayer_SetVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAFPSPlayer_SetVelocity_Statics::NewProp_NewVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFPSPlayer_SetVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "AFPSCharacter" },
		{ "Comment", "/* Sets the velocity of the player */" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
		{ "ToolTip", "Sets the velocity of the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAFPSPlayer_SetVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAFPSPlayer, nullptr, "SetVelocity", nullptr, nullptr, sizeof(AFPSPlayer_eventSetVelocity_Parms), Z_Construct_UFunction_AAFPSPlayer_SetVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSPlayer_SetVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAFPSPlayer_SetVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSPlayer_SetVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAFPSPlayer_SetVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAFPSPlayer_SetVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAFPSPlayer_StopJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFPSPlayer_StopJump_Statics::Function_MetaDataParams[] = {
		{ "Category", "AFPSCharacter|CharacterMovement" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAFPSPlayer_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAFPSPlayer, nullptr, "StopJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAFPSPlayer_StopJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFPSPlayer_StopJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAFPSPlayer_StopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAFPSPlayer_StopJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAFPSPlayer_NoRegister()
	{
		return AAFPSPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AAFPSPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armour_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Armour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardLandingSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HardLandingSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpInput_MetaData[];
#endif
		static void NewProp_JumpInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_JumpInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAFPSPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_AFPSMovement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAFPSPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAFPSPlayer_DoJump, "DoJump" }, // 356336742
		{ &Z_Construct_UFunction_AAFPSPlayer_GetGroundSpeed, "GetGroundSpeed" }, // 1185036463
		{ &Z_Construct_UFunction_AAFPSPlayer_GetPosition, "GetPosition" }, // 486499088
		{ &Z_Construct_UFunction_AAFPSPlayer_GetRotation, "GetRotation" }, // 3927354610
		{ &Z_Construct_UFunction_AAFPSPlayer_SetPosition, "SetPosition" }, // 4107469675
		{ &Z_Construct_UFunction_AAFPSPlayer_SetRelativeVelocity, "SetRelativeVelocity" }, // 1602769953
		{ &Z_Construct_UFunction_AAFPSPlayer_SetRotation, "SetRotation" }, // 2575587333
		{ &Z_Construct_UFunction_AAFPSPlayer_SetVelocity, "SetVelocity" }, // 1999329627
		{ &Z_Construct_UFunction_AAFPSPlayer_StopJump, "StopJump" }, // 1863054925
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Pawn|AFPSCharacter|InternalEvents Navigation" },
		{ "IncludePath", "AFPSPlayer.h" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
		{ "ShortTooltip", "Custom character specifically built for Q3 movement." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Health of the player */" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
		{ "ToolTip", "Health of the player" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFPSPlayer, Health), METADATA_PARAMS(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_Armour_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Armour of the player */" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
		{ "ToolTip", "Armour of the player" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_Armour = { "Armour", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFPSPlayer, Armour), METADATA_PARAMS(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_Armour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_Armour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_JumpSoundCue_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_JumpSoundCue = { "JumpSoundCue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFPSPlayer, JumpSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_JumpSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_JumpSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_HardLandingSoundCue_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_HardLandingSoundCue = { "HardLandingSoundCue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFPSPlayer, HardLandingSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_HardLandingSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_HardLandingSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_ForwardVector_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Transform" },
		{ "Comment", "/* The local normalized forward vector of the player's facing angle */" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
		{ "ToolTip", "The local normalized forward vector of the player's facing angle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFPSPlayer, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_ForwardVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_ForwardVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_RightVector_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Transform" },
		{ "Comment", "/* The local normalized right vector of the player's facing angle */" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
		{ "ToolTip", "The local normalized right vector of the player's facing angle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_RightVector = { "RightVector", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFPSPlayer, RightVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_RightVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_RightVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_MovementInput_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/* X is forward [W] and back [S] (1.0 to -1.0) and Y is right [D] and left [A] (1.0 to - 1.0) */" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
		{ "ToolTip", "X is forward [W] and back [S] (1.0 to -1.0) and Y is right [D] and left [A] (1.0 to - 1.0)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_MovementInput = { "MovementInput", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFPSPlayer, MovementInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_MovementInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_MovementInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_JumpInput_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
	};
#endif
	void Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_JumpInput_SetBit(void* Obj)
	{
		((AAFPSPlayer*)Obj)->JumpInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_JumpInput = { "JumpInput", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAFPSPlayer), &Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_JumpInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_JumpInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_JumpInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_Collider_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "/** The BoxComponent being used for movement collision. Always treated as being vertically aligned in simple collision check functions */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
		{ "ToolTip", "The BoxComponent being used for movement collision. Always treated as being vertically aligned in simple collision check functions" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFPSPlayer, Collider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_Collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_Collider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "/** Character's movement component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
		{ "ToolTip", "Character's movement component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFPSPlayer, MovementComponent), Z_Construct_UClass_UAFPSPlayerMoveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFPSPlayer, CollisionComponent), Z_Construct_UClass_UAFPSPlayerCollisionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0010000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFPSPlayer, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AFPSPlayer.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFPSPlayer, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAFPSPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_Armour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_JumpSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_HardLandingSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_ForwardVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_RightVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_MovementInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_JumpInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_Collider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_MovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_CollisionComponent,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSPlayer_Statics::NewProp_FirstPersonCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAFPSPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAFPSPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAFPSPlayer_Statics::ClassParams = {
		&AAFPSPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAFPSPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSPlayer_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAFPSPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAFPSPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAFPSPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAFPSPlayer, 1310083906);
	template<> AFPSMOVEMENT_API UClass* StaticClass<AAFPSPlayer>()
	{
		return AAFPSPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAFPSPlayer(Z_Construct_UClass_AAFPSPlayer, &AAFPSPlayer::StaticClass, TEXT("/Script/AFPSMovement"), TEXT("AAFPSPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAFPSPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
