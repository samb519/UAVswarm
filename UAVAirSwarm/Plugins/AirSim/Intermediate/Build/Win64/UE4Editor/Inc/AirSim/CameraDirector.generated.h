// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECameraDirectorMode : uint8;
#ifdef AIRSIM_CameraDirector_generated_h
#error "CameraDirector.generated.h already included, missing '#pragma once' in CameraDirector.h"
#endif
#define AIRSIM_CameraDirector_generated_h

#define UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_SPARSE_DATA
#define UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsetMode) \
	{ \
		P_GET_ENUM(ECameraDirectorMode,Z_Param_mode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setMode(ECameraDirectorMode(Z_Param_mode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECameraDirectorMode*)Z_Param__Result=P_THIS->getMode(); \
		P_NATIVE_END; \
	}


#define UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsetMode) \
	{ \
		P_GET_ENUM(ECameraDirectorMode,Z_Param_mode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setMode(ECameraDirectorMode(Z_Param_mode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECameraDirectorMode*)Z_Param__Result=P_THIS->getMode(); \
		P_NATIVE_END; \
	}


#define UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraDirector(); \
	friend struct Z_Construct_UClass_ACameraDirector_Statics; \
public: \
	DECLARE_CLASS(ACameraDirector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ACameraDirector)


#define UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_INCLASS \
private: \
	static void StaticRegisterNativesACameraDirector(); \
	friend struct Z_Construct_UClass_ACameraDirector_Statics; \
public: \
	DECLARE_CLASS(ACameraDirector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ACameraDirector)


#define UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraDirector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraDirector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraDirector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraDirector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraDirector(ACameraDirector&&); \
	NO_API ACameraDirector(const ACameraDirector&); \
public:


#define UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraDirector(ACameraDirector&&); \
	NO_API ACameraDirector(const ACameraDirector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraDirector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraDirector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACameraDirector)


#define UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__manual_pose_controller_() { return STRUCT_OFFSET(ACameraDirector, manual_pose_controller_); }


#define UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_26_PROLOG
#define UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_PRIVATE_PROPERTY_OFFSET \
	UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_SPARSE_DATA \
	UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_RPC_WRAPPERS \
	UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_INCLASS \
	UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_PRIVATE_PROPERTY_OFFSET \
	UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_SPARSE_DATA \
	UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_INCLASS_NO_PURE_DECLS \
	UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIRSIM_API UClass* StaticClass<class ACameraDirector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UAVAirSwarm_Plugins_AirSim_Source_CameraDirector_h


#define FOREACH_ENUM_ECAMERADIRECTORMODE(op) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FPV) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_GROUND_OBSERVER) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FLY_WITH_ME) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_MANUAL) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_SPRINGARM_CHASE) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_BACKUP) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_NODISPLAY) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FRONT) 

enum class ECameraDirectorMode : uint8;
template<> AIRSIM_API UEnum* StaticEnum<ECameraDirectorMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
