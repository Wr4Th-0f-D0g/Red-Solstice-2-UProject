#pragma once
#include "CoreMinimal.h"
#include "MarineSkillBase.h"
#include "VaultSkillBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UVaultSkillBase : public UMarineSkillBase {
    GENERATED_BODY()
public:
    UVaultSkillBase(const FObjectInitializer& ObjectInitializer);

};

