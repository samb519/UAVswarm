// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/SimMode/SimModeWorldBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimModeWorldBase() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeWorldBase_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeWorldBase();
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeBase();
	UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References
	void ASimModeWorldBase::StaticRegisterNativesASimModeWorldBase()
	{
	}
	UClass* Z_Construct_UClass_ASimModeWorldBase_NoRegister()
	{
		return ASimModeWorldBase::StaticClass();
	}
	struct Z_Construct_UClass_ASimModeWorldBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASimModeWorldBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASimModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimModeWorldBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimMode/SimModeWorldBase.h" },
		{ "ModuleRelativePath", "SimMode/SimModeWorldBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASimModeWorldBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimModeWorldBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASimModeWorldBase_Statics::ClassParams = {
		&ASimModeWorldBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASimModeWorldBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeWorldBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASimModeWorldBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASimModeWorldBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASimModeWorldBase, 3221872825);
	template<> AIRSIM_API UClass* StaticClass<ASimModeWorldBase>()
	{
		return ASimModeWorldBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASimModeWorldBase(Z_Construct_UClass_ASimModeWorldBase, &ASimModeWorldBase::StaticClass, TEXT("/Script/AirSim"), TEXT("ASimModeWorldBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimModeWorldBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
