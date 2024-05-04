#pragma once
#include "CoreMinimal.h"
#include "SuperWeaponBase.h"
#include "InsurgentsRallySuperweapon.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AInsurgentsRallySuperweapon : public ASuperWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RallySystemRoot;
    
    AInsurgentsRallySuperweapon(const FObjectInitializer& ObjectInitializer);

};

