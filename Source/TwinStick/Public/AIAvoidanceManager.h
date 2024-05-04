#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RegisteredAvoidanceMonsters.h"
#include "AIAvoidanceManager.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew, Within=MonsterManager)
class TWINSTICK_API UAIAvoidanceManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRegisteredAvoidanceMonsters> RegisteredMonsters;
    
    UAIAvoidanceManager();

};

