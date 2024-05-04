#pragma once
#include "CoreMinimal.h"
#include "NavArea_Vault.h"
#include "NavArea_PlayerVault.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UNavArea_PlayerVault : public UNavArea_Vault {
    GENERATED_BODY()
public:
    UNavArea_PlayerVault();

};

