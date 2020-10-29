// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Weather/WeatherLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeatherLib() {}
// Cross Module References
	AIRSIM_API UEnum* Z_Construct_UEnum_AirSim_EWeatherParamVector();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	AIRSIM_API UEnum* Z_Construct_UEnum_AirSim_EWeatherParamScalar();
	AIRSIM_API UClass* Z_Construct_UClass_UWeatherLib_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_UWeatherLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	static UEnum* EWeatherParamVector_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AirSim_EWeatherParamVector, Z_Construct_UPackage__Script_AirSim(), TEXT("EWeatherParamVector"));
		}
		return Singleton;
	}
	template<> AIRSIM_API UEnum* StaticEnum<EWeatherParamVector>()
	{
		return EWeatherParamVector_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeatherParamVector(EWeatherParamVector_StaticEnum, TEXT("/Script/AirSim"), TEXT("EWeatherParamVector"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AirSim_EWeatherParamVector_Hash() { return 3843546676U; }
	UEnum* Z_Construct_UEnum_AirSim_EWeatherParamVector()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AirSim();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeatherParamVector"), 0, Get_Z_Construct_UEnum_AirSim_EWeatherParamVector_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeatherParamVector::WEATHER_PARAM_VECTOR_WIND", (int64)EWeatherParamVector::WEATHER_PARAM_VECTOR_WIND },
				{ "EWeatherParamVector::WEATHER_PARAM_VECTOR_MAX", (int64)EWeatherParamVector::WEATHER_PARAM_VECTOR_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Weather/WeatherLib.h" },
				{ "WEATHER_PARAM_VECTOR_MAX.DisplayName", "MAX" },
				{ "WEATHER_PARAM_VECTOR_MAX.Name", "EWeatherParamVector::WEATHER_PARAM_VECTOR_MAX" },
				{ "WEATHER_PARAM_VECTOR_WIND.DisplayName", "Wind" },
				{ "WEATHER_PARAM_VECTOR_WIND.Name", "EWeatherParamVector::WEATHER_PARAM_VECTOR_WIND" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AirSim,
				nullptr,
				"EWeatherParamVector",
				"EWeatherParamVector",
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
	static UEnum* EWeatherParamScalar_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AirSim_EWeatherParamScalar, Z_Construct_UPackage__Script_AirSim(), TEXT("EWeatherParamScalar"));
		}
		return Singleton;
	}
	template<> AIRSIM_API UEnum* StaticEnum<EWeatherParamScalar>()
	{
		return EWeatherParamScalar_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeatherParamScalar(EWeatherParamScalar_StaticEnum, TEXT("/Script/AirSim"), TEXT("EWeatherParamScalar"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AirSim_EWeatherParamScalar_Hash() { return 894792757U; }
	UEnum* Z_Construct_UEnum_AirSim_EWeatherParamScalar()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AirSim();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeatherParamScalar"), 0, Get_Z_Construct_UEnum_AirSim_EWeatherParamScalar_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_RAIN", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_RAIN },
				{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADWETNESS", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADWETNESS },
				{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_SNOW", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_SNOW },
				{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADSNOW", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADSNOW },
				{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_MAPLELEAF", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_MAPLELEAF },
				{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADLEAF", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADLEAF },
				{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_DUST", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_DUST },
				{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_FOG", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_FOG },
				{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_WEATHERENABLED", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_WEATHERENABLED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// NOTE: when adding new enums, you must add it to GetWeatherParamScalarName()'s switch statement\n// with a name for the corresponding material collection param name\n// can't use enum's display names because on package those get deleted.\n" },
				{ "ModuleRelativePath", "Weather/WeatherLib.h" },
				{ "ToolTip", "NOTE: when adding new enums, you must add it to GetWeatherParamScalarName()'s switch statement\nwith a name for the corresponding material collection param name\ncan't use enum's display names because on package those get deleted." },
				{ "WEATHER_PARAM_SCALAR_DUST.DisplayName", "Dust" },
				{ "WEATHER_PARAM_SCALAR_DUST.Name", "EWeatherParamScalar::WEATHER_PARAM_SCALAR_DUST" },
				{ "WEATHER_PARAM_SCALAR_FOG.DisplayName", "Fog" },
				{ "WEATHER_PARAM_SCALAR_FOG.Name", "EWeatherParamScalar::WEATHER_PARAM_SCALAR_FOG" },
				{ "WEATHER_PARAM_SCALAR_MAPLELEAF.DisplayName", "MapleLeaf" },
				{ "WEATHER_PARAM_SCALAR_MAPLELEAF.Name", "EWeatherParamScalar::WEATHER_PARAM_SCALAR_MAPLELEAF" },
				{ "WEATHER_PARAM_SCALAR_RAIN.DisplayName", "Rain" },
				{ "WEATHER_PARAM_SCALAR_RAIN.Name", "EWeatherParamScalar::WEATHER_PARAM_SCALAR_RAIN" },
				{ "WEATHER_PARAM_SCALAR_ROADLEAF.DisplayName", "RoadLeaf" },
				{ "WEATHER_PARAM_SCALAR_ROADLEAF.Name", "EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADLEAF" },
				{ "WEATHER_PARAM_SCALAR_ROADSNOW.DisplayName", "RoadSnow" },
				{ "WEATHER_PARAM_SCALAR_ROADSNOW.Name", "EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADSNOW" },
				{ "WEATHER_PARAM_SCALAR_ROADWETNESS.DisplayName", "RoadWetness" },
				{ "WEATHER_PARAM_SCALAR_ROADWETNESS.Name", "EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADWETNESS" },
				{ "WEATHER_PARAM_SCALAR_SNOW.DisplayName", "Snow" },
				{ "WEATHER_PARAM_SCALAR_SNOW.Name", "EWeatherParamScalar::WEATHER_PARAM_SCALAR_SNOW" },
				{ "WEATHER_PARAM_SCALAR_WEATHERENABLED.DisplayName", "WeatherEnabled" },
				{ "WEATHER_PARAM_SCALAR_WEATHERENABLED.Name", "EWeatherParamScalar::WEATHER_PARAM_SCALAR_WEATHERENABLED" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AirSim,
				nullptr,
				"EWeatherParamScalar",
				"EWeatherParamScalar",
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
	DEFINE_FUNCTION(UWeatherLib::execactorGetWorld)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=UWeatherLib::actorGetWorld(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeatherLib::execwidgetGetWorld)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=UWeatherLib::widgetGetWorld(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeatherLib::exectoggleWeatherMenu)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWeatherLib::toggleWeatherMenu(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeatherLib::execisMenuVisible)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWeatherLib::isMenuVisible(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeatherLib::exechideWeatherMenu)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWeatherLib::hideWeatherMenu(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeatherLib::execshowWeatherMenu)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWeatherLib::showWeatherMenu(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeatherLib::execsetWeatherEnabled)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWeatherLib::setWeatherEnabled(Z_Param_World,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeatherLib::execgetIsWeatherEnabled)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWeatherLib::getIsWeatherEnabled(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeatherLib::execsetWeatherWindDirection)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_NewWind);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWeatherLib::setWeatherWindDirection(Z_Param_World,Z_Param_NewWind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeatherLib::execgetWeatherWindDirection)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UWeatherLib::getWeatherWindDirection(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeatherLib::execgetWeatherParamScalar)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_ENUM(EWeatherParamScalar,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UWeatherLib::getWeatherParamScalar(Z_Param_World,EWeatherParamScalar(Z_Param_Param));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeatherLib::execsetWeatherParamScalar)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_ENUM(EWeatherParamScalar,Z_Param_Param);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWeatherLib::setWeatherParamScalar(Z_Param_World,EWeatherParamScalar(Z_Param_Param),Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeatherLib::execinitWeather)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_TARRAY(AActor*,Z_Param_ActorsToAttachTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWeatherLib::initWeather(Z_Param_World,Z_Param_ActorsToAttachTo);
		P_NATIVE_END;
	}
	void UWeatherLib::StaticRegisterNativesUWeatherLib()
	{
		UClass* Class = UWeatherLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "actorGetWorld", &UWeatherLib::execactorGetWorld },
			{ "getIsWeatherEnabled", &UWeatherLib::execgetIsWeatherEnabled },
			{ "getWeatherParamScalar", &UWeatherLib::execgetWeatherParamScalar },
			{ "getWeatherWindDirection", &UWeatherLib::execgetWeatherWindDirection },
			{ "hideWeatherMenu", &UWeatherLib::exechideWeatherMenu },
			{ "initWeather", &UWeatherLib::execinitWeather },
			{ "isMenuVisible", &UWeatherLib::execisMenuVisible },
			{ "setWeatherEnabled", &UWeatherLib::execsetWeatherEnabled },
			{ "setWeatherParamScalar", &UWeatherLib::execsetWeatherParamScalar },
			{ "setWeatherWindDirection", &UWeatherLib::execsetWeatherWindDirection },
			{ "showWeatherMenu", &UWeatherLib::execshowWeatherMenu },
			{ "toggleWeatherMenu", &UWeatherLib::exectoggleWeatherMenu },
			{ "widgetGetWorld", &UWeatherLib::execwidgetGetWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics
	{
		struct WeatherLib_eventactorGetWorld_Parms
		{
			AActor* Actor;
			UWorld* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventactorGetWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventactorGetWorld_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "World" },
		{ "Comment", "// blueprint callable function for actor to get world\n// since GetWorld() isn't exposed to bp\n" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
		{ "ToolTip", "blueprint callable function for actor to get world\nsince GetWorld() isn't exposed to bp" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "actorGetWorld", nullptr, nullptr, sizeof(WeatherLib_eventactorGetWorld_Parms), Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherLib_actorGetWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics
	{
		struct WeatherLib_eventgetIsWeatherEnabled_Parms
		{
			UWorld* World;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeatherLib_eventgetIsWeatherEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeatherLib_eventgetIsWeatherEnabled_Parms), &Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventgetIsWeatherEnabled_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "getIsWeatherEnabled", nullptr, nullptr, sizeof(WeatherLib_eventgetIsWeatherEnabled_Parms), Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics
	{
		struct WeatherLib_eventgetWeatherParamScalar_Parms
		{
			UWorld* World;
			EWeatherParamScalar Param;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Param_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventgetWeatherParamScalar_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventgetWeatherParamScalar_Parms, Param), Z_Construct_UEnum_AirSim_EWeatherParamScalar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::NewProp_Param_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventgetWeatherParamScalar_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::NewProp_Param_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "getWeatherParamScalar", nullptr, nullptr, sizeof(WeatherLib_eventgetWeatherParamScalar_Parms), Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics
	{
		struct WeatherLib_eventgetWeatherWindDirection_Parms
		{
			UWorld* World;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventgetWeatherWindDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventgetWeatherWindDirection_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "Comment", "// only vector for now\n" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
		{ "ToolTip", "only vector for now" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "getWeatherWindDirection", nullptr, nullptr, sizeof(WeatherLib_eventgetWeatherWindDirection_Parms), Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics
	{
		struct WeatherLib_eventhideWeatherMenu_Parms
		{
			UWorld* World;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventhideWeatherMenu_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "hideWeatherMenu", nullptr, nullptr, sizeof(WeatherLib_eventhideWeatherMenu_Parms), Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherLib_hideWeatherMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeatherLib_initWeather_Statics
	{
		struct WeatherLib_eventinitWeather_Parms
		{
			UWorld* World;
			TArray<AActor*> ActorsToAttachTo;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToAttachTo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToAttachTo_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWeatherLib_initWeather_Statics::NewProp_ActorsToAttachTo = { "ActorsToAttachTo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventinitWeather_Parms, ActorsToAttachTo), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_initWeather_Statics::NewProp_ActorsToAttachTo_Inner = { "ActorsToAttachTo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_initWeather_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventinitWeather_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_initWeather_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_initWeather_Statics::NewProp_ActorsToAttachTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_initWeather_Statics::NewProp_ActorsToAttachTo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_initWeather_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherLib_initWeather_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "Comment", "// ActorsToAttachTo is an array of actors that we will attach weather particles to\n// in most cases, this will be the playable pawns so they will always have weather fx\n" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
		{ "ToolTip", "ActorsToAttachTo is an array of actors that we will attach weather particles to\nin most cases, this will be the playable pawns so they will always have weather fx" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_initWeather_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "initWeather", nullptr, nullptr, sizeof(WeatherLib_eventinitWeather_Parms), Z_Construct_UFunction_UWeatherLib_initWeather_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_initWeather_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherLib_initWeather_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_initWeather_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherLib_initWeather()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherLib_initWeather_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics
	{
		struct WeatherLib_eventisMenuVisible_Parms
		{
			UWorld* World;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeatherLib_eventisMenuVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeatherLib_eventisMenuVisible_Parms), &Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventisMenuVisible_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "isMenuVisible", nullptr, nullptr, sizeof(WeatherLib_eventisMenuVisible_Parms), Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherLib_isMenuVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics
	{
		struct WeatherLib_eventsetWeatherEnabled_Parms
		{
			UWorld* World;
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((WeatherLib_eventsetWeatherEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeatherLib_eventsetWeatherEnabled_Parms), &Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventsetWeatherEnabled_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "setWeatherEnabled", nullptr, nullptr, sizeof(WeatherLib_eventsetWeatherEnabled_Parms), Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherLib_setWeatherEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics
	{
		struct WeatherLib_eventsetWeatherParamScalar_Parms
		{
			UWorld* World;
			EWeatherParamScalar Param;
			float Amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Param_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventsetWeatherParamScalar_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventsetWeatherParamScalar_Parms, Param), Z_Construct_UEnum_AirSim_EWeatherParamScalar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::NewProp_Param_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventsetWeatherParamScalar_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::NewProp_Param_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "Comment", "/* only sets or gets one param. need any actor in the world for WorldContextObject, so we can get world*/" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
		{ "ToolTip", "only sets or gets one param. need any actor in the world for WorldContextObject, so we can get world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "setWeatherParamScalar", nullptr, nullptr, sizeof(WeatherLib_eventsetWeatherParamScalar_Parms), Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics
	{
		struct WeatherLib_eventsetWeatherWindDirection_Parms
		{
			UWorld* World;
			FVector NewWind;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewWind;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::NewProp_NewWind = { "NewWind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventsetWeatherWindDirection_Parms, NewWind), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventsetWeatherWindDirection_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::NewProp_NewWind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "Comment", "// in a range of (-1, -1, -1) to (1, 1, 1)\n" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
		{ "ToolTip", "in a range of (-1, -1, -1) to (1, 1, 1)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "setWeatherWindDirection", nullptr, nullptr, sizeof(WeatherLib_eventsetWeatherWindDirection_Parms), Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics
	{
		struct WeatherLib_eventshowWeatherMenu_Parms
		{
			UWorld* World;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventshowWeatherMenu_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "showWeatherMenu", nullptr, nullptr, sizeof(WeatherLib_eventshowWeatherMenu_Parms), Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherLib_showWeatherMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics
	{
		struct WeatherLib_eventtoggleWeatherMenu_Parms
		{
			UWorld* World;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventtoggleWeatherMenu_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "toggleWeatherMenu", nullptr, nullptr, sizeof(WeatherLib_eventtoggleWeatherMenu_Parms), Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics
	{
		struct WeatherLib_eventwidgetGetWorld_Parms
		{
			UUserWidget* Widget;
			UWorld* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventwidgetGetWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherLib_eventwidgetGetWorld_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "World" },
		{ "Comment", "// blueprint callable function for widget to get world\n// since GetWorld() isn't exposed to bp\n// widget isnt a subclass of actor, so it needs its own implementation\n" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
		{ "ToolTip", "blueprint callable function for widget to get world\nsince GetWorld() isn't exposed to bp\nwidget isnt a subclass of actor, so it needs its own implementation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "widgetGetWorld", nullptr, nullptr, sizeof(WeatherLib_eventwidgetGetWorld_Parms), Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherLib_widgetGetWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeatherLib_NoRegister()
	{
		return UWeatherLib::StaticClass();
	}
	struct Z_Construct_UClass_UWeatherLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeatherLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeatherLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeatherLib_actorGetWorld, "actorGetWorld" }, // 2576132410
		{ &Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled, "getIsWeatherEnabled" }, // 2057677503
		{ &Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar, "getWeatherParamScalar" }, // 358042167
		{ &Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection, "getWeatherWindDirection" }, // 2222146458
		{ &Z_Construct_UFunction_UWeatherLib_hideWeatherMenu, "hideWeatherMenu" }, // 2136213642
		{ &Z_Construct_UFunction_UWeatherLib_initWeather, "initWeather" }, // 1911351567
		{ &Z_Construct_UFunction_UWeatherLib_isMenuVisible, "isMenuVisible" }, // 2794254432
		{ &Z_Construct_UFunction_UWeatherLib_setWeatherEnabled, "setWeatherEnabled" }, // 2197573715
		{ &Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar, "setWeatherParamScalar" }, // 3251083984
		{ &Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection, "setWeatherWindDirection" }, // 2381028075
		{ &Z_Construct_UFunction_UWeatherLib_showWeatherMenu, "showWeatherMenu" }, // 2917160541
		{ &Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu, "toggleWeatherMenu" }, // 907797127
		{ &Z_Construct_UFunction_UWeatherLib_widgetGetWorld, "widgetGetWorld" }, // 203940449
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeatherLib_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weather/WeatherLib.h" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeatherLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeatherLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeatherLib_Statics::ClassParams = {
		&UWeatherLib::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWeatherLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeatherLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeatherLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeatherLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeatherLib, 1227097659);
	template<> AIRSIM_API UClass* StaticClass<UWeatherLib>()
	{
		return UWeatherLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeatherLib(Z_Construct_UClass_UWeatherLib, &UWeatherLib::StaticClass, TEXT("/Script/AirSim"), TEXT("UWeatherLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeatherLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
