// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRARRabbit/VRPlayerPawn.h"
#include "../../Source/Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPlayerPawn() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathPointData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathResult();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VRARRabbit();
	VRARRABBIT_API UClass* Z_Construct_UClass_AVRPlayerPawn();
	VRARRABBIT_API UClass* Z_Construct_UClass_AVRPlayerPawn_NoRegister();
	VRARRABBIT_API UClass* Z_Construct_UClass_AVRTeleportBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVRPlayerPawn::execIsHMDEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHMDEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRPlayerPawn::execValidateTeleportPosition)
	{
		P_GET_STRUCT(FPredictProjectilePathResult,Z_Param_HitResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ValidateTeleportPosition(Z_Param_HitResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRPlayerPawn::execConvertPathDataArray)
	{
		P_GET_TARRAY(FPredictProjectilePathPointData,Z_Param_PathDataArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->ConvertPathDataArray(Z_Param_PathDataArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRPlayerPawn::execDrawLineTrace)
	{
		P_GET_TARRAY(FVector,Z_Param_Path);
		P_GET_STRUCT(FVector,Z_Param_StartPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawLineTrace(Z_Param_Path,Z_Param_StartPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRPlayerPawn::execMoveCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRPlayerPawn::execMoveStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRPlayerPawn::execMoveTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveTriggered();
		P_NATIVE_END;
	}
	void AVRPlayerPawn::StaticRegisterNativesAVRPlayerPawn()
	{
		UClass* Class = AVRPlayerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertPathDataArray", &AVRPlayerPawn::execConvertPathDataArray },
			{ "DrawLineTrace", &AVRPlayerPawn::execDrawLineTrace },
			{ "IsHMDEnabled", &AVRPlayerPawn::execIsHMDEnabled },
			{ "MoveCompleted", &AVRPlayerPawn::execMoveCompleted },
			{ "MoveStarted", &AVRPlayerPawn::execMoveStarted },
			{ "MoveTriggered", &AVRPlayerPawn::execMoveTriggered },
			{ "ValidateTeleportPosition", &AVRPlayerPawn::execValidateTeleportPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics
	{
		struct VRPlayerPawn_eventConvertPathDataArray_Parms
		{
			TArray<FPredictProjectilePathPointData> PathDataArray;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathDataArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PathDataArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::NewProp_PathDataArray_Inner = { "PathDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPredictProjectilePathPointData, METADATA_PARAMS(0, nullptr) }; // 3118563388
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::NewProp_PathDataArray = { "PathDataArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRPlayerPawn_eventConvertPathDataArray_Parms, PathDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3118563388
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRPlayerPawn_eventConvertPathDataArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::NewProp_PathDataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::NewProp_PathDataArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayerPawn, nullptr, "ConvertPathDataArray", nullptr, nullptr, Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::VRPlayerPawn_eventConvertPathDataArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::VRPlayerPawn_eventConvertPathDataArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace_Statics
	{
		struct VRPlayerPawn_eventDrawLineTrace_Parms
		{
			TArray<FVector> Path;
			FVector StartPos;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRPlayerPawn_eventDrawLineTrace_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRPlayerPawn_eventDrawLineTrace_Parms, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace_Statics::NewProp_Path_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace_Statics::NewProp_StartPos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayerPawn, nullptr, "DrawLineTrace", nullptr, nullptr, Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace_Statics::VRPlayerPawn_eventDrawLineTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace_Statics::VRPlayerPawn_eventDrawLineTrace_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRPlayerPawn_IsHMDEnabled_Statics
	{
		struct VRPlayerPawn_eventIsHMDEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVRPlayerPawn_IsHMDEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRPlayerPawn_eventIsHMDEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRPlayerPawn_IsHMDEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRPlayerPawn_eventIsHMDEnabled_Parms), &Z_Construct_UFunction_AVRPlayerPawn_IsHMDEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRPlayerPawn_IsHMDEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRPlayerPawn_IsHMDEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayerPawn_IsHMDEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayerPawn_IsHMDEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayerPawn, nullptr, "IsHMDEnabled", nullptr, nullptr, Z_Construct_UFunction_AVRPlayerPawn_IsHMDEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_IsHMDEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRPlayerPawn_IsHMDEnabled_Statics::VRPlayerPawn_eventIsHMDEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_IsHMDEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRPlayerPawn_IsHMDEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_IsHMDEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVRPlayerPawn_IsHMDEnabled_Statics::VRPlayerPawn_eventIsHMDEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVRPlayerPawn_IsHMDEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRPlayerPawn_IsHMDEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRPlayerPawn_MoveCompleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayerPawn_MoveCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayerPawn_MoveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayerPawn, nullptr, "MoveCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_MoveCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRPlayerPawn_MoveCompleted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AVRPlayerPawn_MoveCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRPlayerPawn_MoveCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRPlayerPawn_MoveStarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayerPawn_MoveStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayerPawn_MoveStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayerPawn, nullptr, "MoveStarted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_MoveStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRPlayerPawn_MoveStarted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AVRPlayerPawn_MoveStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRPlayerPawn_MoveStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRPlayerPawn_MoveTriggered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayerPawn_MoveTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayerPawn_MoveTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayerPawn, nullptr, "MoveTriggered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_MoveTriggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRPlayerPawn_MoveTriggered_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AVRPlayerPawn_MoveTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRPlayerPawn_MoveTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition_Statics
	{
		struct VRPlayerPawn_eventValidateTeleportPosition_Parms
		{
			FPredictProjectilePathResult HitResults;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResults;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition_Statics::NewProp_HitResults = { "HitResults", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRPlayerPawn_eventValidateTeleportPosition_Parms, HitResults), Z_Construct_UScriptStruct_FPredictProjectilePathResult, METADATA_PARAMS(0, nullptr) }; // 2566489852
	void Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRPlayerPawn_eventValidateTeleportPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRPlayerPawn_eventValidateTeleportPosition_Parms), &Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition_Statics::NewProp_HitResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayerPawn, nullptr, "ValidateTeleportPosition", nullptr, nullptr, Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition_Statics::VRPlayerPawn_eventValidateTeleportPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition_Statics::VRPlayerPawn_eventValidateTeleportPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRPlayerPawn);
	UClass* Z_Construct_UClass_AVRPlayerPawn_NoRegister()
	{
		return AVRPlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_AVRPlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DummyRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DummyRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionControllerRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionControllerRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionControllerLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionControllerLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VrCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VrCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportVisualActorComponent_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TeleportVisualActorComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportVisual_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TeleportVisual;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagraLineTrace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagraLineTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagraComponentLineTrace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagraComponentLineTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectedPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TeleportLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidTeleportLocation_MetaData[];
#endif
		static void NewProp_ValidTeleportLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ValidTeleportLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRPlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_VRARRabbit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AVRPlayerPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRPlayerPawn_ConvertPathDataArray, "ConvertPathDataArray" }, // 2618842022
		{ &Z_Construct_UFunction_AVRPlayerPawn_DrawLineTrace, "DrawLineTrace" }, // 2043484787
		{ &Z_Construct_UFunction_AVRPlayerPawn_IsHMDEnabled, "IsHMDEnabled" }, // 3347979936
		{ &Z_Construct_UFunction_AVRPlayerPawn_MoveCompleted, "MoveCompleted" }, // 83913514
		{ &Z_Construct_UFunction_AVRPlayerPawn_MoveStarted, "MoveStarted" }, // 2488120603
		{ &Z_Construct_UFunction_AVRPlayerPawn_MoveTriggered, "MoveTriggered" }, // 3371547060
		{ &Z_Construct_UFunction_AVRPlayerPawn_ValidateTeleportPosition, "ValidateTeleportPosition" }, // 3528378791
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VRPlayerPawn.h" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPlayerPawn, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_DummyRoot_MetaData), Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_DummyRoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_MotionControllerRight_MetaData[] = {
		{ "Category", "Player Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//VR Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VR Components" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_MotionControllerRight = { "MotionControllerRight", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPlayerPawn, MotionControllerRight), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_MotionControllerRight_MetaData), Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_MotionControllerRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_MotionControllerLeft_MetaData[] = {
		{ "Category", "Player Controller" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_MotionControllerLeft = { "MotionControllerLeft", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPlayerPawn, MotionControllerLeft), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_MotionControllerLeft_MetaData), Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_MotionControllerLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_VrCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_VrCamera = { "VrCamera", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPlayerPawn, VrCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_VrCamera_MetaData), Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_VrCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportVisualActorComponent_MetaData[] = {
		{ "Category", "TeleportActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Player Bounds Actor\n" },
#endif
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Bounds Actor" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportVisualActorComponent = { "TeleportVisualActorComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPlayerPawn, TeleportVisualActorComponent), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportVisualActorComponent_MetaData), Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportVisualActorComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportVisual_MetaData[] = {
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportVisual = { "TeleportVisual", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPlayerPawn, TeleportVisual), Z_Construct_UClass_AVRTeleportBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportVisual_MetaData), Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportVisual_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_NiagraLineTrace_MetaData[] = {
		{ "Category", "Niagara" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Line Trace\n" },
#endif
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Line Trace" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_NiagraLineTrace = { "NiagraLineTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPlayerPawn, NiagraLineTrace), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_NiagraLineTrace_MetaData), Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_NiagraLineTrace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_NiagraComponentLineTrace_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_NiagraComponentLineTrace = { "NiagraComponentLineTrace", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPlayerPawn, NiagraComponentLineTrace), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_NiagraComponentLineTrace_MetaData), Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_NiagraComponentLineTrace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportSpeed_MetaData[] = {
		{ "Category", "Teleport Velocity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//teleport variables \n" },
#endif
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "teleport variables" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportSpeed = { "TeleportSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPlayerPawn, TeleportSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportSpeed_MetaData), Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportRadius_MetaData[] = {
		{ "Category", "Teleport Radius" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportRadius = { "TeleportRadius", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPlayerPawn, TeleportRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportRadius_MetaData), Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_ProjectedPoint_MetaData[] = {
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_ProjectedPoint = { "ProjectedPoint", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPlayerPawn, ProjectedPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_ProjectedPoint_MetaData), Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_ProjectedPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportLocation_MetaData[] = {
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportLocation = { "TeleportLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPlayerPawn, TeleportLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportLocation_MetaData), Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_ValidTeleportLocation_MetaData[] = {
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_ValidTeleportLocation_SetBit(void* Obj)
	{
		((AVRPlayerPawn*)Obj)->ValidTeleportLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_ValidTeleportLocation = { "ValidTeleportLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVRPlayerPawn), &Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_ValidTeleportLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_ValidTeleportLocation_MetaData), Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_ValidTeleportLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRPlayerPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_DummyRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_MotionControllerRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_MotionControllerLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_VrCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportVisualActorComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportVisual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_NiagraLineTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_NiagraComponentLineTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_ProjectedPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_TeleportLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_ValidTeleportLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRPlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRPlayerPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRPlayerPawn_Statics::ClassParams = {
		&AVRPlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVRPlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AVRPlayerPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AVRPlayerPawn()
	{
		if (!Z_Registration_Info_UClass_AVRPlayerPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRPlayerPawn.OuterSingleton, Z_Construct_UClass_AVRPlayerPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVRPlayerPawn.OuterSingleton;
	}
	template<> VRARRABBIT_API UClass* StaticClass<AVRPlayerPawn>()
	{
		return AVRPlayerPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRPlayerPawn);
	AVRPlayerPawn::~AVRPlayerPawn() {}
	struct Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVRPlayerPawn, AVRPlayerPawn::StaticClass, TEXT("AVRPlayerPawn"), &Z_Registration_Info_UClass_AVRPlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRPlayerPawn), 2346191309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_3234050047(TEXT("/Script/VRARRabbit"),
		Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
