// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/TextureShuffleActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureShuffleActor() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_ATextureShuffleActor_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ATextureShuffleActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATextureShuffleActor::execSwapTexture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_tex_id);
		P_GET_PROPERTY(FIntProperty,Z_Param_component_id);
		P_GET_PROPERTY(FIntProperty,Z_Param_material_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapTexture_Implementation(Z_Param_tex_id,Z_Param_component_id,Z_Param_material_id);
		P_NATIVE_END;
	}
	static FName NAME_ATextureShuffleActor_SwapTexture = FName(TEXT("SwapTexture"));
	void ATextureShuffleActor::SwapTexture(int32 tex_id, int32 component_id, int32 material_id)
	{
		TextureShuffleActor_eventSwapTexture_Parms Parms;
		Parms.tex_id=tex_id;
		Parms.component_id=component_id;
		Parms.material_id=material_id;
		ProcessEvent(FindFunctionChecked(NAME_ATextureShuffleActor_SwapTexture),&Parms);
	}
	void ATextureShuffleActor::StaticRegisterNativesATextureShuffleActor()
	{
		UClass* Class = ATextureShuffleActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SwapTexture", &ATextureShuffleActor::execSwapTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_material_id;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_component_id;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_tex_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::NewProp_material_id = { "material_id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextureShuffleActor_eventSwapTexture_Parms, material_id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::NewProp_component_id = { "component_id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextureShuffleActor_eventSwapTexture_Parms, component_id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::NewProp_tex_id = { "tex_id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextureShuffleActor_eventSwapTexture_Parms, tex_id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::NewProp_material_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::NewProp_component_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::NewProp_tex_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TextureShuffleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATextureShuffleActor, nullptr, "SwapTexture", nullptr, nullptr, sizeof(TextureShuffleActor_eventSwapTexture_Parms), Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATextureShuffleActor_SwapTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATextureShuffleActor_NoRegister()
	{
		return ATextureShuffleActor::StaticClass();
	}
	struct Z_Construct_UClass_ATextureShuffleActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterialInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DynamicMaterialInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterialInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwappableTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SwappableTextures;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwappableTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATextureShuffleActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATextureShuffleActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATextureShuffleActor_SwapTexture, "SwapTexture" }, // 1104216954
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATextureShuffleActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "TextureShuffleActor.h" },
		{ "ModuleRelativePath", "TextureShuffleActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_DynamicMaterialInstances_MetaData[] = {
		{ "ModuleRelativePath", "TextureShuffleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_DynamicMaterialInstances = { "DynamicMaterialInstances", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATextureShuffleActor, DynamicMaterialInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_DynamicMaterialInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_DynamicMaterialInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_DynamicMaterialInstances_Inner = { "DynamicMaterialInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_SwappableTextures_MetaData[] = {
		{ "Category", "TextureShuffle" },
		{ "ModuleRelativePath", "TextureShuffleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_SwappableTextures = { "SwappableTextures", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATextureShuffleActor, SwappableTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_SwappableTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_SwappableTextures_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_SwappableTextures_Inner = { "SwappableTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_DynamicMaterial_MetaData[] = {
		{ "Category", "TextureShuffle" },
		{ "ModuleRelativePath", "TextureShuffleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_DynamicMaterial = { "DynamicMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATextureShuffleActor, DynamicMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_DynamicMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_DynamicMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATextureShuffleActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_DynamicMaterialInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_DynamicMaterialInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_SwappableTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_SwappableTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_DynamicMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATextureShuffleActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATextureShuffleActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATextureShuffleActor_Statics::ClassParams = {
		&ATextureShuffleActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATextureShuffleActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATextureShuffleActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATextureShuffleActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATextureShuffleActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATextureShuffleActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATextureShuffleActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATextureShuffleActor, 3664755758);
	template<> AIRSIM_API UClass* StaticClass<ATextureShuffleActor>()
	{
		return ATextureShuffleActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATextureShuffleActor(Z_Construct_UClass_ATextureShuffleActor, &ATextureShuffleActor::StaticClass, TEXT("/Script/AirSim"), TEXT("ATextureShuffleActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATextureShuffleActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
