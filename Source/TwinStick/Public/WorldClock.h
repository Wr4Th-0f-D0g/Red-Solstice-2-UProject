#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MarsTime.h"
#include "WorldClock.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UWorldClock : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FText> ShortWeekdaysText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EraText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DateFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DateText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TimeOfDayText;
    
    UWorldClock();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCampaignTimeChanged(const FMarsTime& NewCampaignTime);
    
};

