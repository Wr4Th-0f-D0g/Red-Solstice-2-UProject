#pragma once
#include "CoreMinimal.h"
#include "OverlapResultBlueprintable.generated.h"

class AActor;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FOverlapResultBlueprintable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockingHit;
    
    TWINSTICK_API FOverlapResultBlueprintable();
};

