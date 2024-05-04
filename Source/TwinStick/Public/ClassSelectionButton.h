#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "ESolsticeHeroClass.h"
#include "PowerSuitModel.h"
#include "ClassSelectionButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UClassSelectionButton : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeHeroClass SelectedClass;
    
    UClassSelectionButton();

    UFUNCTION(BlueprintCallable)
    void HandleClassSelectionChanged(const FPowerSuitModel& SuitModel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClassSelectionChanged(const FPowerSuitModel& SuitModel);
    
};

