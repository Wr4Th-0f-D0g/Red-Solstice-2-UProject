#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "WeaponDataAsset.generated.h"

class ASolsticeWeaponBase;
class UDataTable;
class UUserWidget;

UCLASS(Blueprintable)
class TWINSTICK_API UWeaponDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponFiringModeTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponComponentModificationTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponAmmoModificationTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponSpecializationTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponUpgradeTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponSoundTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponEffectTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUserWidget>> UpgradeWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftClassPtr<ASolsticeWeaponBase>> WeaponTagClassMap;
    
    UWeaponDataAsset();

    UFUNCTION(BlueprintCallable)
    void PopulateWidgetClassIndices();
    
    UFUNCTION(BlueprintCallable)
    void PopulateWeaponTags();
    
    UFUNCTION(BlueprintCallable)
    void PopulateWeaponSoundType();
    
    UFUNCTION(BlueprintCallable)
    void PopulateWeaponSounds();
    
    UFUNCTION(BlueprintCallable)
    void PopulateWeaponEffects();
    
    UFUNCTION(BlueprintCallable)
    void PopulateWeaponBuffs();
    
    UFUNCTION(BlueprintCallable)
    void PopulateWeaponAmmoModifications();
    
    UFUNCTION(BlueprintCallable)
    void PopulateFiringModes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<ASolsticeWeaponBase> GetWeaponClassFromTag(FGameplayTag WeaponTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASolsticeWeaponBase* GetWeaponCDO_FromTag(FGameplayTag WeaponTag);
    
};

