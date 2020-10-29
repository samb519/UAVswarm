// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FormationControl/FormationControlGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFormationControlGameModeBase() {}
// Cross Module References
	FORMATIONCONTROL_API UClass* Z_Construct_UClass_AFormationControlGameModeBase_NoRegister();
	FORMATIONCONTROL_API UClass* Z_Construct_UClass_AFormationControlGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FormationControl();
// End Cross Module References
	void AFormationControlGameModeBase::StaticRegisterNativesAFormationControlGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFormationControlGameModeBase_NoRegister()
	{
		return AFormationControlGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFormationControlGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFormationControlGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FormationControl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFormationControlGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FormationControlGameModeBase.h" },
		{ "ModuleRelativePath", "FormationControlGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFormationControlGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFormationControlGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFormationControlGameModeBase_Statics::ClassParams = {
		&AFormationControlGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFormationControlGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFormationControlGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFormationControlGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFormationControlGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFormationControlGameModeBase, 3386775970);
	template<> FORMATIONCONTROL_API UClass* StaticClass<AFormationControlGameModeBase>()
	{
		return AFormationControlGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFormationControlGameModeBase(Z_Construct_UClass_AFormationControlGameModeBase, &AFormationControlGameModeBase::StaticClass, TEXT("/Script/FormationControl"), TEXT("AFormationControlGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFormationControlGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
