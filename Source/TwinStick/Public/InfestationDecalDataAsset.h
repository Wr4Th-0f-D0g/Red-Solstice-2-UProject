#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InfestationDecalData.h"
#include "InfestationDecalDataAsset.generated.h"

class AStrategyMapManager;

UCLASS(Blueprintable)
class TWINSTICK_API UInfestationDecalDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AStrategyMapManager> MapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInfestationDecalData> InfestationDecalData;
    
    UInfestationDecalDataAsset();

    UFUNCTION(BlueprintCallable)
    void RestoreData();
    
    UFUNCTION(BlueprintCallable)
    void PopulateData();
    
};

