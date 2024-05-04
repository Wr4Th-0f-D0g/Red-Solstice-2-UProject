#pragma once
#include "CoreMinimal.h"
#include "SuperWeaponBase.h"
#include "ForceOfNature.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AForceOfNature : public ASuperWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ForceOfNatureRoot;
    
    AForceOfNature(const FObjectInitializer& ObjectInitializer);

};

