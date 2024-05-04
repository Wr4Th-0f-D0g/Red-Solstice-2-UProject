#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "SolsticeScrollBoxBase.generated.h"

class UCommonHierarchicalScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API USolsticeScrollBoxBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonHierarchicalScrollBox* InternalScrollbox;
    
    USolsticeScrollBoxBase();

};

