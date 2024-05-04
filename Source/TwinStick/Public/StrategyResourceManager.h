#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EAttribute.h"
#include "EventListInterface.h"
#include "MarsTime.h"
#include "ResourceIncomeChangedDelegate.h"
#include "SolsticeSaveInterface.h"
#include "Templates/SubclassOf.h"
#include "StrategyResourceManager.generated.h"

class AOutpost;
class ARegion;
class UEventWidgetBase;
class UTexture2D;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UStrategyResourceManager : public UActorComponent, public ISolsticeSaveInterface, public IEventListInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARegion*> Regions;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResourceIncomeChanged OnResourceIncomeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOutpost*> Outposts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEventWidgetBase> ResupplyEventWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEventWidgetBase* ResupplyEventWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> EventTooltipClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ResupplyEventIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ResupplyEventText;
    
    UStrategyResourceManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowResupplyEventWidget();
    
    UFUNCTION(BlueprintCallable)
    void RemoveResupplyEventWidget();
    
    UFUNCTION(BlueprintCallable)
    void HandleRegionInfestationChanged(float InfestationLevel);
    
    UFUNCTION(BlueprintCallable)
    void HandleOutpostLevelChanged(AOutpost* Outpost, int32 NewLevel);
    
    UFUNCTION(BlueprintCallable)
    void HandleCampaignDayChanged(const FMarsTime& CampaignTime);
    
    UFUNCTION(BlueprintCallable)
    void HandleAttributeValueChanged(EAttribute Attribute, float OldValue, float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSupplyModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSupplyIncome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpecialistIncome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDeploymentIncome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FGameplayTag> GetActiveResupplyModifierTags() const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastIncomeChanged();
    

    // Fix for true pure virtual functions not being implemented
};

