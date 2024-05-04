#pragma once
#include "CoreMinimal.h"
#include "SolsticeSavedAttribute.h"
#include "SolsticeSavedBuff.h"
#include "SolsticeSavedAttributeContainer.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeSavedAttributeContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeSavedAttribute> SavedAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeSavedBuff> SavedBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsSet;
    
    TWINSTICK_API FSolsticeSavedAttributeContainer();
};

