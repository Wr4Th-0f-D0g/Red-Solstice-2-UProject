#pragma once
#include "CoreMinimal.h"
#include "SavedCharacterWeaponData.h"
#include "Templates/SubclassOf.h"
#include "ReplicatedWeaponTemplateGroup.generated.h"

class ASolsticeWeaponBase;

USTRUCT(BlueprintType)
struct FReplicatedWeaponTemplateGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASolsticeWeaponBase> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedCharacterWeaponData> GroupTemplates;
    
    TWINSTICK_API FReplicatedWeaponTemplateGroup();
};

