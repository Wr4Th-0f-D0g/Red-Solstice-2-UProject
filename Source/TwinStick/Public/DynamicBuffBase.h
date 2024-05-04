#pragma once
#include "CoreMinimal.h"
#include "ReplicatedAttributeModifier.h"
#include "SolsticeBuffBase.h"
#include "DynamicBuffBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UDynamicBuffBase : public USolsticeBuffBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedModifiers, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedAttributeModifier> ReplicatedModifiers;
    
    UDynamicBuffBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedModifiers();
    
};

