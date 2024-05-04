#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FollowerDirector.generated.h"

class AAIMarineFormationActor;
class AActor;
class AHeroCharacterBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UFollowerDirector : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAIMarineFormationActor> MarineFormationActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHeroCharacterBase> FollowerAIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAIMarineFormationActor*> FormationActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AHeroCharacterBase*> Followers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFollowersPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollowersDoNotAbortInteractionWhenAllMoveToLoc;
    
public:
    UFollowerDirector(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnregisterFollower(AHeroCharacterBase* InFollower);
    
    UFUNCTION(BlueprintCallable)
    bool UnassignFollowerFromPlayer(AHeroCharacterBase* Follower);
    
    UFUNCTION(BlueprintCallable)
    void StopScriptedFollowPlayer(AHeroCharacterBase* Follower);
    
    UFUNCTION(BlueprintCallable)
    AAIMarineFormationActor* SpawnFormationActorForPlayer(AHeroCharacterBase* PlayerChar, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowerScripted(AHeroCharacterBase* Follower);
    
    UFUNCTION(BlueprintCallable)
    void ScriptedMoveToLocation(AHeroCharacterBase* Follower, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void ScriptedFollowPlayer(AHeroCharacterBase* Follower, AHeroCharacterBase* PlayerChar);
    
    UFUNCTION(BlueprintCallable)
    void RegisterFollower(AHeroCharacterBase* InFollower);
    
    UFUNCTION(BlueprintCallable)
    void InsideVehicle(AHeroCharacterBase* PlayerChar, bool bInVehicle);
    
    UFUNCTION(BlueprintCallable)
    void GetScriptedFollowersInRadius(AHeroCharacterBase* PlayerChar, const FVector& position, float Radius, TArray<AHeroCharacterBase*>& OutFollowers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAIMarineFormationActor* GetFormationActorForPlayer(AHeroCharacterBase* PlayerChar) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AHeroCharacterBase*> GetFollowersAssignedTo(AHeroCharacterBase* PlayerChar);
    
    UFUNCTION(BlueprintCallable)
    void FollowerToggleSpecialSkill(AHeroCharacterBase* Follower, AHeroCharacterBase* PlayerChar, bool bStartSpecial, bool& bOutStartedSpecial, bool& bOutStoppedSpecial);
    
    UFUNCTION(BlueprintCallable)
    void FollowersMoveToPosition(AHeroCharacterBase* PlayerChar, const FVector& position);
    
    UFUNCTION(BlueprintCallable)
    void FollowersHoldPosition(AHeroCharacterBase* PlayerChar);
    
    UFUNCTION(BlueprintCallable)
    void FollowersFollowMe(AHeroCharacterBase* PlayerChar);
    
    UFUNCTION(BlueprintCallable)
    void FollowerMoveToPosition(AHeroCharacterBase* Follower, const FVector& position, AActor* InHoverTarget);
    
    UFUNCTION(BlueprintCallable)
    void FollowerHoldPosition(AHeroCharacterBase* Follower);
    
    UFUNCTION(BlueprintCallable)
    void FollowerFollowMe(AHeroCharacterBase* Follower, AHeroCharacterBase* PlayerChar);
    
    UFUNCTION(BlueprintCallable)
    void CheckForFollowersInProximity(AHeroCharacterBase* PlayerChar, const FVector& position, float Radius, AActor*& OutFollower, bool& bAssigned, bool& bUnAssigned);
    
};

