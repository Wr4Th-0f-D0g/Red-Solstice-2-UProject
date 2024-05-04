#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "SelectedBotsChangedDelegate.h"
#include "SelectedItemsChangedDelegate.h"
#include "StrategyInventoryItemData.h"
#include "LogisticsComponent.generated.h"

class UBotStatus;
class UCharacterDataAsset;
class UEngineeringData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API ULogisticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterDataAsset* HeroData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEngineeringData* EngineeringData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedBots, meta=(AllowPrivateAccess=true))
    TArray<UBotStatus*> SelectedBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedItems, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SelectedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStrategyInventoryItemData> SelectedItemsData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSelectedBotsChanged OnSelectedBotsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSelectedItemsChanged OnSelectedItemsChanged;
    
    ULogisticsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetSelectedItems(const TArray<FGameplayTag>& InItemTags);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedBots(const TArray<UBotStatus*>& InBots);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveItem(const FGameplayTag& InItemTag);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveBot(UBotStatus* InBotStatus);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedItems(const TArray<FGameplayTag>& OldItems);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedBots(const TArray<UBotStatus*>& OldBots);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfBots() const;
    
    UFUNCTION(BlueprintCallable)
    bool AddItem(const FGameplayTag& InItemTag);
    
    UFUNCTION(BlueprintCallable)
    bool AddBot(UBotStatus* InBotStatus);
    
};

