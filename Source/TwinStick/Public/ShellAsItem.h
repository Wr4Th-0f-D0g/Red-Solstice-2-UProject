#pragma once
#include "CoreMinimal.h"
#include "HoldableObjectAsItemBase.h"
#include "ShellAsItem.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UShellAsItem : public UHoldableObjectAsItemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreventDropCollisionDistance;
    
public:
    UShellAsItem(const FObjectInitializer& ObjectInitializer);

};

