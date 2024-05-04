#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AbilityActorBase.h"
#include "LocalMinefieldItem.h"
#include "ReplicatedMineFieldItem.h"
#include "ReplicatedMinefieldContainer.h"
#include "Templates/SubclassOf.h"
#include "MinefieldAbilityActor.generated.h"

class AActor;
class UMaterialInstanceDynamic;
class UStaticMesh;

UCLASS(Blueprintable)
class TWINSTICK_API AMinefieldAbilityActor : public AAbilityActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlapTimerInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivateMineTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AllowedOverlapClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLocalMinefieldItem> LocalMinefieldItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicatedMinefieldContainer ReplicatedMinefieldContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float SpawnTime;
    
    AMinefieldAbilityActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateThreatLevel(UMaterialInstanceDynamic* DynamicMat, const uint8 CombinedThreatLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MineSpawned(const FVector& Vector);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MinesActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMineDetonated(UMaterialInstanceDynamic* MineMaterial, const FVector& MineLocation);
    
    UFUNCTION(BlueprintCallable)
    void DetonateAllMines();
    
    UFUNCTION(BlueprintCallable)
    void DeleteMineFromArray(FGuid ItemGuid);
    
    UFUNCTION(BlueprintCallable)
    void CreateMinefieldMine(UPARAM(Ref) FReplicatedMineFieldItem& ItemData);
    
    UFUNCTION(BlueprintCallable)
    void CheckForOverlaps();
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> ChangeMinesActivationRadiusMultiplier(const FVector& WorldLocation, float WorldRadius, float NewMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanActorDetonate(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ActivateMines();
    
};

