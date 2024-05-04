#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SolsticePawnControlSwitcherBase.generated.h"

class AHeroCharacterBase;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API USolsticePawnControlSwitcherBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* LocalPlayerHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ContentSwitcher;
    
    USolsticePawnControlSwitcherBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetUseCharacterSlotFlags(bool& ForVehicles, bool& ForMech);
    
};

