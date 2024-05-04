#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "PackController.generated.h"

class AActor;
class AMonsterCharacterBase;
class AMonsterControllerBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UPackController : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPackLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPackMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttackOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEvadeOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PackMemberAggroOnDamageAmt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PackLeaderAggroOnDamageAmt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PackLeaderDamagedBehindAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMonsterControllerBase*> PackMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AMonsterControllerBase> LeaderController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FeintDotCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPackable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FeintDenyTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMonsterControllerBase* MyController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMonsterCharacterBase* MyPawn;
    
    UPackController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPackLeader(AMonsterControllerBase* InPackLeader);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromPack(AMonsterControllerBase* PackLeader, AMonsterCharacterBase* PackMember, bool bDead);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromLeader(AMonsterControllerBase* MemberController);
    
    UFUNCTION(BlueprintCallable)
    void PackDamaged(float DamageAmount, AActor* DamageDealer);
    
    UFUNCTION(BlueprintCallable)
    void NotifyFeint(AActor* FeintActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPackMembersNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMonsterControllerBase*> GetPackMembers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMonsterControllerBase* GetPackLeader() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AMonsterCharacterBase*> FindMembersBehindActor(AActor* TestActor, float ConeRadius);
    
    UFUNCTION(BlueprintCallable)
    void CheckMemberTick();
    
    UFUNCTION(BlueprintCallable)
    void AddToPack(AMonsterControllerBase* MemberController);
    
};

