// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Vehicles/Multirotor/FlyingPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlyingPawn() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_AFlyingPawn_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_AFlyingPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_APIPCamera_NoRegister();
// End Cross Module References
	void AFlyingPawn::StaticRegisterNativesAFlyingPawn()
	{
	}
	UClass* Z_Construct_UClass_AFlyingPawn_NoRegister()
	{
		return AFlyingPawn::StaticClass();
	}
	struct Z_Construct_UClass_AFlyingPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotating_movements__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rotating_movements_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_bottom_center__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_bottom_center_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_back_center__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_back_center_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_center__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_center_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_right__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_right_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_left__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_left_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotatorFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotatorFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlyingPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Vehicles/Multirotor/FlyingPawn.h" },
		{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingPawn_Statics::NewProp_rotating_movements__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_rotating_movements_ = { "rotating_movements_", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(rotating_movements_, AFlyingPawn), STRUCT_OFFSET(AFlyingPawn, rotating_movements_), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlyingPawn_Statics::NewProp_rotating_movements__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::NewProp_rotating_movements__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_bottom_center__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_bottom_center_ = { "camera_bottom_center_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlyingPawn, camera_bottom_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_bottom_center__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_bottom_center__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_back_center__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_back_center_ = { "camera_back_center_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlyingPawn, camera_back_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_back_center__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_back_center__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_center__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_center_ = { "camera_front_center_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlyingPawn, camera_front_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_center__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_center__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_right__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_right_ = { "camera_front_right_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlyingPawn, camera_front_right_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_right__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_right__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_left__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_left_ = { "camera_front_left_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlyingPawn, camera_front_left_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_left__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_left__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingPawn_Statics::NewProp_RotatorFactor_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_RotatorFactor = { "RotatorFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlyingPawn, RotatorFactor), METADATA_PARAMS(Z_Construct_UClass_AFlyingPawn_Statics::NewProp_RotatorFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::NewProp_RotatorFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlyingPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_rotating_movements_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_bottom_center_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_back_center_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_center_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_right_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_left_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_RotatorFactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlyingPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlyingPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlyingPawn_Statics::ClassParams = {
		&AFlyingPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFlyingPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlyingPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlyingPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlyingPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlyingPawn, 4278523166);
	template<> AIRSIM_API UClass* StaticClass<AFlyingPawn>()
	{
		return AFlyingPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlyingPawn(Z_Construct_UClass_AFlyingPawn, &AFlyingPawn::StaticClass, TEXT("/Script/AirSim"), TEXT("AFlyingPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlyingPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
