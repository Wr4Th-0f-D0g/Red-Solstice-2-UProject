#pragma once
#include "CoreMinimal.h"
#include "AttributeDisplayContainer.generated.h"

USTRUCT(BlueprintType)
struct FAttributeDisplayContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AttributeValue;
    
    TWINSTICK_API FAttributeDisplayContainer();
};

