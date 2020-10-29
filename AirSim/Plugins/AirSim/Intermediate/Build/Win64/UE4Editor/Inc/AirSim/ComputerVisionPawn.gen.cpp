// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Vehicles/ComputerVision/ComputerVisionPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputerVisionPawn() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_AComputerVisionPawn_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_AComputerVisionPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	AIRSIM_API UClass* Z_Construct_UClass_UManualPoseController_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_APIPCamera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void AComputerVisionPawn::StaticRegisterNativesAComputerVisionPawn()
	{
	}
	UClass* Z_Construct_UClass_AComputerVisionPawn_NoRegister()
	{
		return AComputerVisionPawn::StaticClass();
	}
	struct Z_Construct_UClass_AComputerVisionPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_manual_pose_controller__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_manual_pose_controller_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_back_center__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_back_center_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_bottom_center__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_bottom_center_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_right__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_right_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_left__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_left_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_center__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_center_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_back_center_base__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_back_center_base_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_bottom_center_base__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_bottom_center_base_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_right_base__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_right_base_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_left_base__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_left_base_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_center_base__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_center_base_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pip_camera_class__MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_pip_camera_class_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComputerVisionPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComputerVisionPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_manual_pose_controller__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_manual_pose_controller_ = { "manual_pose_controller_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComputerVisionPawn, manual_pose_controller_), Z_Construct_UClass_UManualPoseController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_manual_pose_controller__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_manual_pose_controller__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_back_center__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_back_center_ = { "camera_back_center_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_back_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_back_center__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_back_center__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_bottom_center__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_bottom_center_ = { "camera_bottom_center_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_bottom_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_bottom_center__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_bottom_center__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_right__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_right_ = { "camera_front_right_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_front_right_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_right__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_right__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_left__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_left_ = { "camera_front_left_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_front_left_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_left__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_left__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_center__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_center_ = { "camera_front_center_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_front_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_center__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_center__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_back_center_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_back_center_base_ = { "camera_back_center_base_", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_back_center_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_back_center_base__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_back_center_base__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_bottom_center_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_bottom_center_base_ = { "camera_bottom_center_base_", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_bottom_center_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_bottom_center_base__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_bottom_center_base__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_right_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_right_base_ = { "camera_front_right_base_", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_front_right_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_right_base__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_right_base__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_left_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_left_base_ = { "camera_front_left_base_", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_front_left_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_left_base__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_left_base__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_center_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_center_base_ = { "camera_front_center_base_", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_front_center_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_center_base__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_center_base__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_pip_camera_class__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_pip_camera_class_ = { "pip_camera_class_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComputerVisionPawn, pip_camera_class_), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_pip_camera_class__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_pip_camera_class__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AComputerVisionPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_manual_pose_controller_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_back_center_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_bottom_center_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_right_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_left_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_center_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_back_center_base_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_bottom_center_base_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_right_base_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_left_base_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_center_base_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_pip_camera_class_,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComputerVisionPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComputerVisionPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComputerVisionPawn_Statics::ClassParams = {
		&AComputerVisionPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AComputerVisionPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AComputerVisionPawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AComputerVisionPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComputerVisionPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComputerVisionPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComputerVisionPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComputerVisionPawn, 1214479041);
	template<> AIRSIM_API UClass* StaticClass<AComputerVisionPawn>()
	{
		return AComputerVisionPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComputerVisionPawn(Z_Construct_UClass_AComputerVisionPawn, &AComputerVisionPawn::StaticClass, TEXT("/Script/AirSim"), TEXT("AComputerVisionPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComputerVisionPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
