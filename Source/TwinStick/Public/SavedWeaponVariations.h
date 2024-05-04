#pragma once
#include "CoreMinimal.h"
#include "SavedCharacterWeaponData.h"
#include "Templates/SubclassOf.h"
#include "SavedWeaponVariations.generated.h"

class ASolsticeWeaponBase;

USTRUCT(BlueprintType)
struct FSavedWeaponVariations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASolsticeWeaponBase> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedCharacterWeaponData> SavedVariations;
    
    TWINSTICK_API FSavedWeaponVariations();
};

