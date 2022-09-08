// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvTest_01/EnvTest_01GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvTest_01GameModeBase() {}
// Cross Module References
	ENVTEST_01_API UClass* Z_Construct_UClass_AEnvTest_01GameModeBase_NoRegister();
	ENVTEST_01_API UClass* Z_Construct_UClass_AEnvTest_01GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EnvTest_01();
// End Cross Module References
	void AEnvTest_01GameModeBase::StaticRegisterNativesAEnvTest_01GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnvTest_01GameModeBase);
	UClass* Z_Construct_UClass_AEnvTest_01GameModeBase_NoRegister()
	{
		return AEnvTest_01GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AEnvTest_01GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnvTest_01GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EnvTest_01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvTest_01GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EnvTest_01GameModeBase.h" },
		{ "ModuleRelativePath", "EnvTest_01GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnvTest_01GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnvTest_01GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnvTest_01GameModeBase_Statics::ClassParams = {
		&AEnvTest_01GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEnvTest_01GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnvTest_01GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnvTest_01GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AEnvTest_01GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnvTest_01GameModeBase.OuterSingleton, Z_Construct_UClass_AEnvTest_01GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnvTest_01GameModeBase.OuterSingleton;
	}
	template<> ENVTEST_01_API UClass* StaticClass<AEnvTest_01GameModeBase>()
	{
		return AEnvTest_01GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnvTest_01GameModeBase);
	struct Z_CompiledInDeferFile_FID_EnvTest_01_Source_EnvTest_01_EnvTest_01GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvTest_01_Source_EnvTest_01_EnvTest_01GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnvTest_01GameModeBase, AEnvTest_01GameModeBase::StaticClass, TEXT("AEnvTest_01GameModeBase"), &Z_Registration_Info_UClass_AEnvTest_01GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnvTest_01GameModeBase), 4103095916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvTest_01_Source_EnvTest_01_EnvTest_01GameModeBase_h_2936673242(TEXT("/Script/EnvTest_01"),
		Z_CompiledInDeferFile_FID_EnvTest_01_Source_EnvTest_01_EnvTest_01GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvTest_01_Source_EnvTest_01_EnvTest_01GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
