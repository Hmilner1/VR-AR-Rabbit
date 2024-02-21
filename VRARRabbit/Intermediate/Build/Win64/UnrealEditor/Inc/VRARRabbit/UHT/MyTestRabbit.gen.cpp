// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRARRabbit/MyTestRabbit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestRabbit() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VRARRabbit();
	VRARRABBIT_API UClass* Z_Construct_UClass_AMyTestRabbit();
	VRARRABBIT_API UClass* Z_Construct_UClass_AMyTestRabbit_NoRegister();
// End Cross Module References
	void AMyTestRabbit::StaticRegisterNativesAMyTestRabbit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTestRabbit);
	UClass* Z_Construct_UClass_AMyTestRabbit_NoRegister()
	{
		return AMyTestRabbit::StaticClass();
	}
	struct Z_Construct_UClass_AMyTestRabbit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTestRabbit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VRARRabbit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestRabbit_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestRabbit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyTestRabbit.h" },
		{ "ModuleRelativePath", "MyTestRabbit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTestRabbit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestRabbit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTestRabbit_Statics::ClassParams = {
		&AMyTestRabbit::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestRabbit_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTestRabbit_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyTestRabbit()
	{
		if (!Z_Registration_Info_UClass_AMyTestRabbit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTestRabbit.OuterSingleton, Z_Construct_UClass_AMyTestRabbit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyTestRabbit.OuterSingleton;
	}
	template<> VRARRABBIT_API UClass* StaticClass<AMyTestRabbit>()
	{
		return AMyTestRabbit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestRabbit);
	AMyTestRabbit::~AMyTestRabbit() {}
	struct Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_MyTestRabbit_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_MyTestRabbit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyTestRabbit, AMyTestRabbit::StaticClass, TEXT("AMyTestRabbit"), &Z_Registration_Info_UClass_AMyTestRabbit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTestRabbit), 1317569391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_MyTestRabbit_h_2433299911(TEXT("/Script/VRARRabbit"),
		Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_MyTestRabbit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_MyTestRabbit_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
