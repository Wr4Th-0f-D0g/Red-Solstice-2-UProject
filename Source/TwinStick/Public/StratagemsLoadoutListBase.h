#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "StrategyInventoryItemData.h"
#include "StratagemsLoadoutListBase.generated.h"

class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UStratagemsLoadoutListBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ButtonList;
    
    UStratagemsLoadoutListBase();

    UFUNCTION(BlueprintCallable)
    void SortInventoryItemsByLocalizedName(UPARAM(Ref) TArray<FStrategyInventoryItemData>& SortedArray);
    
    UFUNCTION(BlueprintCallable)
    void FilterChildWidgetsByName(const FString& InputFilterString);
    
};

