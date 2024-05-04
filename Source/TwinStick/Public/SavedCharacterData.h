#pragma once
#include "CoreMinimal.h"
#include "CharacterData.h"
#include "SavedCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FSavedCharacterData : public FCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Slot;
    
    TWINSTICK_API FSavedCharacterData();
};

