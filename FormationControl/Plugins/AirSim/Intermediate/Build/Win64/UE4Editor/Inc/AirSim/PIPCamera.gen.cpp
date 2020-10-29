// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/PIPCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePIPCamera() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_APIPCamera_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_APIPCamera();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
// End Cross Module References
	void APIPCamera::StaticRegisterNativesAPIPCamera()
	{
	}
	UClass* Z_Construct_UClass_APIPCamera_NoRegister()
	{
		return APIPCamera::StaticClass();
	}
	struct Z_Construct_UClass_APIPCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noise_material_static__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_noise_material_static_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noise_materials__MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_noise_materials_;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_noise_materials__Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_render_targets__MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_render_targets_;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_render_targets__Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_captures__MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_captures_;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_captures__Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APIPCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APIPCamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "PIPCamera.h" },
		{ "ModuleRelativePath", "PIPCamera.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APIPCamera_Statics::NewProp_noise_material_static__MetaData[] = {
		{ "ModuleRelativePath", "PIPCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_noise_material_static_ = { "noise_material_static_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APIPCamera, noise_material_static_), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APIPCamera_Statics::NewProp_noise_material_static__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APIPCamera_Statics::NewProp_noise_material_static__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APIPCamera_Statics::NewProp_noise_materials__MetaData[] = {
		{ "Comment", "//TMap<int, UMaterialInstanceDynamic*> noise_materials_;\n//below is needed because TMap doesn't work with UPROPERTY, but we do have -ve index\n" },
		{ "ModuleRelativePath", "PIPCamera.h" },
		{ "ToolTip", "TMap<int, UMaterialInstanceDynamic*> noise_materials_;\nbelow is needed because TMap doesn't work with UPROPERTY, but we do have -ve index" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_noise_materials_ = { "noise_materials_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APIPCamera, noise_materials_), METADATA_PARAMS(Z_Construct_UClass_APIPCamera_Statics::NewProp_noise_materials__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APIPCamera_Statics::NewProp_noise_materials__MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_noise_materials__Inner = { "noise_materials_", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APIPCamera_Statics::NewProp_camera__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PIPCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_camera_ = { "camera_", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APIPCamera, camera_), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APIPCamera_Statics::NewProp_camera__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APIPCamera_Statics::NewProp_camera__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APIPCamera_Statics::NewProp_render_targets__MetaData[] = {
		{ "ModuleRelativePath", "PIPCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_render_targets_ = { "render_targets_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APIPCamera, render_targets_), METADATA_PARAMS(Z_Construct_UClass_APIPCamera_Statics::NewProp_render_targets__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APIPCamera_Statics::NewProp_render_targets__MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_render_targets__Inner = { "render_targets_", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APIPCamera_Statics::NewProp_captures__MetaData[] = {
		{ "Comment", "//members\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PIPCamera.h" },
		{ "ToolTip", "members" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_captures_ = { "captures_", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APIPCamera, captures_), METADATA_PARAMS(Z_Construct_UClass_APIPCamera_Statics::NewProp_captures__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APIPCamera_Statics::NewProp_captures__MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_captures__Inner = { "captures_", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APIPCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_noise_material_static_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_noise_materials_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_noise_materials__Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_camera_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_render_targets_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_render_targets__Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_captures_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_captures__Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APIPCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APIPCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APIPCamera_Statics::ClassParams = {
		&APIPCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APIPCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APIPCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APIPCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APIPCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APIPCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APIPCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APIPCamera, 1736826345);
	template<> AIRSIM_API UClass* StaticClass<APIPCamera>()
	{
		return APIPCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APIPCamera(Z_Construct_UClass_APIPCamera, &APIPCamera::StaticClass, TEXT("/Script/AirSim"), TEXT("APIPCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APIPCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
