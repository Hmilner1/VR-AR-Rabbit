// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRARRabbit/VRTeleportBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRTeleportBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VRARRabbit();
	VRARRABBIT_API UClass* Z_Construct_UClass_AVRTeleportBase();
	VRARRABBIT_API UClass* Z_Construct_UClass_AVRTeleportBase_NoRegister();
// End Cross Module References
	void AVRTeleportBase::StaticRegisterNativesAVRTeleportBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRTeleportBase);
	UClass* Z_Construct_UClass_AVRTeleportBase_NoRegister()
	{
		return AVRTeleportBase::StaticClass();
	}
	struct Z_Construct_UClass_AVRTeleportBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagraPlayerBounds_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagraPlayerBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagraComponentPlayerBounds_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagraComponentPlayerBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagraPlayerRing_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagraPlayerRing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagraComponentPlayerRing_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagraComponentPlayerRing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRTeleportBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VRARRabbit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRTeleportBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRTeleportBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VRTeleportBase.h" },
		{ "ModuleRelativePath", "VRTeleportBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraPlayerBounds_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "VRTeleportBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraPlayerBounds = { "NiagraPlayerBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRTeleportBase, NiagraPlayerBounds), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraPlayerBounds_MetaData), Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraPlayerBounds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraComponentPlayerBounds_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRTeleportBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraComponentPlayerBounds = { "NiagraComponentPlayerBounds", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRTeleportBase, NiagraComponentPlayerBounds), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraComponentPlayerBounds_MetaData), Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraComponentPlayerBounds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraPlayerRing_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "VRTeleportBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraPlayerRing = { "NiagraPlayerRing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRTeleportBase, NiagraPlayerRing), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraPlayerRing_MetaData), Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraPlayerRing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraComponentPlayerRing_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRTeleportBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraComponentPlayerRing = { "NiagraComponentPlayerRing", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRTeleportBase, NiagraComponentPlayerRing), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraComponentPlayerRing_MetaData), Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraComponentPlayerRing_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRTeleportBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraPlayerBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraComponentPlayerBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraPlayerRing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRTeleportBase_Statics::NewProp_NiagraComponentPlayerRing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRTeleportBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRTeleportBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRTeleportBase_Statics::ClassParams = {
		&AVRTeleportBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVRTeleportBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVRTeleportBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRTeleportBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AVRTeleportBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRTeleportBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AVRTeleportBase()
	{
		if (!Z_Registration_Info_UClass_AVRTeleportBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRTeleportBase.OuterSingleton, Z_Construct_UClass_AVRTeleportBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVRTeleportBase.OuterSingleton;
	}
	template<> VRARRABBIT_API UClass* StaticClass<AVRTeleportBase>()
	{
		return AVRTeleportBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRTeleportBase);
	AVRTeleportBase::~AVRTeleportBase() {}
	struct Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRTeleportBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRTeleportBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVRTeleportBase, AVRTeleportBase::StaticClass, TEXT("AVRTeleportBase"), &Z_Registration_Info_UClass_AVRTeleportBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRTeleportBase), 4019930629U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRTeleportBase_h_3497608483(TEXT("/Script/VRARRabbit"),
		Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRTeleportBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRTeleportBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
