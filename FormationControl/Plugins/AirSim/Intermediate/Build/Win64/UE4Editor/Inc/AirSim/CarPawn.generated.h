// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIRSIM_CarPawn_generated_h
#error "CarPawn.generated.h already included, missing '#pragma once' in CarPawn.h"
#endif
#define AIRSIM_CarPawn_generated_h

#define FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_SPARSE_DATA
#define FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_RPC_WRAPPERS
#define FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACarPawn(); \
	friend struct Z_Construct_UClass_ACarPawn_Statics; \
public: \
	DECLARE_CLASS(ACarPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ACarPawn)


#define FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_INCLASS \
private: \
	static void StaticRegisterNativesACarPawn(); \
	friend struct Z_Construct_UClass_ACarPawn_Statics; \
public: \
	DECLARE_CLASS(ACarPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ACarPawn)


#define FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACarPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACarPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarPawn(ACarPawn&&); \
	NO_API ACarPawn(const ACarPawn&); \
public:


#define FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarPawn(ACarPawn&&); \
	NO_API ACarPawn(const ACarPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACarPawn)


#define FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__camera_front_center_base_() { return STRUCT_OFFSET(ACarPawn, camera_front_center_base_); } \
	FORCEINLINE static uint32 __PPO__camera_front_left_base_() { return STRUCT_OFFSET(ACarPawn, camera_front_left_base_); } \
	FORCEINLINE static uint32 __PPO__camera_front_right_base_() { return STRUCT_OFFSET(ACarPawn, camera_front_right_base_); } \
	FORCEINLINE static uint32 __PPO__camera_driver_base_() { return STRUCT_OFFSET(ACarPawn, camera_driver_base_); } \
	FORCEINLINE static uint32 __PPO__camera_back_center_base_() { return STRUCT_OFFSET(ACarPawn, camera_back_center_base_); } \
	FORCEINLINE static uint32 __PPO__camera_front_center_() { return STRUCT_OFFSET(ACarPawn, camera_front_center_); } \
	FORCEINLINE static uint32 __PPO__camera_front_left_() { return STRUCT_OFFSET(ACarPawn, camera_front_left_); } \
	FORCEINLINE static uint32 __PPO__camera_front_right_() { return STRUCT_OFFSET(ACarPawn, camera_front_right_); } \
	FORCEINLINE static uint32 __PPO__camera_driver_() { return STRUCT_OFFSET(ACarPawn, camera_driver_); } \
	FORCEINLINE static uint32 __PPO__camera_back_center_() { return STRUCT_OFFSET(ACarPawn, camera_back_center_); }


#define FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_28_PROLOG
#define FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_PRIVATE_PROPERTY_OFFSET \
	FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_SPARSE_DATA \
	FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_RPC_WRAPPERS \
	FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_INCLASS \
	FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_PRIVATE_PROPERTY_OFFSET \
	FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_SPARSE_DATA \
	FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_INCLASS_NO_PURE_DECLS \
	FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIRSIM_API UClass* StaticClass<class ACarPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FormationControl_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
