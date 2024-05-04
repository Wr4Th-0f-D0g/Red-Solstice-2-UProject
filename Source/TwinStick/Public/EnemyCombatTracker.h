#pragma once
#include "CoreMinimal.h"
#include "EnemyCombatTracker.generated.h"

class APawn;
class ASolsticeCharacterBase;

USTRUCT(BlueprintType)
struct FEnemyCombatTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASolsticeCharacterBase> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APawn*, float> DamageTakenByInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APawn*, int32> ArmorShreddedByInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APawn*, int32> TimesSuppressedByInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMonster;
    
    TWINSTICK_API FEnemyCombatTracker();
};

