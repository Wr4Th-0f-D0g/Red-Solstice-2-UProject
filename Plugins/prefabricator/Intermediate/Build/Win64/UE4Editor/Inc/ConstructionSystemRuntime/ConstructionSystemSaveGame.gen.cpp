// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstructionSystemRuntime/Public/ConstructionSystemSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructionSystemSaveGame() {}
// Cross Module References
	CONSTRUCTIONSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UConstructionSystemSaveGame_NoRegister();
	CONSTRUCTIONSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UConstructionSystemSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_ConstructionSystemRuntime();
	CONSTRUCTIONSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo();
	CONSTRUCTIONSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem();
// End Cross Module References
	void UConstructionSystemSaveGame::StaticRegisterNativesUConstructionSystemSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UConstructionSystemSaveGame_NoRegister()
	{
		return UConstructionSystemSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UConstructionSystemSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstructedItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstructedItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConstructedItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstructionSystemSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_ConstructionSystemRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemSaveGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConstructionSystemSaveGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConstructionSystemSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_SaveSlotName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemSaveGame" },
		{ "ModuleRelativePath", "Public/ConstructionSystemSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConstructionSystemSaveGame, SaveSlotName), METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_SaveSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_SaveSlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_UserIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemSaveGame" },
		{ "ModuleRelativePath", "Public/ConstructionSystemSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConstructionSystemSaveGame, UserIndex), METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_PlayerInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemSaveGame" },
		{ "ModuleRelativePath", "Public/ConstructionSystemSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_PlayerInfo = { "PlayerInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConstructionSystemSaveGame, PlayerInfo), Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo, METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_PlayerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_PlayerInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_ConstructedItems_Inner = { "ConstructedItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_ConstructedItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemSaveGame" },
		{ "ModuleRelativePath", "Public/ConstructionSystemSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_ConstructedItems = { "ConstructedItems", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConstructionSystemSaveGame, ConstructedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_ConstructedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_ConstructedItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConstructionSystemSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_SaveSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_PlayerInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_ConstructedItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemSaveGame_Statics::NewProp_ConstructedItems,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstructionSystemSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstructionSystemSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConstructionSystemSaveGame_Statics::ClassParams = {
		&UConstructionSystemSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConstructionSystemSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConstructionSystemSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConstructionSystemSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConstructionSystemSaveGame, 298623307);
	template<> CONSTRUCTIONSYSTEMRUNTIME_API UClass* StaticClass<UConstructionSystemSaveGame>()
	{
		return UConstructionSystemSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConstructionSystemSaveGame(Z_Construct_UClass_UConstructionSystemSaveGame, &UConstructionSystemSaveGame::StaticClass, TEXT("/Script/ConstructionSystemRuntime"), TEXT("UConstructionSystemSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstructionSystemSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
