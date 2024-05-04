#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ExperienceAwardedDelegate.h"
#include "ExperienceAwardComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UExperienceAwardComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExperienceAwarded OnExperienceAwarded;
    
    UExperienceAwardComponent(const FObjectInitializer& ObjectInitializer);

};

