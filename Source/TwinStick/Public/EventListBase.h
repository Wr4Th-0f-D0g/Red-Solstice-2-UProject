#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MarsTime.h"
#include "Templates/SubclassOf.h"
#include "EventListBase.generated.h"

class UEventWidgetBase;
class UObject;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UEventListBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* UpcomingEventsVB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEventWidgetBase*> UpcomingEventWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> EventWidgetClass;
    
    UEventListBase();

    UFUNCTION(BlueprintCallable)
    void SortWidgets();
    
    UFUNCTION(BlueprintCallable)
    void RemoveEventWidget(UEventWidgetBase* InEventWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleCampaignHourChanged(const FMarsTime& CampaignTime);
    
    UFUNCTION(BlueprintCallable)
    UEventWidgetBase* CreateEventWidget(UObject* InEventObject);
    
    UFUNCTION(BlueprintCallable)
    void AddEventWidget(UEventWidgetBase* InEventWidget);
    
};

