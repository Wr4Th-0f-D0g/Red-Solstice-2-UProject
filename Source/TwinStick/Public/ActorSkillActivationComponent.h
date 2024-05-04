#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorSkillActivationComponent.generated.h"

class APawn;
class USkill;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UActorSkillActivationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideActivationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationRangeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsManuallyActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkill*> Skills;
    
    UActorSkillActivationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ActivateSkill(APawn* InPawnInstigator, USkill* InSkill);
    
    UFUNCTION(BlueprintCallable)
    void ActivateAllSkills(APawn* InPawnInstigator);
    
};

