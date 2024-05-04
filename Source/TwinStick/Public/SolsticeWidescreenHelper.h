#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SolsticeWidescreenHelper.generated.h"

class UGameplayOptionsObject;
class USolsticeSizeBox;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API USolsticeWidescreenHelper : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USolsticeSizeBox* WidescreenSizebox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyClampWidth;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayOptionsObject* GameplayOptions;
    
public:
    USolsticeWidescreenHelper();

    UFUNCTION(BlueprintCallable)
    void OnSettingsChanged();
    
};

