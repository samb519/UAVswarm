// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/SimMode/SimModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimModeBase() {}
// Cross Module References
	AIRSIM_API UFunction* Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeBase_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADirectionalLight_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ULoadingScreenWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ACameraDirector_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AirSim, nullptr, "LevelLoaded__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ASimModeBase::execreset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimModeBase::exectoggleLoadingScreen)
	{
		P_GET_UBOOL(Z_Param_is_visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->toggleLoadingScreen(Z_Param_is_visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimModeBase::execgetSimMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASimModeBase**)Z_Param__Result=ASimModeBase::getSimMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimModeBase::exectoggleRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->toggleRecording();
		P_NATIVE_END;
	}
	void ASimModeBase::StaticRegisterNativesASimModeBase()
	{
		UClass* Class = ASimModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getSimMode", &ASimModeBase::execgetSimMode },
			{ "reset", &ASimModeBase::execreset },
			{ "toggleLoadingScreen", &ASimModeBase::exectoggleLoadingScreen },
			{ "toggleRecording", &ASimModeBase::exectoggleRecording },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASimModeBase_getSimMode_Statics
	{
		struct SimModeBase_eventgetSimMode_Parms
		{
			ASimModeBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimModeBase_eventgetSimMode_Parms, ReturnValue), Z_Construct_UClass_ASimModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Airsim | get stuff" },
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimModeBase, nullptr, "getSimMode", nullptr, nullptr, sizeof(SimModeBase_eventgetSimMode_Parms), Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimModeBase_getSimMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimModeBase_reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimModeBase_reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Airsim | get stuff" },
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimModeBase_reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimModeBase, nullptr, "reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimModeBase_reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimModeBase_reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimModeBase_reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimModeBase_reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics
	{
		struct SimModeBase_eventtoggleLoadingScreen_Parms
		{
			bool is_visible;
		};
		static void NewProp_is_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_is_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::NewProp_is_visible_SetBit(void* Obj)
	{
		((SimModeBase_eventtoggleLoadingScreen_Parms*)Obj)->is_visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::NewProp_is_visible = { "is_visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimModeBase_eventtoggleLoadingScreen_Parms), &Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::NewProp_is_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::NewProp_is_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Airsim | get stuff" },
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimModeBase, nullptr, "toggleLoadingScreen", nullptr, nullptr, sizeof(SimModeBase_eventtoggleLoadingScreen_Parms), Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics
	{
		struct SimModeBase_eventtoggleRecording_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimModeBase_eventtoggleRecording_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimModeBase_eventtoggleRecording_Parms), &Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recording" },
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimModeBase, nullptr, "toggleRecording", nullptr, nullptr, sizeof(SimModeBase_eventtoggleRecording_Parms), Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimModeBase_toggleRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASimModeBase_NoRegister()
	{
		return ASimModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASimModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawned_actors__MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_spawned_actors_;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spawned_actors__Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sun__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sun_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sky_sphere__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sky_sphere_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loading_screen_widget__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_loading_screen_widget_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sky_sphere_class__MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_sky_sphere_class_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_director_class__MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_camera_director_class_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_external_camera_class__MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_external_camera_class_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collision_display_template_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collision_display_template;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pip_camera_class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_pip_camera_class;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableReport_MetaData[];
#endif
		static void NewProp_EnableReport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableReport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraDirector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraDirector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLevelLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelLoaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASimModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASimModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASimModeBase_getSimMode, "getSimMode" }, // 421686615
		{ &Z_Construct_UFunction_ASimModeBase_reset, "reset" }, // 96862039
		{ &Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen, "toggleLoadingScreen" }, // 3899737011
		{ &Z_Construct_UFunction_ASimModeBase_toggleRecording, "toggleRecording" }, // 1402362862
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimModeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimMode/SimModeBase.h" },
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimModeBase_Statics::NewProp_spawned_actors__MetaData[] = {
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_spawned_actors_ = { "spawned_actors_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimModeBase, spawned_actors_), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASimModeBase_Statics::NewProp_spawned_actors__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeBase_Statics::NewProp_spawned_actors__MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_spawned_actors__Inner = { "spawned_actors_", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimModeBase_Statics::NewProp_sun__MetaData[] = {
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_sun_ = { "sun_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimModeBase, sun_), Z_Construct_UClass_ADirectionalLight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimModeBase_Statics::NewProp_sun__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeBase_Statics::NewProp_sun__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimModeBase_Statics::NewProp_sky_sphere__MetaData[] = {
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_sky_sphere_ = { "sky_sphere_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimModeBase, sky_sphere_), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimModeBase_Statics::NewProp_sky_sphere__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeBase_Statics::NewProp_sky_sphere__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimModeBase_Statics::NewProp_loading_screen_widget__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_loading_screen_widget_ = { "loading_screen_widget_", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimModeBase, loading_screen_widget_), Z_Construct_UClass_ULoadingScreenWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimModeBase_Statics::NewProp_loading_screen_widget__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeBase_Statics::NewProp_loading_screen_widget__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimModeBase_Statics::NewProp_sky_sphere_class__MetaData[] = {
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_sky_sphere_class_ = { "sky_sphere_class_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimModeBase, sky_sphere_class_), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASimModeBase_Statics::NewProp_sky_sphere_class__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeBase_Statics::NewProp_sky_sphere_class__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimModeBase_Statics::NewProp_camera_director_class__MetaData[] = {
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_camera_director_class_ = { "camera_director_class_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimModeBase, camera_director_class_), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASimModeBase_Statics::NewProp_camera_director_class__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeBase_Statics::NewProp_camera_director_class__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimModeBase_Statics::NewProp_external_camera_class__MetaData[] = {
		{ "Comment", "//assets loaded in constructor\n" },
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
		{ "ToolTip", "assets loaded in constructor" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_external_camera_class_ = { "external_camera_class_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimModeBase, external_camera_class_), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASimModeBase_Statics::NewProp_external_camera_class__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeBase_Statics::NewProp_external_camera_class__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimModeBase_Statics::NewProp_collision_display_template_MetaData[] = {
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_collision_display_template = { "collision_display_template", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimModeBase, collision_display_template), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimModeBase_Statics::NewProp_collision_display_template_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeBase_Statics::NewProp_collision_display_template_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimModeBase_Statics::NewProp_pip_camera_class_MetaData[] = {
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_pip_camera_class = { "pip_camera_class", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimModeBase, pip_camera_class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASimModeBase_Statics::NewProp_pip_camera_class_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeBase_Statics::NewProp_pip_camera_class_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimModeBase_Statics::NewProp_EnableReport_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif
	void Z_Construct_UClass_ASimModeBase_Statics::NewProp_EnableReport_SetBit(void* Obj)
	{
		((ASimModeBase*)Obj)->EnableReport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_EnableReport = { "EnableReport", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASimModeBase), &Z_Construct_UClass_ASimModeBase_Statics::NewProp_EnableReport_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASimModeBase_Statics::NewProp_EnableReport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeBase_Statics::NewProp_EnableReport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimModeBase_Statics::NewProp_CameraDirector_MetaData[] = {
		{ "Category", "Refs" },
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_CameraDirector = { "CameraDirector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimModeBase, CameraDirector), Z_Construct_UClass_ACameraDirector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimModeBase_Statics::NewProp_CameraDirector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeBase_Statics::NewProp_CameraDirector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimModeBase_Statics::NewProp_OnLevelLoaded_MetaData[] = {
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_OnLevelLoaded = { "OnLevelLoaded", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimModeBase, OnLevelLoaded), Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASimModeBase_Statics::NewProp_OnLevelLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeBase_Statics::NewProp_OnLevelLoaded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_spawned_actors_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_spawned_actors__Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_sun_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_sky_sphere_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_loading_screen_widget_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_sky_sphere_class_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_camera_director_class_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_external_camera_class_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_collision_display_template,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_pip_camera_class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_EnableReport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_CameraDirector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_OnLevelLoaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASimModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASimModeBase_Statics::ClassParams = {
		&ASimModeBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASimModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASimModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASimModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASimModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASimModeBase, 3854116595);
	template<> AIRSIM_API UClass* StaticClass<ASimModeBase>()
	{
		return ASimModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASimModeBase(Z_Construct_UClass_ASimModeBase, &ASimModeBase::StaticClass, TEXT("/Script/AirSim"), TEXT("ASimModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
