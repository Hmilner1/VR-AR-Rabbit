// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRARRabbit/VrPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VRARRabbit();
	VRARRABBIT_API UClass* Z_Construct_UClass_AVrPlayerController();
	VRARRABBIT_API UClass* Z_Construct_UClass_AVrPlayerController_NoRegister();
	VRARRABBIT_API UClass* Z_Construct_UClass_AVRPlayerPawn_NoRegister();
// End Cross Module References
	void AVrPlayerController::StaticRegisterNativesAVrPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVrPlayerController);
	UClass* Z_Construct_UClass_AVrPlayerController_NoRegister()
	{
		return AVrPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AVrPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionMove_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRInputController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VRInputController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VRPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVrPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_VRARRabbit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVrPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "VrPlayerController.h" },
		{ "ModuleRelativePath", "VrPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrPlayerController_Statics::NewProp_ActionMove_MetaData[] = {
		{ "Category", "Player Inputs, Movement" },
		{ "ModuleRelativePath", "VrPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVrPlayerController_Statics::NewProp_ActionMove = { "ActionMove", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVrPlayerController, ActionMove), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVrPlayerController_Statics::NewProp_ActionMove_MetaData), Z_Construct_UClass_AVrPlayerController_Statics::NewProp_ActionMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrPlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Player Inputs, Movement" },
		{ "ModuleRelativePath", "VrPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVrPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVrPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVrPlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_AVrPlayerController_Statics::NewProp_InputMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrPlayerController_Statics::NewProp_VRInputController_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VrPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVrPlayerController_Statics::NewProp_VRInputController = { "VRInputController", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVrPlayerController, VRInputController), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVrPlayerController_Statics::NewProp_VRInputController_MetaData), Z_Construct_UClass_AVrPlayerController_Statics::NewProp_VRInputController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrPlayerController_Statics::NewProp_VRPawn_MetaData[] = {
		{ "ModuleRelativePath", "VrPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVrPlayerController_Statics::NewProp_VRPawn = { "VRPawn", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVrPlayerController, VRPawn), Z_Construct_UClass_AVRPlayerPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVrPlayerController_Statics::NewProp_VRPawn_MetaData), Z_Construct_UClass_AVrPlayerController_Statics::NewProp_VRPawn_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVrPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrPlayerController_Statics::NewProp_ActionMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrPlayerController_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrPlayerController_Statics::NewProp_VRInputController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrPlayerController_Statics::NewProp_VRPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVrPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVrPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVrPlayerController_Statics::ClassParams = {
		&AVrPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVrPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVrPlayerController_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVrPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AVrPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVrPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AVrPlayerController()
	{
		if (!Z_Registration_Info_UClass_AVrPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVrPlayerController.OuterSingleton, Z_Construct_UClass_AVrPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVrPlayerController.OuterSingleton;
	}
	template<> VRARRABBIT_API UClass* StaticClass<AVrPlayerController>()
	{
		return AVrPlayerController::StaticClass();
	}
	AVrPlayerController::AVrPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVrPlayerController);
	AVrPlayerController::~AVrPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VrPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VrPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVrPlayerController, AVrPlayerController::StaticClass, TEXT("AVrPlayerController"), &Z_Registration_Info_UClass_AVrPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVrPlayerController), 1546019286U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VrPlayerController_h_3255871705(TEXT("/Script/VRARRabbit"),
		Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VrPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VrPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
