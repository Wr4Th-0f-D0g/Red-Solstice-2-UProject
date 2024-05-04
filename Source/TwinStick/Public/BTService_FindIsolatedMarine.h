#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "GameplayTagContainer.h"
#include "BTService_FindIsolatedMarine.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UBTService_FindIsolatedMarine : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IgnoreTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TokenID;
    
public:
    UBTService_FindIsolatedMarine();

};

