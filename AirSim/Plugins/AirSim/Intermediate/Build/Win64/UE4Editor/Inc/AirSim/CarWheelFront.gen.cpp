// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Vehicles/Car/CarWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarWheelFront() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_UCarWheelFront_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_UCarWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References
	void UCarWheelFront::StaticRegisterNativesUCarWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UCarWheelFront_NoRegister()
	{
		return UCarWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UCarWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCarWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCarWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Vehicles/Car/CarWheelFront.h" },
		{ "ModuleRelativePath", "Vehicles/Car/CarWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCarWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCarWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCarWheelFront_Statics::ClassParams = {
		&UCarWheelFront::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCarWheelFront_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCarWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCarWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCarWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCarWheelFront, 3313588679);
	template<> AIRSIM_API UClass* StaticClass<UCarWheelFront>()
	{
		return UCarWheelFront::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCarWheelFront(Z_Construct_UClass_UCarWheelFront, &UCarWheelFront::StaticClass, TEXT("/Script/AirSim"), TEXT("UCarWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCarWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
