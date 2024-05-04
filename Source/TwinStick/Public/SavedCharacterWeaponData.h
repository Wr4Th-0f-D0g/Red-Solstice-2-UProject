#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponData.h"
#include "SavedCharacterWeaponData.generated.h"

USTRUCT(BlueprintType)
struct FSavedCharacterWeaponData : public FCharacterWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString SavedName;
    
    TWINSTICK_API FSavedCharacterWeaponData();
};

