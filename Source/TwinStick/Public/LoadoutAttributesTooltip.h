#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AttributeTooltipHelper.h"
#include "EAttribute.h"
#include "EquippedModule.h"
#include "SolsticeAttributeSources.h"
#include "LoadoutAttributesTooltip.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API ULoadoutAttributesTooltip : public UUserWidget {
    GENERATED_BODY()
public:
    ULoadoutAttributesTooltip();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ModuleAffectsAttribute(EAttribute Attribute, const FEquippedModule& InModule) const;
    
    UFUNCTION(BlueprintCallable)
    FSolsticeAttributeSources GetTooltipRowsMk2(EAttribute Attribute);
    
    UFUNCTION(BlueprintCallable)
    FAttributeTooltipHelper GetTooltipRows(EAttribute Attribute);
    
};

