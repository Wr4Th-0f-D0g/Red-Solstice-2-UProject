#pragma once
#include "CoreMinimal.h"
#include "ActivationBase.h"
#include "ActivationParameters.h"
#include "MonsterActivationWeapon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UMonsterActivationWeapon : public UActivationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivationParameters ActivationParameters;
    
    UMonsterActivationWeapon();

};

