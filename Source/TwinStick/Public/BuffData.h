#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SolsticeAttributeModifier.h"
#include "BuffData.generated.h"

USTRUCT(BlueprintType)
struct FBuffData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeAttributeModifier> AttributeModifiers;
    
    TWINSTICK_API FBuffData();
};

