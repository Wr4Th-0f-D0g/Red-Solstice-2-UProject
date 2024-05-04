#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "CharacterWeaponData.h"
#include "SavedCharacterWeaponData.h"
#include "StrategyViewConfiguration.h"
#include "Templates/SubclassOf.h"
#include "WorkbenchWeaponChangedDelegate.h"
#include "WeaponWorkbenchBase.generated.h"

class AHeroCharacterBase;
class ASolsticeWeaponBase;
class AStrategyPlayerState;
class USceneCaptureComponent2D;
class USceneComponent;
class USpringArmComponent;
class UWeaponModData;

UCLASS(Blueprintable)
class TWINSTICK_API AWeaponWorkbenchBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHeroCharacterBase> LocalHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStrategyPlayerState> LocalPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* SceneCaptureSpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ViewTagsAllowedMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentTemplateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentTemplateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponData UntouchedWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeWeaponBase* CurrentDisplayWeapon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorkbenchWeaponChanged OnWorkbenchWeaponChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorkbenchWeaponChanged OnWorkbenchWeaponModified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASolsticeWeaponBase> DefaultWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponModData* WeaponModDataAsset;
    
    AWeaponWorkbenchBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WorkbenchWeaponSpawned(ASolsticeWeaponBase* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void StartNewTemplateForWeaponClass(TSubclassOf<ASolsticeWeaponBase> WeaponClass, FSavedCharacterWeaponData WeaponData);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponTemplateSkin(int32 NewTextureIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponTemplateColor(FLinearColor NewColor, bool Primary);
    
    UFUNCTION(BlueprintCallable)
    void SetTemplatedIndex(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedTemplateName(const FString& NewSelectedTemplateName);
    
    UFUNCTION(BlueprintCallable)
    void SetNewDisplayWeapon(const FCharacterWeaponData& NewWeaponData, bool bForceNewWeapon);
    
    UFUNCTION(BlueprintCallable)
    void SaveWeaponVariation(TSubclassOf<ASolsticeWeaponBase> WeaponClass, const FString& SaveName, const FCharacterWeaponData& WeaponData);
    
    UFUNCTION(BlueprintCallable)
    void SaveCurrentWeaponSetup(bool StartNewTemplate, const FString& NewTemplateName);
    
    UFUNCTION(BlueprintCallable)
    void ResetView();
    
    UFUNCTION(BlueprintCallable)
    void RequestTemplateDeletion(TSubclassOf<ASolsticeWeaponBase> WeaponClass, const FString& TemplateName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWeaponUpgrade(FDataTableRowHandle UpgradeDataHandle);
    
    UFUNCTION(BlueprintCallable)
    void RegisterNewDisplayWeapon(ASolsticeWeaponBase* NewWeapon);
    
    UFUNCTION(BlueprintCallable)
    void LoadWeaponVariation(TSubclassOf<ASolsticeWeaponBase> WeaponClass, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void LoadDefaultWeaponVariation(TSubclassOf<ASolsticeWeaponBase> WeaponClass);
    
    UFUNCTION(BlueprintCallable)
    void HandleStrategyViewChanged(const FStrategyViewConfiguration& CurrentView, const FStrategyViewConfiguration& OldView);
    
    UFUNCTION(BlueprintCallable)
    void HandleCampaignTemplateDataUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSavedCharacterWeaponData> GetSavedWeaponVariations(TSubclassOf<ASolsticeWeaponBase> WeaponClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentTemplateSkinIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTemplateInventorySize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetCurrentTemplateColor(bool Primary) const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteWeaponVariation(TSubclassOf<ASolsticeWeaponBase> WeaponClass, const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CurrentWeaponHasBeenChanged() const;
    
    UFUNCTION(BlueprintCallable)
    void AddWeaponUpgrade(FDataTableRowHandle UpgradeDataHandle);
    
};

