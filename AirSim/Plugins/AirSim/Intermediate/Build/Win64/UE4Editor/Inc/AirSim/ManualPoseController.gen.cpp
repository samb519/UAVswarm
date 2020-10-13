// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/ManualPoseController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManualPoseController() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_UManualPoseController_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_UManualPoseController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References
	void UManualPoseController::StaticRegisterNativesUManualPoseController()
	{
	}
	UClass* Z_Construct_UClass_UManualPoseController_NoRegister()
	{
		return UManualPoseController::StaticClass();
	}
	struct Z_Construct_UClass_UManualPoseController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManualPoseController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManualPoseController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ManualPoseController.h" },
		{ "ModuleRelativePath", "ManualPoseController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManualPoseController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManualPoseController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManualPoseController_Statics::ClassParams = {
		&UManualPoseController::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UManualPoseController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManualPoseController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManualPoseController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManualPoseController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManualPoseController, 3916798509);
	template<> AIRSIM_API UClass* StaticClass<UManualPoseController>()
	{
		return UManualPoseController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManualPoseController(Z_Construct_UClass_UManualPoseController, &UManualPoseController::StaticClass, TEXT("/Script/AirSim"), TEXT("UManualPoseController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManualPoseController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
