#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagDescription.h"
#include "GameplayTagDescriptions.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TWINSTICK_API UGameplayTagDescriptions : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GameplayTagDescriptionsTable;
    
    UGameplayTagDescriptions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagDescription GetGameplayTagDescription(FGameplayTag InTag) const;
    
};

