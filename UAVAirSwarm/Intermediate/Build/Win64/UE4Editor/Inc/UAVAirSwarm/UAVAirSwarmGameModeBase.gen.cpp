// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UAVAirSwarm/UAVAirSwarmGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUAVAirSwarmGameModeBase() {}
// Cross Module References
	UAVAIRSWARM_API UClass* Z_Construct_UClass_AUAVAirSwarmGameModeBase_NoRegister();
	UAVAIRSWARM_API UClass* Z_Construct_UClass_AUAVAirSwarmGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UAVAirSwarm();
// End Cross Module References
	void AUAVAirSwarmGameModeBase::StaticRegisterNativesAUAVAirSwarmGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUAVAirSwarmGameModeBase_NoRegister()
	{
		return AUAVAirSwarmGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUAVAirSwarmGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUAVAirSwarmGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UAVAirSwarm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUAVAirSwarmGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UAVAirSwarmGameModeBase.h" },
		{ "ModuleRelativePath", "UAVAirSwarmGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUAVAirSwarmGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUAVAirSwarmGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUAVAirSwarmGameModeBase_Statics::ClassParams = {
		&AUAVAirSwarmGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUAVAirSwarmGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUAVAirSwarmGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUAVAirSwarmGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUAVAirSwarmGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUAVAirSwarmGameModeBase, 3963361053);
	template<> UAVAIRSWARM_API UClass* StaticClass<AUAVAirSwarmGameModeBase>()
	{
		return AUAVAirSwarmGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUAVAirSwarmGameModeBase(Z_Construct_UClass_AUAVAirSwarmGameModeBase, &AUAVAirSwarmGameModeBase::StaticClass, TEXT("/Script/UAVAirSwarm"), TEXT("AUAVAirSwarmGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUAVAirSwarmGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
