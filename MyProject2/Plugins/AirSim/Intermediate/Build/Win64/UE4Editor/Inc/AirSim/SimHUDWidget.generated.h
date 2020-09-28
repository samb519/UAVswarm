// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
#ifdef AIRSIM_SimHUDWidget_generated_h
#error "SimHUDWidget.generated.h already included, missing '#pragma once' in SimHUDWidget.h"
#endif
#define AIRSIM_SimHUDWidget_generated_h

#define MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_SPARSE_DATA
#define MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execonToggleRecordingButtonClick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onToggleRecordingButtonClick(); \
		P_NATIVE_END; \
	}


#define MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execonToggleRecordingButtonClick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onToggleRecordingButtonClick(); \
		P_NATIVE_END; \
	}


#define MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_EVENT_PARMS \
	struct SimHUDWidget_eventgetHelpContainerVisibility_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventgetHelpContainerVisibility_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SimHUDWidget_eventgetRecordButtonVisibility_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventgetRecordButtonVisibility_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SimHUDWidget_eventgetReportContainerVisibility_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventgetReportContainerVisibility_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SimHUDWidget_eventgetSubwindowVisibility_Parms \
	{ \
		int32 window_index; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventgetSubwindowVisibility_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct SimHUDWidget_eventinitializeForPlay_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventinitializeForPlay_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SimHUDWidget_eventsetHelpContainerVisibility_Parms \
	{ \
		bool is_visible; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventsetHelpContainerVisibility_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SimHUDWidget_eventsetRecordButtonVisibility_Parms \
	{ \
		bool is_visible; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventsetRecordButtonVisibility_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SimHUDWidget_eventsetReportContainerVisibility_Parms \
	{ \
		bool is_visible; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventsetReportContainerVisibility_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SimHUDWidget_eventsetReportText_Parms \
	{ \
		FString text; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventsetReportText_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SimHUDWidget_eventsetSubwindowVisibility_Parms \
	{ \
		int32 window_index; \
		bool is_visible; \
		UTextureRenderTarget2D* render_target; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventsetSubwindowVisibility_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_CALLBACK_WRAPPERS
#define MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimHUDWidget(); \
	friend struct Z_Construct_UClass_USimHUDWidget_Statics; \
public: \
	DECLARE_CLASS(USimHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(USimHUDWidget)


#define MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSimHUDWidget(); \
	friend struct Z_Construct_UClass_USimHUDWidget_Statics; \
public: \
	DECLARE_CLASS(USimHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(USimHUDWidget)


#define MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimHUDWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimHUDWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimHUDWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimHUDWidget(USimHUDWidget&&); \
	NO_API USimHUDWidget(const USimHUDWidget&); \
public:


#define MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimHUDWidget(USimHUDWidget&&); \
	NO_API USimHUDWidget(const USimHUDWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimHUDWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimHUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimHUDWidget)


#define MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_PRIVATE_PROPERTY_OFFSET
#define MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_10_PROLOG \
	MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_EVENT_PARMS


#define MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_SPARSE_DATA \
	MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_RPC_WRAPPERS \
	MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_CALLBACK_WRAPPERS \
	MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_INCLASS \
	MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_SPARSE_DATA \
	MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_CALLBACK_WRAPPERS \
	MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_INCLASS_NO_PURE_DECLS \
	MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIRSIM_API UClass* StaticClass<class USimHUDWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
