// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRPlayerPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPredictProjectilePathPointData;
struct FPredictProjectilePathResult;
#ifdef VRARRABBIT_VRPlayerPawn_generated_h
#error "VRPlayerPawn.generated.h already included, missing '#pragma once' in VRPlayerPawn.h"
#endif
#define VRARRABBIT_VRPlayerPawn_generated_h

#define FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_83_SPARSE_DATA
#define FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_83_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_83_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsHMDEnabled); \
	DECLARE_FUNCTION(execValidateTeleportPosition); \
	DECLARE_FUNCTION(execConvertPathDataArray); \
	DECLARE_FUNCTION(execDrawLineTrace); \
	DECLARE_FUNCTION(execMoveCompleted); \
	DECLARE_FUNCTION(execMoveStarted); \
	DECLARE_FUNCTION(execMoveTriggered);


#define FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_83_ACCESSORS
#define FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRPlayerPawn(); \
	friend struct Z_Construct_UClass_AVRPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(AVRPlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRARRabbit"), NO_API) \
	DECLARE_SERIALIZER(AVRPlayerPawn)


#define FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_83_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRPlayerPawn(AVRPlayerPawn&&); \
	NO_API AVRPlayerPawn(const AVRPlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRPlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRPlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVRPlayerPawn) \
	NO_API virtual ~AVRPlayerPawn();


#define FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_13_PROLOG
#define FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_83_SPARSE_DATA \
	FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_83_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_83_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_83_ACCESSORS \
	FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_83_INCLASS_NO_PURE_DECLS \
	FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRARRABBIT_API UClass* StaticClass<class AVRPlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Masters_Project_2_Unreal_AR_Game_Rabbit_Game_VRARRabbit_Source_VRARRabbit_VRPlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
