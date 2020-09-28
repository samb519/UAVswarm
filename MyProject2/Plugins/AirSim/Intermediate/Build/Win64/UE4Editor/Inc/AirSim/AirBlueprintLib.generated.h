// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UWorld;
class UObject;
class ULevelStreamingDynamic;
enum class LogDebugLevel : uint8;
#ifdef AIRSIM_AirBlueprintLib_generated_h
#error "AirBlueprintLib.generated.h already included, missing '#pragma once' in AirBlueprintLib.h"
#endif
#define AIRSIM_AirBlueprintLib_generated_h

#define MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_SPARSE_DATA
#define MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRunConsoleCommand) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_context); \
		P_GET_PROPERTY(UStrProperty,Z_Param_command); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAirBlueprintLib::RunConsoleCommand(Z_Param_context,Z_Param_command); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListWorldsInRegistry) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FName>*)Z_Param__Result=UAirBlueprintLib::ListWorldsInRegistry(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execspawnPlayer) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_context); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAirBlueprintLib::spawnPlayer(Z_Param_context); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execloadLevel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_context); \
		P_GET_PROPERTY(UStrProperty,Z_Param_level_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevelStreamingDynamic**)Z_Param__Result=UAirBlueprintLib::loadLevel(Z_Param_context,Z_Param_level_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_prefix); \
		P_GET_PROPERTY(UStrProperty,Z_Param_suffix); \
		P_GET_ENUM(LogDebugLevel,Z_Param_level); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_persist_sec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAirBlueprintLib::LogMessage(Z_Param_prefix,Z_Param_suffix,LogDebugLevel(Z_Param_level),Z_Param_persist_sec); \
		P_NATIVE_END; \
	}


#define MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRunConsoleCommand) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_context); \
		P_GET_PROPERTY(UStrProperty,Z_Param_command); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAirBlueprintLib::RunConsoleCommand(Z_Param_context,Z_Param_command); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListWorldsInRegistry) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FName>*)Z_Param__Result=UAirBlueprintLib::ListWorldsInRegistry(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execspawnPlayer) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_context); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAirBlueprintLib::spawnPlayer(Z_Param_context); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execloadLevel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_context); \
		P_GET_PROPERTY(UStrProperty,Z_Param_level_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevelStreamingDynamic**)Z_Param__Result=UAirBlueprintLib::loadLevel(Z_Param_context,Z_Param_level_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_prefix); \
		P_GET_PROPERTY(UStrProperty,Z_Param_suffix); \
		P_GET_ENUM(LogDebugLevel,Z_Param_level); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_persist_sec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAirBlueprintLib::LogMessage(Z_Param_prefix,Z_Param_suffix,LogDebugLevel(Z_Param_level),Z_Param_persist_sec); \
		P_NATIVE_END; \
	}


#define MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAirBlueprintLib(); \
	friend struct Z_Construct_UClass_UAirBlueprintLib_Statics; \
public: \
	DECLARE_CLASS(UAirBlueprintLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(UAirBlueprintLib)


#define MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUAirBlueprintLib(); \
	friend struct Z_Construct_UClass_UAirBlueprintLib_Statics; \
public: \
	DECLARE_CLASS(UAirBlueprintLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(UAirBlueprintLib)


#define MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAirBlueprintLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAirBlueprintLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAirBlueprintLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAirBlueprintLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAirBlueprintLib(UAirBlueprintLib&&); \
	NO_API UAirBlueprintLib(const UAirBlueprintLib&); \
public:


#define MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAirBlueprintLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAirBlueprintLib(UAirBlueprintLib&&); \
	NO_API UAirBlueprintLib(const UAirBlueprintLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAirBlueprintLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAirBlueprintLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAirBlueprintLib)


#define MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_PRIVATE_PROPERTY_OFFSET
#define MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_42_PROLOG
#define MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_SPARSE_DATA \
	MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_RPC_WRAPPERS \
	MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_INCLASS \
	MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_SPARSE_DATA \
	MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_INCLASS_NO_PURE_DECLS \
	MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIRSIM_API UClass* StaticClass<class UAirBlueprintLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Plugins_AirSim_Source_AirBlueprintLib_h


#define FOREACH_ENUM_LOGDEBUGLEVEL(op) \
	op(LogDebugLevel::Informational) \
	op(LogDebugLevel::Success) \
	op(LogDebugLevel::Failure) \
	op(LogDebugLevel::Unimportant) 

enum class LogDebugLevel : uint8;
template<> AIRSIM_API UEnum* StaticEnum<LogDebugLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
