#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SolsticeWeaponBase.h"
#include "VehicleWeaponBase.generated.h"

class ASolsticeDrivableVehicle;
class UHeroSkillsComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AVehicleWeaponBase : public ASolsticeWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetLocationFloorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeroSkillsComponent* SkillsComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OwningVehicle, meta=(AllowPrivateAccess=true))
    ASolsticeDrivableVehicle* OwningVehicle;
    
public:
    AVehicleWeaponBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWeaponRotation(const FRotator& Rotator);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OwningVehicle();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_FiredShot();
    
};

