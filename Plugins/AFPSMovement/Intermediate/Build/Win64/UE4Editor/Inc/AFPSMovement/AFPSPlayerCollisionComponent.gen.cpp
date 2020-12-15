// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AFPSMovement/Public/AFPSPlayerCollisionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFPSPlayerCollisionComponent() {}
// Cross Module References
	AFPSMOVEMENT_API UClass* Z_Construct_UClass_UAFPSPlayerCollisionComponent_NoRegister();
	AFPSMOVEMENT_API UClass* Z_Construct_UClass_UAFPSPlayerCollisionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AFPSMovement();
// End Cross Module References
	void UAFPSPlayerCollisionComponent::StaticRegisterNativesUAFPSPlayerCollisionComponent()
	{
	}
	UClass* Z_Construct_UClass_UAFPSPlayerCollisionComponent_NoRegister()
	{
		return UAFPSPlayerCollisionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundTraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundTraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinWalkNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinWalkNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Overclip_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Overclip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Underclip_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Underclip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxClipPlanes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxClipPlanes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxStepSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AFPSMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AFPSPlayerCollisionComponent.h" },
		{ "ModuleRelativePath", "Public/AFPSPlayerCollisionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_GroundTraceDistance_MetaData[] = {
		{ "Category", "General Collision" },
		{ "Comment", "/** The amount the collider has to travel before detecting the ground */" },
		{ "ModuleRelativePath", "Public/AFPSPlayerCollisionComponent.h" },
		{ "ToolTip", "The amount the collider has to travel before detecting the ground" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_GroundTraceDistance = { "GroundTraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFPSPlayerCollisionComponent, GroundTraceDistance), METADATA_PARAMS(Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_GroundTraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_GroundTraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_MinWalkNormal_MetaData[] = {
		{ "Category", "General Collision" },
		{ "ModuleRelativePath", "Public/AFPSPlayerCollisionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_MinWalkNormal = { "MinWalkNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFPSPlayerCollisionComponent, MinWalkNormal), METADATA_PARAMS(Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_MinWalkNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_MinWalkNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_Overclip_MetaData[] = {
		{ "Category", "General Collision" },
		{ "ModuleRelativePath", "Public/AFPSPlayerCollisionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_Overclip = { "Overclip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFPSPlayerCollisionComponent, Overclip), METADATA_PARAMS(Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_Overclip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_Overclip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_Underclip_MetaData[] = {
		{ "Category", "General Collision" },
		{ "Comment", "// The amount of 'skin' the player has\n" },
		{ "ModuleRelativePath", "Public/AFPSPlayerCollisionComponent.h" },
		{ "ToolTip", "The amount of 'skin' the player has" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_Underclip = { "Underclip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFPSPlayerCollisionComponent, Underclip), METADATA_PARAMS(Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_Underclip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_Underclip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_MaxClipPlanes_MetaData[] = {
		{ "Category", "General Collision" },
		{ "ModuleRelativePath", "Public/AFPSPlayerCollisionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_MaxClipPlanes = { "MaxClipPlanes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFPSPlayerCollisionComponent, MaxClipPlanes), METADATA_PARAMS(Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_MaxClipPlanes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_MaxClipPlanes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_MaxStepSize_MetaData[] = {
		{ "Category", "General Collision" },
		{ "ModuleRelativePath", "Public/AFPSPlayerCollisionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_MaxStepSize = { "MaxStepSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFPSPlayerCollisionComponent, MaxStepSize), METADATA_PARAMS(Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_MaxStepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_MaxStepSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_GroundTraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_MinWalkNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_Overclip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_Underclip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_MaxClipPlanes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::NewProp_MaxStepSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFPSPlayerCollisionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::ClassParams = {
		&UAFPSPlayerCollisionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFPSPlayerCollisionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFPSPlayerCollisionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFPSPlayerCollisionComponent, 4043736334);
	template<> AFPSMOVEMENT_API UClass* StaticClass<UAFPSPlayerCollisionComponent>()
	{
		return UAFPSPlayerCollisionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFPSPlayerCollisionComponent(Z_Construct_UClass_UAFPSPlayerCollisionComponent, &UAFPSPlayerCollisionComponent::StaticClass, TEXT("/Script/AFPSMovement"), TEXT("UAFPSPlayerCollisionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFPSPlayerCollisionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
