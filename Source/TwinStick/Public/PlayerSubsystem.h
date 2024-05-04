#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PlayerSubsystem.generated.h"

class UCampaign;
class UPlayerDataAsset;

UCLASS(Blueprintable)
class TWINSTICK_API UPlayerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerDataAsset* PlayerStaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCampaign* ActiveCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCampaign*> Campaigns;
    
    UPlayerSubsystem();

    UFUNCTION(BlueprintCallable)
    void SubsystemTest();
    
};

