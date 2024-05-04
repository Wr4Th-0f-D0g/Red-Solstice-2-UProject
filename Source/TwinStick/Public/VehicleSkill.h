#pragma once
#include "CoreMinimal.h"
#include "MarineSkillBase.h"
#include "VehicleSkill.generated.h"

class ASolsticeCharacterBase;
class ASolsticeDrivableVehicle;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UVehicleSkill : public UMarineSkillBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStickToActivationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysActivatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ASolsticeCharacterBase* ControllingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ASolsticeDrivableVehicle* DrivableVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float NextCooldownFinishedTime;
    
    UVehicleSkill(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeCharacterBase* GetSkillCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeDrivableVehicle* GetOwningVehicle() const;
    
};

