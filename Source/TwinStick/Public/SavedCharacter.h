#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterData.h"
#include "SavedCharacter.generated.h"

USTRUCT(BlueprintType)
struct FSavedCharacter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterData CharacterData;
    
    TWINSTICK_API FSavedCharacter();
};

