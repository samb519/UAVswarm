// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Vehicles/Car/CarPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarPawn() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_ACarPawn_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ACarPawn();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	AIRSIM_API UClass* Z_Construct_UClass_APIPCamera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ACarPawn::StaticRegisterNativesACarPawn()
	{
	}
	UClass* Z_Construct_UClass_ACarPawn_NoRegister()
	{
		return ACarPawn::StaticClass();
	}
	struct Z_Construct_UClass_ACarPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_back_center__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_back_center_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_driver__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_driver_;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_driver_base__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_driver_base_;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACarPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Vehicles/Car/CarPawn.h" },
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_back_center__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_back_center_ = { "camera_back_center_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPawn, camera_back_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_back_center__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_back_center__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_driver__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_driver_ = { "camera_driver_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPawn, camera_driver_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_driver__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_driver__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_right__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_right_ = { "camera_front_right_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPawn, camera_front_right_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_right__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_right__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_left__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_left_ = { "camera_front_left_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPawn, camera_front_left_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_left__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_left__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_center__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_center_ = { "camera_front_center_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPawn, camera_front_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_center__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_center__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_back_center_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_back_center_base_ = { "camera_back_center_base_", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPawn, camera_back_center_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_back_center_base__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_back_center_base__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_driver_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_driver_base_ = { "camera_driver_base_", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPawn, camera_driver_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_driver_base__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_driver_base__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_right_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_right_base_ = { "camera_front_right_base_", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPawn, camera_front_right_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_right_base__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_right_base__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_left_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_left_base_ = { "camera_front_left_base_", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPawn, camera_front_left_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_left_base__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_left_base__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_center_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_center_base_ = { "camera_front_center_base_", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPawn, camera_front_center_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_center_base__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_center_base__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACarPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_back_center_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_driver_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_right_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_left_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_center_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_back_center_base_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_driver_base_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_right_base_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_left_base_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_center_base_,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACarPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACarPawn_Statics::ClassParams = {
		&ACarPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACarPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACarPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACarPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACarPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACarPawn, 652269285);
	template<> AIRSIM_API UClass* StaticClass<ACarPawn>()
	{
		return ACarPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACarPawn(Z_Construct_UClass_ACarPawn, &ACarPawn::StaticClass, TEXT("/Script/AirSim"), TEXT("ACarPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
