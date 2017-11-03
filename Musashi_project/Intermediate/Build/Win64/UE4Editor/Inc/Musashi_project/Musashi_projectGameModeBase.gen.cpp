// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Musashi_projectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMusashi_projectGameModeBase() {}
// Cross Module References
	MUSASHI_PROJECT_API UClass* Z_Construct_UClass_AMusashi_projectGameModeBase_NoRegister();
	MUSASHI_PROJECT_API UClass* Z_Construct_UClass_AMusashi_projectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Musashi_project();
// End Cross Module References
	void AMusashi_projectGameModeBase::StaticRegisterNativesAMusashi_projectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMusashi_projectGameModeBase_NoRegister()
	{
		return AMusashi_projectGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AMusashi_projectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Musashi_project,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Musashi_projectGameModeBase.h" },
				{ "ModuleRelativePath", "Musashi_projectGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMusashi_projectGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMusashi_projectGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMusashi_projectGameModeBase, 3348521371);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMusashi_projectGameModeBase(Z_Construct_UClass_AMusashi_projectGameModeBase, &AMusashi_projectGameModeBase::StaticClass, TEXT("/Script/Musashi_project"), TEXT("AMusashi_projectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMusashi_projectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
