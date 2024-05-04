#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CampaignInitializer.generated.h"

class ARegion;
class UCampaign;

UCLASS(Blueprintable)
class TWINSTICK_API UCampaignInitializer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARegion> StartingRegion;
    
    UCampaignInitializer();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectStartingRegion();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostLoadInitialize(UCampaign* ActiveCampaign);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARegion* GetStartingRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCampaignStartDelayInDays() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FirstTimeInitialize(UCampaign* ActiveCampaign);
    
};

