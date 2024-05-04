#pragma once
#include "CoreMinimal.h"
#include "Skill.h"
#include "MechSkillBase.generated.h"

class AHeroCharacterBase;
class AMechCharacterBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UMechSkillBase : public USkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStickToActivationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysActivatable;
    
    UMechSkillBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMechCharacterBase* GetOwningMech() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHeroCharacterBase* GetOwningHero() const;
    
};

