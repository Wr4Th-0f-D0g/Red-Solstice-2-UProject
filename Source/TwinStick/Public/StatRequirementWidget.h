#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerStat.h"
#include "StatRequirementWidget.generated.h"

class UGameplayTagDescriptions;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UStatRequirementWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayTagDescriptions* TagDescriptionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStat Requirement;
    
    UStatRequirementWidget();

};

