#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EProductionStatus.h"
#include "EventListInterface.h"
#include "MarsTime.h"
#include "ProductionCountUpdatedDelegate.h"
#include "StrategyInventoryItemData.h"
#include "Templates/SubclassOf.h"
#include "EngineeringObject.generated.h"

class UEventWidgetBase;
class UTexture2D;

UCLASS(Blueprintable)
class TWINSTICK_API UEngineeringObject : public UObject, public IEventListInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemTag, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMarsTime BuildStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BuildTimeElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EProductionStatus ProductionStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Completed, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EventText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EventIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEventWidgetBase> ProductionInProgressWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEventWidgetBase* ProductionInProgressWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProductionCountUpdated OnProductionCountUpdated;
    
    UEngineeringObject();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TogglePause(bool InPaused);
    
    UFUNCTION(BlueprintCallable)
    void ShowProductionInProgressWidget();
    
    UFUNCTION(BlueprintCallable)
    void RemoveProductionInProgressWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemTag();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Completed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfEngineers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStrategyInventoryItemData GetItemData() const;
    

    // Fix for true pure virtual functions not being implemented
};

