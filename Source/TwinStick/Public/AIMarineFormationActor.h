#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FormationSlots.h"
#include "SpringArm.h"
#include "AIMarineFormationActor.generated.h"

class AHeroCharacterBase;
class UArrowComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AAIMarineFormationActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpringArm SpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SlotA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SlotB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SlotC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SlotD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SlotE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SlotF;
    
public:
    AAIMarineFormationActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveFollowerFromSlot(AHeroCharacterBase* Follower);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSlotLocationForFollower(AHeroCharacterBase* Follower) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFormationSlots> GetFormationSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AttachedToHero();
    
    UFUNCTION(BlueprintCallable)
    FVector AssignFollowerToSlot(AHeroCharacterBase* Follower, bool bIsMissionFollower);
    
};

