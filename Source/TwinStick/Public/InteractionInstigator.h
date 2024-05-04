#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EInteractionStatus.h"
#include "InteractionInstigator.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FInteractionInstigator : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionStatus InteractionStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeRemaining;
    
    TWINSTICK_API FInteractionInstigator();
};

