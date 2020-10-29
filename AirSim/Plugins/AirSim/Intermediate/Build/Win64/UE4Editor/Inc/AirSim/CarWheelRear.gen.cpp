// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Vehicles/Car/CarWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarWheelRear() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_UCarWheelRear_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_UCarWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References
	void UCarWheelRear::StaticRegisterNativesUCarWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UCarWheelRear_NoRegister()
	{
		return UCarWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UCarWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCarWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCarWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Vehicles/Car/CarWheelRear.h" },
		{ "ModuleRelativePath", "Vehicles/Car/CarWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCarWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCarWheelRear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCarWheelRear_Statics::ClassParams = {
		&UCarWheelRear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCarWheelRear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCarWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCarWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCarWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCarWheelRear, 2387841049);
	template<> AIRSIM_API UClass* StaticClass<UCarWheelRear>()
	{
		return UCarWheelRear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCarWheelRear(Z_Construct_UClass_UCarWheelRear, &UCarWheelRear::StaticClass, TEXT("/Script/AirSim"), TEXT("UCarWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCarWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
