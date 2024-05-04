#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagContainer.h"
#include "AbilityActorBase.h"
#include "Templates/SubclassOf.h"
#include "DropshipAbilityActorBase.generated.h"

class AActor;
class ASolsticeCharacterBase;
class UAnimMontage;
class UAnimationAsset;
class UArrowComponent;
class UCurveFloat;
class UDropshipPlayer;
class UDropshipRopeComponent;
class UNavigationQueryFilter;
class UParticleSystem;
class UParticleSystemComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USolsticeBuffBase;
class USolsticeWidgetComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ADropshipAbilityActorBase : public AAbilityActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> QueryFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDropshipPlayer*> PawnsInDropship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> RopeParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PendingDestroy, meta=(AllowPrivateAccess=true))
    bool bPendingDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetImmediatelyOnRadiusPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* RadiusPSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimelineCurveFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> DropshipMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DropshipMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* DropshipLocationParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDropshipRopeComponent* DropshipRopeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RopePawnIgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToApplyToPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDropshipReadyForPickup;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTimeline Timeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UArrowComponent* DropshipTargetLocationArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDropRopes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint8, UParticleSystemComponent*> RopeLocationParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* RopeLocationEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MarineEvacRopeMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> DropshipBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MarineRopeDropMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* RopeDropAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* RopeSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LeavingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ArrivingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetBoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PawnsInRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* RadiusEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDropshipPlayer* Targeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASolsticeCharacterBase*, USkeletalMeshComponent*> RopeDropCompMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USolsticeWidgetComponent* WidgetComp;
    
    ADropshipAbilityActorBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBuffTargeter(USolsticeBuffBase* Buff, ASolsticeCharacterBase* Char);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBuffFadeIn(USolsticeBuffBase* Buff, bool bFadeIn);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PendingDestroy();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticastSpawnSingularDropRope(const TArray<ASolsticeCharacterBase*>& Chars);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticastSpawnDropRopes(bool bDrop);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticastSetDropshipMeshesVisible(bool bNewVisible);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticastHideRope(uint8 RopeID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticastDropshipLocation(const FVector& Loc);
    
    UFUNCTION(BlueprintCallable)
    void MoveDropshipToTargetLocation();
    
    UFUNCTION(BlueprintCallable)
    void MoveDropshipToLocation();
    
    UFUNCTION(BlueprintCallable)
    void LocationChosen(const FVector& InTargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void HandleTimelinePostUpdate();
    
    UFUNCTION(BlueprintCallable)
    void HandleTimelineFloat(float InFloat);
    
    UFUNCTION(BlueprintCallable)
    void HandleTimelineFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPawnsForDropship() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckTargetLocationIsValid(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void CheckForMarineAtRopes();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuffRemoveWidget(USolsticeBuffBase* Buff);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuffAdded(USolsticeBuffBase* Buff);
    
};

