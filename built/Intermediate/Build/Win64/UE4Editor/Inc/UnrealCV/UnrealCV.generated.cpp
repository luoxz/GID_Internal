// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Public/UnrealCVPrivate.h"
#include "GeneratedCppIncludes.h"
#include "UnrealCV.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1UnrealCV() {}
	void UGTCaptureComponent::StaticRegisterNativesUGTCaptureComponent()
	{
	}
	IMPLEMENT_CLASS(UGTCaptureComponent, 3767910216);
	void UNetworkManager::StaticRegisterNativesUNetworkManager()
	{
	}
	IMPLEMENT_CLASS(UNetworkManager, 3437849553);
	void AUE4CVGameMode::StaticRegisterNativesAUE4CVGameMode()
	{
	}
	IMPLEMENT_CLASS(AUE4CVGameMode, 937460000);
	void AUE4CVPawn::StaticRegisterNativesAUE4CVPawn()
	{
	}
	IMPLEMENT_CLASS(AUE4CVPawn, 3298746562);
	void AUE4CVCharacter::StaticRegisterNativesAUE4CVCharacter()
	{
	}
	IMPLEMENT_CLASS(AUE4CVCharacter, 2679372311);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API class UClass* Z_Construct_UClass_ADefaultPawn();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();

	UNREALCV_API class UClass* Z_Construct_UClass_UGTCaptureComponent_NoRegister();
	UNREALCV_API class UClass* Z_Construct_UClass_UGTCaptureComponent();
	UNREALCV_API class UClass* Z_Construct_UClass_UNetworkManager_NoRegister();
	UNREALCV_API class UClass* Z_Construct_UClass_UNetworkManager();
	UNREALCV_API class UClass* Z_Construct_UClass_AUE4CVGameMode_NoRegister();
	UNREALCV_API class UClass* Z_Construct_UClass_AUE4CVGameMode();
	UNREALCV_API class UClass* Z_Construct_UClass_AUE4CVPawn_NoRegister();
	UNREALCV_API class UClass* Z_Construct_UClass_AUE4CVPawn();
	UNREALCV_API class UClass* Z_Construct_UClass_AUE4CVCharacter_NoRegister();
	UNREALCV_API class UClass* Z_Construct_UClass_AUE4CVCharacter();
	UNREALCV_API class UPackage* Z_Construct_UPackage__Script_UnrealCV();
	UClass* Z_Construct_UClass_UGTCaptureComponent_NoRegister()
	{
		return UGTCaptureComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UGTCaptureComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_UnrealCV();
			OuterClass = UGTCaptureComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GTCaptureComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/GTCaptureComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Use USceneCaptureComponent2D to export information from the scene.\nThis class needs to be tickable to update the rotation of the USceneCaptureComponent2D"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGTCaptureComponent(Z_Construct_UClass_UGTCaptureComponent, &UGTCaptureComponent::StaticClass, TEXT("UGTCaptureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTCaptureComponent);
	UClass* Z_Construct_UClass_UNetworkManager_NoRegister()
	{
		return UNetworkManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UNetworkManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_UnrealCV();
			OuterClass = UNetworkManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TcpServer.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TcpServer.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Server to send and receive message"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetworkManager(Z_Construct_UClass_UNetworkManager, &UNetworkManager::StaticClass, TEXT("UNetworkManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkManager);
	UClass* Z_Construct_UClass_AUE4CVGameMode_NoRegister()
	{
		return AUE4CVGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AUE4CVGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage__Script_UnrealCV();
			OuterClass = AUE4CVGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UE4CVGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/UE4CVGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4CVGameMode(Z_Construct_UClass_AUE4CVGameMode, &AUE4CVGameMode::StaticClass, TEXT("AUE4CVGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4CVGameMode);
	UClass* Z_Construct_UClass_AUE4CVPawn_NoRegister()
	{
		return AUE4CVPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AUE4CVPawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ADefaultPawn();
			Z_Construct_UPackage__Script_UnrealCV();
			OuterClass = AUE4CVPawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UE4CVGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/UE4CVGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("UE4CVPawn can move freely in the 3D space"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4CVPawn(Z_Construct_UClass_AUE4CVPawn, &AUE4CVPawn::StaticClass, TEXT("AUE4CVPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4CVPawn);
	UClass* Z_Construct_UClass_AUE4CVCharacter_NoRegister()
	{
		return AUE4CVCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AUE4CVCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_UnrealCV();
			OuterClass = AUE4CVCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UE4CVGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/UE4CVGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("UE4CVCharacter acts like a walking human"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4CVCharacter(Z_Construct_UClass_AUE4CVCharacter, &AUE4CVCharacter::StaticClass, TEXT("AUE4CVCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4CVCharacter);
	UPackage* Z_Construct_UPackage__Script_UnrealCV()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/UnrealCV")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x1CFCE067;
			Guid.B = 0xF433BFCD;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
