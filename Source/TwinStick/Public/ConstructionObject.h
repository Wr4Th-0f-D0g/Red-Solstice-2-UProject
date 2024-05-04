#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EventListInterface.h"
#include "MarsTime.h"
#include "StrategyUpgradeItemData.h"
#include "Templates/SubclassOf.h"
#include "ConstructionObject.generated.h"

class UEventWidgetBase;
class UTexture2D;

UCLASS(Blueprintable)
class TWINSTICK_API UConstructionObject : public UObject, public IEventListInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStrategyUpgradeItemData UpgradeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpgradeTag, meta=(AllowPrivateAccess=true))
    FGameplayTag UpgradeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarsTime BuildStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ConstructionTimeElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutpost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EventText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EventIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEventWidgetBase> ConstructionInProgressWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEventWidgetBase* ConstructionInProgressWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPaused;
    
    UConstructionObject();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ShowConstructionInProgressWidget();
    
    UFUNCTION(BlueprintCallable)
    void RemoveConstructionInProgressWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpgradeTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStrategyUpgradeItemData GetItemData() const;
    

    // Fix for true pure virtual functions not being implemented
};

