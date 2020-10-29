// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/AirSimGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirSimGameMode() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_AAirSimGameMode_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_AAirSimGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References
	void AAirSimGameMode::StaticRegisterNativesAAirSimGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAirSimGameMode_NoRegister()
	{
		return AAirSimGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAirSimGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAirSimGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirSimGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AirSimGameMode.h" },
		{ "ModuleRelativePath", "AirSimGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAirSimGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAirSimGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAirSimGameMode_Statics::ClassParams = {
		&AAirSimGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAirSimGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAirSimGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAirSimGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAirSimGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAirSimGameMode, 3020474049);
	template<> AIRSIM_API UClass* StaticClass<AAirSimGameMode>()
	{
		return AAirSimGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAirSimGameMode(Z_Construct_UClass_AAirSimGameMode, &AAirSimGameMode::StaticClass, TEXT("/Script/AirSim"), TEXT("AAirSimGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAirSimGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
