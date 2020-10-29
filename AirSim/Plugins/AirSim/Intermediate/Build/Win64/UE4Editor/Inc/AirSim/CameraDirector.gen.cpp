// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/CameraDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraDirector() {}
// Cross Module References
	AIRSIM_API UEnum* Z_Construct_UEnum_AirSim_ECameraDirectorMode();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	AIRSIM_API UClass* Z_Construct_UClass_ACameraDirector_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ACameraDirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	AIRSIM_API UClass* Z_Construct_UClass_UManualPoseController_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_APIPCamera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	static UEnum* ECameraDirectorMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AirSim_ECameraDirectorMode, Z_Construct_UPackage__Script_AirSim(), TEXT("ECameraDirectorMode"));
		}
		return Singleton;
	}
	template<> AIRSIM_API UEnum* StaticEnum<ECameraDirectorMode>()
	{
		return ECameraDirectorMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECameraDirectorMode(ECameraDirectorMode_StaticEnum, TEXT("/Script/AirSim"), TEXT("ECameraDirectorMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AirSim_ECameraDirectorMode_Hash() { return 4108946654U; }
	UEnum* Z_Construct_UEnum_AirSim_ECameraDirectorMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AirSim();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECameraDirectorMode"), 0, Get_Z_Construct_UEnum_AirSim_ECameraDirectorMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FPV", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FPV },
				{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_GROUND_OBSERVER", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_GROUND_OBSERVER },
				{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FLY_WITH_ME", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FLY_WITH_ME },
				{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_MANUAL", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_MANUAL },
				{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_SPRINGARM_CHASE", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_SPRINGARM_CHASE },
				{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_BACKUP", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_BACKUP },
				{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_NODISPLAY", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_NODISPLAY },
				{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FRONT", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FRONT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CAMERA_DIRECTOR_MODE_BACKUP.DisplayName", "Backup" },
				{ "CAMERA_DIRECTOR_MODE_BACKUP.Name", "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_BACKUP" },
				{ "CAMERA_DIRECTOR_MODE_FLY_WITH_ME.DisplayName", "FlyWithMe" },
				{ "CAMERA_DIRECTOR_MODE_FLY_WITH_ME.Name", "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FLY_WITH_ME" },
				{ "CAMERA_DIRECTOR_MODE_FPV.DisplayName", "FPV" },
				{ "CAMERA_DIRECTOR_MODE_FPV.Name", "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FPV" },
				{ "CAMERA_DIRECTOR_MODE_FRONT.DisplayName", "Front" },
				{ "CAMERA_DIRECTOR_MODE_FRONT.Name", "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FRONT" },
				{ "CAMERA_DIRECTOR_MODE_GROUND_OBSERVER.DisplayName", "GroundObserver" },
				{ "CAMERA_DIRECTOR_MODE_GROUND_OBSERVER.Name", "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_GROUND_OBSERVER" },
				{ "CAMERA_DIRECTOR_MODE_MANUAL.DisplayName", "Manual" },
				{ "CAMERA_DIRECTOR_MODE_MANUAL.Name", "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_MANUAL" },
				{ "CAMERA_DIRECTOR_MODE_NODISPLAY.DisplayName", "No Display" },
				{ "CAMERA_DIRECTOR_MODE_NODISPLAY.Name", "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_NODISPLAY" },
				{ "CAMERA_DIRECTOR_MODE_SPRINGARM_CHASE.DisplayName", "SpringArmChase" },
				{ "CAMERA_DIRECTOR_MODE_SPRINGARM_CHASE.Name", "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_SPRINGARM_CHASE" },
				{ "ModuleRelativePath", "CameraDirector.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AirSim,
				nullptr,
				"ECameraDirectorMode",
				"ECameraDirectorMode",
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
	DEFINE_FUNCTION(ACameraDirector::execsetMode)
	{
		P_GET_ENUM(ECameraDirectorMode,Z_Param_mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setMode(ECameraDirectorMode(Z_Param_mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACameraDirector::execgetMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECameraDirectorMode*)Z_Param__Result=P_THIS->getMode();
		P_NATIVE_END;
	}
	void ACameraDirector::StaticRegisterNativesACameraDirector()
	{
		UClass* Class = ACameraDirector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getMode", &ACameraDirector::execgetMode },
			{ "setMode", &ACameraDirector::execsetMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACameraDirector_getMode_Statics
	{
		struct CameraDirector_eventgetMode_Parms
		{
			ECameraDirectorMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACameraDirector_getMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraDirector_eventgetMode_Parms, ReturnValue), Z_Construct_UEnum_AirSim_ECameraDirectorMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACameraDirector_getMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraDirector_getMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraDirector_getMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraDirector_getMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACameraDirector_getMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modes" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraDirector_getMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraDirector, nullptr, "getMode", nullptr, nullptr, sizeof(CameraDirector_eventgetMode_Parms), Z_Construct_UFunction_ACameraDirector_getMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraDirector_getMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACameraDirector_getMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraDirector_getMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACameraDirector_getMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACameraDirector_getMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACameraDirector_setMode_Statics
	{
		struct CameraDirector_eventsetMode_Parms
		{
			ECameraDirectorMode mode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACameraDirector_setMode_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraDirector_eventsetMode_Parms, mode), Z_Construct_UEnum_AirSim_ECameraDirectorMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACameraDirector_setMode_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraDirector_setMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraDirector_setMode_Statics::NewProp_mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraDirector_setMode_Statics::NewProp_mode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACameraDirector_setMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modes" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraDirector_setMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraDirector, nullptr, "setMode", nullptr, nullptr, sizeof(CameraDirector_eventsetMode_Parms), Z_Construct_UFunction_ACameraDirector_setMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraDirector_setMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACameraDirector_setMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraDirector_setMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACameraDirector_setMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACameraDirector_setMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACameraDirector_NoRegister()
	{
		return ACameraDirector::StaticClass();
	}
	struct Z_Construct_UClass_ACameraDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_manual_pose_controller__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_manual_pose_controller_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExternalCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACameraDirector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACameraDirector_getMode, "getMode" }, // 263718363
		{ &Z_Construct_UFunction_ACameraDirector_setMode, "setMode" }, // 1002063304
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraDirector.h" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::NewProp_manual_pose_controller__MetaData[] = {
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraDirector_Statics::NewProp_manual_pose_controller_ = { "manual_pose_controller_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraDirector, manual_pose_controller_), Z_Construct_UClass_UManualPoseController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::NewProp_manual_pose_controller__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::NewProp_manual_pose_controller__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::NewProp_ExternalCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraDirector_Statics::NewProp_ExternalCamera = { "ExternalCamera", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraDirector, ExternalCamera), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::NewProp_ExternalCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::NewProp_ExternalCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Spring arm that will offset the camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CameraDirector.h" },
		{ "ToolTip", "Spring arm that will offset the camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraDirector_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraDirector, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::NewProp_SpringArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraDirector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraDirector_Statics::NewProp_manual_pose_controller_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraDirector_Statics::NewProp_ExternalCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraDirector_Statics::NewProp_SpringArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACameraDirector_Statics::ClassParams = {
		&ACameraDirector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACameraDirector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACameraDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraDirector, 3097349005);
	template<> AIRSIM_API UClass* StaticClass<ACameraDirector>()
	{
		return ACameraDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraDirector(Z_Construct_UClass_ACameraDirector, &ACameraDirector::StaticClass, TEXT("/Script/AirSim"), TEXT("ACameraDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
