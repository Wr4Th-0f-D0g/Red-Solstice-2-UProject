#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ESolsticeVehicleModuleCategory.h"
#include "PreviewVehicleChangedDelegate.h"
#include "SavedSolsticeModifiedVehicleData.h"
#include "SolsticeModifiedVehicleData.h"
#include "SolsticeVehicleData.h"
#include "StrategyViewConfiguration.h"
#include "VehicleModulesChangedDelegate.h"
#include "LoadoutGarageBase.generated.h"

class ASolsticeDrivableVehicle;
class AStrategyPlayerState;
class UDataTable;
class UObject;
class USceneCaptureComponent2D;
class USceneComponent;
class USpringArmComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ALoadoutGarageBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultVehicleTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* VehicleModuleTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* SceneCaptureSpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ViewTagsAllowedMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeDrivableVehicle* PreviewVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeModifiedVehicleData ModifiedVehicleData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreviewVehicleChanged OnPreviewVehicleChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleModulesChanged OnVehicleModulesChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStrategyPlayerState> LocalPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationStallTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StallRotationSpeed;
    
    ALoadoutGarageBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool VehicleModIsUnlocked(FGameplayTag VehicleModTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool VehicleIsEquippedByTagForPlayer(const FGameplayTag& VehicleTag, AStrategyPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool VehicleIsDeployedByTagForPlayer(const FGameplayTag& VehicleTag, AStrategyPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool VehicleIsDeployedByTag(FGameplayTag VehicleTag) const;
    
    UFUNCTION(BlueprintCallable)
    void UnequipVehicle();
    
    UFUNCTION(BlueprintCallable)
    void SetVehicleSkinIndex(int32 NewSkinIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetVehicleSkinColor(FLinearColor NewColor, bool bForPrimary);
    
    UFUNCTION(BlueprintCallable)
    void SelectVehicleByTagForDisplay(FGameplayTag VehicleTag, bool ForceReset);
    
    UFUNCTION(BlueprintCallable)
    void SaveVehiclePresetToSlot(int32 Slot, const FString& NewSaveName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveVehicleModule(FGameplayTag ModuleTag, FGameplayTag AddedModuleTag, bool bAddDefaultModule);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlayerHasVehicle(AStrategyPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlayerHasDeployedVehicle(AStrategyPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void LoadVehiclePresetFromSlot(FSavedSolsticeModifiedVehicleData SavedData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModEquippedByTag(const FGameplayTag& ModTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVehicleModuleOfCategory(ESolsticeVehicleModuleCategory InCategory, FGameplayTag& OutModuleTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSaveInSlotForVehicle(FGameplayTag VehicleTag, int32 Slot) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleStrategyViewChanged(const FStrategyViewConfiguration& CurrentView, const FStrategyViewConfiguration& PreviousView);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<FGameplayTag> GetVehiclesAvailableForUse(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FSavedSolsticeModifiedVehicleData GetSavedVehicleDataForSlotAndTag(FGameplayTag VehicleTag, int32 Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FSavedSolsticeModifiedVehicleData> GetSaveDataForVehicleTag(FGameplayTag VehicleTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSolsticeVehicleData GetPlayerEquippedVehicleData(AStrategyPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentVehicleSkinIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetCurrentVehicleColor(bool bPrimary) const;
    
    UFUNCTION(BlueprintCallable)
    void EquipVehicleMod(const FGameplayTag& ModTagForEquip);
    
    UFUNCTION(BlueprintCallable)
    void EquipVehicle();
    
    UFUNCTION(BlueprintCallable)
    void DeleteVehicleFromSlot(FGameplayTag VehicleTag, int32 Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CurrentViewContextVehicleIsDeployed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CurrentDisplayVehicleMatchesEquippedVehicle() const;
    
    UFUNCTION(BlueprintCallable)
    void AddVehicleModule(FGameplayTag ModuleTag);
    
};

