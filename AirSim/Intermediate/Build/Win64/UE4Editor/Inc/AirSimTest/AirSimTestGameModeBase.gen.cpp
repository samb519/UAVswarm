// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AirSimTest/AirSimTestGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirSimTestGameModeBase() {}
// Cross Module References
	AIRSIMTEST_API UClass* Z_Construct_UClass_AAirSimTestGameModeBase_NoRegister();
	AIRSIMTEST_API UClass* Z_Construct_UClass_AAirSimTestGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AirSimTest();
// End Cross Module References
	void AAirSimTestGameModeBase::StaticRegisterNativesAAirSimTestGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AAirSimTestGameModeBase_NoRegister()
	{
		return AAirSimTestGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAirSimTestGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAirSimTestGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSimTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirSimTestGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AirSimTestGameModeBase.h" },
		{ "ModuleRelativePath", "AirSimTestGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAirSimTestGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAirSimTestGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAirSimTestGameModeBase_Statics::ClassParams = {
		&AAirSimTestGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAirSimTestGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAirSimTestGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAirSimTestGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAirSimTestGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAirSimTestGameModeBase, 2489389060);
	template<> AIRSIMTEST_API UClass* StaticClass<AAirSimTestGameModeBase>()
	{
		return AAirSimTestGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAirSimTestGameModeBase(Z_Construct_UClass_AAirSimTestGameModeBase, &AAirSimTestGameModeBase::StaticClass, TEXT("/Script/AirSimTest"), TEXT("AAirSimTestGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAirSimTestGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
