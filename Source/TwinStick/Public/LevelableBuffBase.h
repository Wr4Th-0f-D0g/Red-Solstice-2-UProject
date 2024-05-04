#pragma once
#include "CoreMinimal.h"
#include "LevelAttributeModifiers.h"
#include "SolsticeBuffBase.h"
#include "LevelableBuffBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API ULevelableBuffBase : public USolsticeBuffBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Level, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelAttributeModifiers> LevelAttributeModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CachedTooltipDescription;
    
    ULevelableBuffBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetLevel(int32 NewLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Level();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCachedLevelDescriptions();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuffLevelChanged(int32 NewLevel);
    
};

