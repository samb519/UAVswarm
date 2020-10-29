// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/SimMode/LoadingScreenWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingScreenWidget() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_ULoadingScreenWidget_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ULoadingScreenWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References
	void ULoadingScreenWidget::StaticRegisterNativesULoadingScreenWidget()
	{
	}
	UClass* Z_Construct_UClass_ULoadingScreenWidget_NoRegister()
	{
		return ULoadingScreenWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULoadingScreenWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadingScreenWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimMode/LoadingScreenWidget.h" },
		{ "ModuleRelativePath", "SimMode/LoadingScreenWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadingScreenWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingScreenWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadingScreenWidget_Statics::ClassParams = {
		&ULoadingScreenWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadingScreenWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadingScreenWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadingScreenWidget, 1117948015);
	template<> AIRSIM_API UClass* StaticClass<ULoadingScreenWidget>()
	{
		return ULoadingScreenWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadingScreenWidget(Z_Construct_UClass_ULoadingScreenWidget, &ULoadingScreenWidget::StaticClass, TEXT("/Script/AirSim"), TEXT("ULoadingScreenWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingScreenWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
