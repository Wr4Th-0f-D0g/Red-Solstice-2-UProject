#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AssignedHeroChangedDelegateDelegate.h"
#include "EFollowerAction.h"
#include "EFollowerAssignment.h"
#include "EFollowerMoveToLocType.h"
#include "EFollowerMovementState.h"
#include "EFollowerType.h"
#include "ESolsticeHeroClass.h"
#include "FollowerGuerillaTacticsMapping.h"
#include "OnFollowerAttackTargetChangedDelegate.h"
#include "FollowerComponent.generated.h"

class AActor;
class AHeroCharacterBase;
class AInteractionActor;
class UFollowerDirector;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UFollowerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> AttackTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInteractionActor* FollowerInteractionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerUsedZiplineStartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PlayerUsedZipline;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFollowerAttackTargetChanged OnFollowerAttackTargetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESolsticeHeroClass, FFollowerGuerillaTacticsMapping> GuerillaTacticsMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCinematicFollower;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAssignedHeroChangedDelegate OnAssignedHeroChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* FollowerChar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFollowerDirector* FollowerDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverwatchDistanceFromFormationPositionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHeroCharacterBase> ScriptedFollowHero;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFollowerMoveToLocType MoveToLocType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InteractTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FollowerAssignment, meta=(AllowPrivateAccess=true))
    EFollowerAssignment FollowerAssignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFollowerAssignment PrevFollowerAssignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AssignedHero, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* AssignedHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHeroCharacterBase> OldAssignedHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FollowerAction, meta=(AllowPrivateAccess=true))
    EFollowerAction FollowerAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFollowerAction PrevFollowerAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FollowerMovementState, meta=(AllowPrivateAccess=true))
    EFollowerMovementState FollowerMovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFollowerMovementState PrevFollowerMovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FollowerType, meta=(AllowPrivateAccess=true))
    EFollowerType FollowerType;
    
public:
    UFollowerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnsetFollowerScripted(bool bUnregisterFromAI, bool bTurnOfWeapons);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveToPosition(const FVector& Vector);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveToLocType(EFollowerMoveToLocType InMoveLocType);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldPositionLoc(const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowerType(EFollowerType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowerScripted();
    
    UFUNCTION(BlueprintCallable)
    void SetFollowerMovementState(EFollowerMovementState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowerAttackTarget(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowerAction(EFollowerAction NewAction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FollowerType();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FollowerMovementState(EFollowerMovementState OldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FollowerAssignment(EFollowerAssignment OldAssignment);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FollowerAction(EFollowerAction OldAction);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AssignedHero();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleFollowerRevived(AHeroCharacterBase* RevivedHero);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHeroCharacterBase* GetScriptedAssigned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFollowerMovementState GetPrevFollowerMovementState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFollowerAssignment GetPrevFollowerAssignment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFollowerAction GetPrevFollowerAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHeroCharacterBase* GetOldAssignedHero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFollowerMoveToLocType GetMoveToLocType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMoveToLocationVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHoldPositionLoc() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFollowerType GetFollowerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFollowerMovementState GetFollowerMovementState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFollowerAssignment GetFollowerAssignment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFollowerAction GetFollowerAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHeroCharacterBase* GetAssignedHero() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FollowerMovementStateChangedServer(EFollowerMovementState NewMovementState, EFollowerMovementState OldMovementState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FollowerMovementStateChangedClient(EFollowerMovementState NewMovementState, EFollowerMovementState OldMovementState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FollowerActionChangedServer(EFollowerAction NewAction, EFollowerAction PrevAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FollowerActionChangedClient(EFollowerAction NewAction, EFollowerAction PrevAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AssignmentChangedServer(EFollowerAssignment NewAssigment, EFollowerAssignment PrevAssignment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AssignmentChangedClient(EFollowerAssignment NewAssigment, EFollowerAssignment PrevAssignment);
    
public:
    UFUNCTION(BlueprintCallable)
    void AssignFollowerTo(AHeroCharacterBase* NewAssignedHero);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AssignedHeroChangedServer(AHeroCharacterBase* NewAssignedHero, AHeroCharacterBase* OldHero);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AssignedHeroChangedClient(AHeroCharacterBase* NewAssignedHero);
    
};

