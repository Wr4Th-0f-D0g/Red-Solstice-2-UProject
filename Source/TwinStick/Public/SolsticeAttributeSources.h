#pragma once
#include "CoreMinimal.h"
#include "EAttribute.h"
#include "SolsticeAttributeSource.h"
#include "SolsticeAttributeSources.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FSolsticeAttributeSources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeAttributeSource> ModuleAttributeIncreases;
    
    FSolsticeAttributeSources();
};

