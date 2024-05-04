#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "CharacterImportCodeData.h"
#include "CharacterSetupImportBase.generated.h"

class UDataTable;
class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UCharacterSetupImportBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UDataTable*> WeaponModTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MarineClassCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModuleOffenseCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModuleDefenseCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModuleSupportCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModuleMedalsCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrimaryWeaponCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SecondaryWeaponCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrimaryWeaponModCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SecondaryWeaponModCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrimaryWeaponSkinCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrimaryWeaponPrimaryColorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrimaryWeaponSecondaryColorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SecondaryWeaponSkinCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SecondaryWeaponPrimaryColorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SecondaryWeaponSecondaryColorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MarineSkinCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MarinePrimaryColorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MarineSecondaryColorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PropertyDelimiterCode;
    
    UCharacterSetupImportBase();

    UFUNCTION(BlueprintCallable)
    bool TryToEquipImportCodeData(FCharacterImportCodeData ImportData);
    
    UFUNCTION(BlueprintCallable)
    void PopulateWeaponMods(const TArray<FDataTableRowHandle> ModHandles, UHorizontalBox* NewParent);
    
    UFUNCTION(BlueprintCallable)
    FDataTableRowHandle ModDataHandleToModDescriptionHandle(const FDataTableRowHandle& InModDataHandle);
    
    UFUNCTION(BlueprintCallable)
    FCharacterImportCodeData InputCodeToImportCodeData(const FString& InputString);
    
    UFUNCTION(BlueprintCallable)
    FString ExportCurrentLoadoutToString();
    
    UFUNCTION(BlueprintCallable)
    FDataTableRowHandle ComponentStringToWeaponModRowHandle(const FString& ComponentString);
    
};

