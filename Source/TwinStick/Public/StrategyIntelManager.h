#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GlobalIntelChangedDelegate.h"
#include "MarsTime.h"
#include "StrategyIntelManager.generated.h"

class ARegion;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UStrategyIntelManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalIntel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalIntelChanged OnGlobalIntelChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HQAdjacentRegionIntelGenerationPerDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutpostIntelGenerationPerDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropshipActiveScanIntelPerHour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARegion*> Regions;
    
    UStrategyIntelManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void HandleCampaignHourChanged(const FMarsTime& CampaignTime);
    
    UFUNCTION(BlueprintCallable)
    void HandleCampaignDayChanged(const FMarsTime& CampaignTime);
    
};

