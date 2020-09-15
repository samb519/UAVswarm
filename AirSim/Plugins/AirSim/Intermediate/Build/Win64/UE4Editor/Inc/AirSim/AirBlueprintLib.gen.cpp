// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/AirBlueprintLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirBlueprintLib() {}
// Cross Module References
	AIRSIM_API UEnum* Z_Construct_UEnum_AirSim_LogDebugLevel();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	AIRSIM_API UClass* Z_Construct_UClass_UAirBlueprintLib_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_UAirBlueprintLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	static UEnum* LogDebugLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AirSim_LogDebugLevel, Z_Construct_UPackage__Script_AirSim(), TEXT("LogDebugLevel"));
		}
		return Singleton;
	}
	template<> AIRSIM_API UEnum* StaticEnum<LogDebugLevel>()
	{
		return LogDebugLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_LogDebugLevel(LogDebugLevel_StaticEnum, TEXT("/Script/AirSim"), TEXT("LogDebugLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AirSim_LogDebugLevel_Hash() { return 3500954024U; }
	UEnum* Z_Construct_UEnum_AirSim_LogDebugLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AirSim();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("LogDebugLevel"), 0, Get_Z_Construct_UEnum_AirSim_LogDebugLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LogDebugLevel::Informational", (int64)LogDebugLevel::Informational },
				{ "LogDebugLevel::Success", (int64)LogDebugLevel::Success },
				{ "LogDebugLevel::Failure", (int64)LogDebugLevel::Failure },
				{ "LogDebugLevel::Unimportant", (int64)LogDebugLevel::Unimportant },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Failure.DisplayName", "Failure" },
				{ "Failure.Name", "LogDebugLevel::Failure" },
				{ "Informational.DisplayName", "Informational" },
				{ "Informational.Name", "LogDebugLevel::Informational" },
				{ "ModuleRelativePath", "AirBlueprintLib.h" },
				{ "Success.DisplayName", "Success" },
				{ "Success.Name", "LogDebugLevel::Success" },
				{ "Unimportant.DisplayName", "Unimportant" },
				{ "Unimportant.Name", "LogDebugLevel::Unimportant" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AirSim,
				nullptr,
				"LogDebugLevel",
				"LogDebugLevel",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UAirBlueprintLib::execRunConsoleCommand)
	{
		P_GET_OBJECT(AActor,Z_Param_context);
		P_GET_PROPERTY(FStrProperty,Z_Param_command);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAirBlueprintLib::RunConsoleCommand(Z_Param_context,Z_Param_command);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAirBlueprintLib::execListWorldsInRegistry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UAirBlueprintLib::ListWorldsInRegistry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAirBlueprintLib::execspawnPlayer)
	{
		P_GET_OBJECT(UWorld,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAirBlueprintLib::spawnPlayer(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAirBlueprintLib::execloadLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_context);
		P_GET_PROPERTY(FStrProperty,Z_Param_level_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelStreamingDynamic**)Z_Param__Result=UAirBlueprintLib::loadLevel(Z_Param_context,Z_Param_level_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAirBlueprintLib::execLogMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_suffix);
		P_GET_ENUM(LogDebugLevel,Z_Param_level);
		P_GET_PROPERTY(FFloatProperty,Z_Param_persist_sec);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAirBlueprintLib::LogMessage(Z_Param_prefix,Z_Param_suffix,LogDebugLevel(Z_Param_level),Z_Param_persist_sec);
		P_NATIVE_END;
	}
	void UAirBlueprintLib::StaticRegisterNativesUAirBlueprintLib()
	{
		UClass* Class = UAirBlueprintLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ListWorldsInRegistry", &UAirBlueprintLib::execListWorldsInRegistry },
			{ "loadLevel", &UAirBlueprintLib::execloadLevel },
			{ "LogMessage", &UAirBlueprintLib::execLogMessage },
			{ "RunConsoleCommand", &UAirBlueprintLib::execRunConsoleCommand },
			{ "spawnPlayer", &UAirBlueprintLib::execspawnPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics
	{
		struct AirBlueprintLib_eventListWorldsInRegistry_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AirBlueprintLib_eventListWorldsInRegistry_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::Function_MetaDataParams[] = {
		{ "Category", "AirSim|LevelAPI" },
		{ "ModuleRelativePath", "AirBlueprintLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAirBlueprintLib, nullptr, "ListWorldsInRegistry", nullptr, nullptr, sizeof(AirBlueprintLib_eventListWorldsInRegistry_Parms), Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics
	{
		struct AirBlueprintLib_eventloadLevel_Parms
		{
			UObject* context;
			FString level_name;
			ULevelStreamingDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_level_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_level_name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AirBlueprintLib_eventloadLevel_Parms, ReturnValue), Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::NewProp_level_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::NewProp_level_name = { "level_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AirBlueprintLib_eventloadLevel_Parms, level_name), METADATA_PARAMS(Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::NewProp_level_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::NewProp_level_name_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AirBlueprintLib_eventloadLevel_Parms, context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::NewProp_level_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "AirSim|LevelAPI" },
		{ "ModuleRelativePath", "AirBlueprintLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAirBlueprintLib, nullptr, "loadLevel", nullptr, nullptr, sizeof(AirBlueprintLib_eventloadLevel_Parms), Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAirBlueprintLib_loadLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics
	{
		struct AirBlueprintLib_eventLogMessage_Parms
		{
			FString prefix;
			FString suffix;
			LogDebugLevel level;
			float persist_sec;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_persist_sec;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_level_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_prefix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_persist_sec = { "persist_sec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AirBlueprintLib_eventLogMessage_Parms, persist_sec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AirBlueprintLib_eventLogMessage_Parms, level), Z_Construct_UEnum_AirSim_LogDebugLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_level_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_suffix = { "suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AirBlueprintLib_eventLogMessage_Parms, suffix), METADATA_PARAMS(Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_prefix = { "prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AirBlueprintLib_eventLogMessage_Parms, prefix), METADATA_PARAMS(Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_prefix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_persist_sec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_level_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_prefix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utils" },
		{ "CPP_Default_persist_sec", "60.000000" },
		{ "ModuleRelativePath", "AirBlueprintLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAirBlueprintLib, nullptr, "LogMessage", nullptr, nullptr, sizeof(AirBlueprintLib_eventLogMessage_Parms), Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAirBlueprintLib_LogMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics
	{
		struct AirBlueprintLib_eventRunConsoleCommand_Parms
		{
			const AActor* context;
			FString command;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_command;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AirBlueprintLib_eventRunConsoleCommand_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AirBlueprintLib_eventRunConsoleCommand_Parms), &Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_command = { "command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AirBlueprintLib_eventRunConsoleCommand_Parms, command), METADATA_PARAMS(Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_command_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_command_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AirBlueprintLib_eventRunConsoleCommand_Parms, context), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_context_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_command,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "AirSim" },
		{ "ModuleRelativePath", "AirBlueprintLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAirBlueprintLib, nullptr, "RunConsoleCommand", nullptr, nullptr, sizeof(AirBlueprintLib_eventRunConsoleCommand_Parms), Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics
	{
		struct AirBlueprintLib_eventspawnPlayer_Parms
		{
			UWorld* context;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AirBlueprintLib_eventspawnPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AirBlueprintLib_eventspawnPlayer_Parms), &Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AirBlueprintLib_eventspawnPlayer_Parms, context), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "AirSim|LevelAPI" },
		{ "ModuleRelativePath", "AirBlueprintLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAirBlueprintLib, nullptr, "spawnPlayer", nullptr, nullptr, sizeof(AirBlueprintLib_eventspawnPlayer_Parms), Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAirBlueprintLib_NoRegister()
	{
		return UAirBlueprintLib::StaticClass();
	}
	struct Z_Construct_UClass_UAirBlueprintLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAirBlueprintLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAirBlueprintLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry, "ListWorldsInRegistry" }, // 2431413375
		{ &Z_Construct_UFunction_UAirBlueprintLib_loadLevel, "loadLevel" }, // 2173281267
		{ &Z_Construct_UFunction_UAirBlueprintLib_LogMessage, "LogMessage" }, // 2023513331
		{ &Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand, "RunConsoleCommand" }, // 1618833580
		{ &Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer, "spawnPlayer" }, // 4178625128
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAirBlueprintLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "AirBlueprintLib.h" },
		{ "ModuleRelativePath", "AirBlueprintLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAirBlueprintLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAirBlueprintLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAirBlueprintLib_Statics::ClassParams = {
		&UAirBlueprintLib::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAirBlueprintLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAirBlueprintLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAirBlueprintLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAirBlueprintLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAirBlueprintLib, 4021210145);
	template<> AIRSIM_API UClass* StaticClass<UAirBlueprintLib>()
	{
		return UAirBlueprintLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAirBlueprintLib(Z_Construct_UClass_UAirBlueprintLib, &UAirBlueprintLib::StaticClass, TEXT("/Script/AirSim"), TEXT("UAirBlueprintLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAirBlueprintLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
