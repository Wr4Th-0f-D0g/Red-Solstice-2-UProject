#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterWeaponData.h"
#include "EquippedWeaponModsDisplayBase.generated.h"

class AStrategyPlayerState;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TWINSTICK_API UEquippedWeaponModsDisplayBase : public UUserWidget {
    GENERATED_BODY()
public:
    UEquippedWeaponModsDisplayBase();

    UFUNCTION(BlueprintCallable)
    FCharacterWeaponData GetReplicatedWeaponData(AStrategyPlayerState* PlayerState, bool bForPrimary);
    
};

