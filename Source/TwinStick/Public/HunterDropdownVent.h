#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HunterDropdownVent.generated.h"

class AHunterDropdownVent;
class AMonsterCharacterBase;

UCLASS(Blueprintable)
class TWINSTICK_API AHunterDropdownVent : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMonsterCharacterBase* OccupyingHunter;
    
public:
    AHunterDropdownVent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOccupyingHunter(AMonsterCharacterBase* InOccupyingHunter);
    
protected:
    UFUNCTION(BlueprintCallable)
    static AHunterDropdownVent* FindClosestDropdownToHunter(AMonsterCharacterBase* InHunter, bool bIncludeOccupied);
    
};

