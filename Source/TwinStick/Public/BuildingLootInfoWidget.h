#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LootInformation.h"
#include "BuildingLootInfoWidget.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UBuildingLootInfoWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemLookupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemDescriptionTable;
    
    UBuildingLootInfoWidget();

    UFUNCTION(BlueprintCallable)
    TArray<FName> GetItemNamesFromLootInfo(const FLootInformation& InLootInfo);
    
};

