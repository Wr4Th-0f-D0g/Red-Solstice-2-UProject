#pragma once
#include "CoreMinimal.h"
#include "SuperWeaponBase.h"
#include "EmergencyOrderSystem.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AEmergencyOrderSystem : public ASuperWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* EmergencyOrderSystemRoot;
    
    AEmergencyOrderSystem(const FObjectInitializer& ObjectInitializer);

};

