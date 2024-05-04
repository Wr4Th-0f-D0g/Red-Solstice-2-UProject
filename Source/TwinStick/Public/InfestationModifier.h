#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InfestationModifierRow.h"
#include "InfestationModifier.generated.h"

USTRUCT(BlueprintType)
struct FInfestationModifier : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<int32, FInfestationModifierRow> Modifiers;
    
    TWINSTICK_API FInfestationModifier();
};

