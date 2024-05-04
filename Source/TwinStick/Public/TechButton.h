#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "TechButton.generated.h"

class UTechObject;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UTechButton : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTechObject* Tech;
    
    UTechButton();

};

