#pragma once
#include "CoreMinimal.h"
#include "Skill.h"
#include "MarineSkillBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UMarineSkillBase : public USkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsProjectileSkill;
    
    UMarineSkillBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickProjectileSkill(float DeltaTIme);
    
};

