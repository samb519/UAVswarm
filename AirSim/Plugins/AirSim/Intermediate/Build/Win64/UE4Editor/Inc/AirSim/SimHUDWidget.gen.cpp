// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/SimHUD/SimHUDWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimHUDWidget() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_USimHUDWidget_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_USimHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USimHUDWidget::execonToggleRecordingButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onToggleRecordingButtonClick();
		P_NATIVE_END;
	}
	static FName NAME_USimHUDWidget_getHelpContainerVisibility = FName(TEXT("getHelpContainerVisibility"));
	bool USimHUDWidget::getHelpContainerVisibility()
	{
		SimHUDWidget_eventgetHelpContainerVisibility_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_getHelpContainerVisibility),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USimHUDWidget_getRecordButtonVisibility = FName(TEXT("getRecordButtonVisibility"));
	bool USimHUDWidget::getRecordButtonVisibility()
	{
		SimHUDWidget_eventgetRecordButtonVisibility_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_getRecordButtonVisibility),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USimHUDWidget_getReportContainerVisibility = FName(TEXT("getReportContainerVisibility"));
	bool USimHUDWidget::getReportContainerVisibility()
	{
		SimHUDWidget_eventgetReportContainerVisibility_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_getReportContainerVisibility),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USimHUDWidget_getSubwindowVisibility = FName(TEXT("getSubwindowVisibility"));
	int32 USimHUDWidget::getSubwindowVisibility(int32 window_index)
	{
		SimHUDWidget_eventgetSubwindowVisibility_Parms Parms;
		Parms.window_index=window_index;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_getSubwindowVisibility),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_USimHUDWidget_initializeForPlay = FName(TEXT("initializeForPlay"));
	bool USimHUDWidget::initializeForPlay()
	{
		SimHUDWidget_eventinitializeForPlay_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_initializeForPlay),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USimHUDWidget_setHelpContainerVisibility = FName(TEXT("setHelpContainerVisibility"));
	bool USimHUDWidget::setHelpContainerVisibility(bool is_visible)
	{
		SimHUDWidget_eventsetHelpContainerVisibility_Parms Parms;
		Parms.is_visible=is_visible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_setHelpContainerVisibility),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USimHUDWidget_setRecordButtonVisibility = FName(TEXT("setRecordButtonVisibility"));
	bool USimHUDWidget::setRecordButtonVisibility(bool is_visible)
	{
		SimHUDWidget_eventsetRecordButtonVisibility_Parms Parms;
		Parms.is_visible=is_visible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_setRecordButtonVisibility),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USimHUDWidget_setReportContainerVisibility = FName(TEXT("setReportContainerVisibility"));
	bool USimHUDWidget::setReportContainerVisibility(bool is_visible)
	{
		SimHUDWidget_eventsetReportContainerVisibility_Parms Parms;
		Parms.is_visible=is_visible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_setReportContainerVisibility),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USimHUDWidget_setReportText = FName(TEXT("setReportText"));
	bool USimHUDWidget::setReportText(const FString& text)
	{
		SimHUDWidget_eventsetReportText_Parms Parms;
		Parms.text=text;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_setReportText),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USimHUDWidget_setSubwindowVisibility = FName(TEXT("setSubwindowVisibility"));
	bool USimHUDWidget::setSubwindowVisibility(int32 window_index, bool is_visible, UTextureRenderTarget2D* render_target)
	{
		SimHUDWidget_eventsetSubwindowVisibility_Parms Parms;
		Parms.window_index=window_index;
		Parms.is_visible=is_visible ? true : false;
		Parms.render_target=render_target;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_setSubwindowVisibility),&Parms);
		return !!Parms.ReturnValue;
	}
	void USimHUDWidget::StaticRegisterNativesUSimHUDWidget()
	{
		UClass* Class = USimHUDWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "onToggleRecordingButtonClick", &USimHUDWidget::execonToggleRecordingButtonClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimHUDWidget_eventgetHelpContainerVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimHUDWidget_eventgetHelpContainerVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "getHelpContainerVisibility", nullptr, nullptr, sizeof(SimHUDWidget_eventgetHelpContainerVisibility_Parms), Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimHUDWidget_eventgetRecordButtonVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimHUDWidget_eventgetRecordButtonVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "getRecordButtonVisibility", nullptr, nullptr, sizeof(SimHUDWidget_eventgetRecordButtonVisibility_Parms), Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimHUDWidget_eventgetReportContainerVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimHUDWidget_eventgetReportContainerVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "getReportContainerVisibility", nullptr, nullptr, sizeof(SimHUDWidget_eventgetReportContainerVisibility_Parms), Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_window_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimHUDWidget_eventgetSubwindowVisibility_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::NewProp_window_index = { "window_index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimHUDWidget_eventgetSubwindowVisibility_Parms, window_index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::NewProp_window_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "getSubwindowVisibility", nullptr, nullptr, sizeof(SimHUDWidget_eventgetSubwindowVisibility_Parms), Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimHUDWidget_eventinitializeForPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimHUDWidget_eventinitializeForPlay_Parms), &Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "initializeForPlay", nullptr, nullptr, sizeof(SimHUDWidget_eventinitializeForPlay_Parms), Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimHUDWidget_initializeForPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimHUDWidget_onToggleRecordingButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimHUDWidget_onToggleRecordingButtonClick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event handler" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_onToggleRecordingButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "onToggleRecordingButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimHUDWidget_onToggleRecordingButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_onToggleRecordingButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimHUDWidget_onToggleRecordingButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimHUDWidget_onToggleRecordingButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_is_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_is_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimHUDWidget_eventsetHelpContainerVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimHUDWidget_eventsetHelpContainerVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::NewProp_is_visible_SetBit(void* Obj)
	{
		((SimHUDWidget_eventsetHelpContainerVisibility_Parms*)Obj)->is_visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::NewProp_is_visible = { "is_visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimHUDWidget_eventsetHelpContainerVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::NewProp_is_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::NewProp_is_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "setHelpContainerVisibility", nullptr, nullptr, sizeof(SimHUDWidget_eventsetHelpContainerVisibility_Parms), Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_is_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_is_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimHUDWidget_eventsetRecordButtonVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimHUDWidget_eventsetRecordButtonVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::NewProp_is_visible_SetBit(void* Obj)
	{
		((SimHUDWidget_eventsetRecordButtonVisibility_Parms*)Obj)->is_visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::NewProp_is_visible = { "is_visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimHUDWidget_eventsetRecordButtonVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::NewProp_is_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::NewProp_is_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "setRecordButtonVisibility", nullptr, nullptr, sizeof(SimHUDWidget_eventsetRecordButtonVisibility_Parms), Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_is_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_is_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimHUDWidget_eventsetReportContainerVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimHUDWidget_eventsetReportContainerVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::NewProp_is_visible_SetBit(void* Obj)
	{
		((SimHUDWidget_eventsetReportContainerVisibility_Parms*)Obj)->is_visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::NewProp_is_visible = { "is_visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimHUDWidget_eventsetReportContainerVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::NewProp_is_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::NewProp_is_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "setReportContainerVisibility", nullptr, nullptr, sizeof(SimHUDWidget_eventsetReportContainerVisibility_Parms), Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimHUDWidget_setReportText_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimHUDWidget_eventsetReportText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimHUDWidget_eventsetReportText_Parms), &Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimHUDWidget_eventsetReportText_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::NewProp_text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "setReportText", nullptr, nullptr, sizeof(SimHUDWidget_eventsetReportText_Parms), Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimHUDWidget_setReportText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_render_target;
		static void NewProp_is_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_is_visible;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_window_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimHUDWidget_eventsetSubwindowVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimHUDWidget_eventsetSubwindowVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_render_target = { "render_target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimHUDWidget_eventsetSubwindowVisibility_Parms, render_target), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_is_visible_SetBit(void* Obj)
	{
		((SimHUDWidget_eventsetSubwindowVisibility_Parms*)Obj)->is_visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_is_visible = { "is_visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimHUDWidget_eventsetSubwindowVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_is_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_window_index = { "window_index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimHUDWidget_eventsetSubwindowVisibility_Parms, window_index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_render_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_is_visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_window_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "Comment", "//below are implemented in Blueprint. The return value is forced to be\n//bool even when not needed because of Unreal quirk that if return value\n//is not there then below are treated as events instead of overridable functions\n" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
		{ "ToolTip", "below are implemented in Blueprint. The return value is forced to be\nbool even when not needed because of Unreal quirk that if return value\nis not there then below are treated as events instead of overridable functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "setSubwindowVisibility", nullptr, nullptr, sizeof(SimHUDWidget_eventsetSubwindowVisibility_Parms), Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USimHUDWidget_NoRegister()
	{
		return USimHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_USimHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimHUDWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility, "getHelpContainerVisibility" }, // 3245776740
		{ &Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility, "getRecordButtonVisibility" }, // 2531779947
		{ &Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility, "getReportContainerVisibility" }, // 3534675732
		{ &Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility, "getSubwindowVisibility" }, // 4206451955
		{ &Z_Construct_UFunction_USimHUDWidget_initializeForPlay, "initializeForPlay" }, // 2832137902
		{ &Z_Construct_UFunction_USimHUDWidget_onToggleRecordingButtonClick, "onToggleRecordingButtonClick" }, // 1812262601
		{ &Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility, "setHelpContainerVisibility" }, // 906903395
		{ &Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility, "setRecordButtonVisibility" }, // 2205774517
		{ &Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility, "setReportContainerVisibility" }, // 3688606074
		{ &Z_Construct_UFunction_USimHUDWidget_setReportText, "setReportText" }, // 1549325693
		{ &Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility, "setSubwindowVisibility" }, // 3110246610
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimHUD/SimHUDWidget.h" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimHUDWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimHUDWidget_Statics::ClassParams = {
		&USimHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimHUDWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimHUDWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimHUDWidget, 3846564912);
	template<> AIRSIM_API UClass* StaticClass<USimHUDWidget>()
	{
		return USimHUDWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimHUDWidget(Z_Construct_UClass_USimHUDWidget, &USimHUDWidget::StaticClass, TEXT("/Script/AirSim"), TEXT("USimHUDWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimHUDWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
