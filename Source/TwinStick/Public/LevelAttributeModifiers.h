#pragma once
#include "CoreMinimal.h"
#include "SolsticeAttributeModifier.h"
#include "LevelAttributeModifiers.generated.h"

USTRUCT(BlueprintType)
struct FLevelAttributeModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeAttributeModifier> AttributeModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    TWINSTICK_API FLevelAttributeModifiers();
};

