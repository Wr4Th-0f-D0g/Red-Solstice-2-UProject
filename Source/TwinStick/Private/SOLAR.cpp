#include "SOLAR.h"
#include "Components/SceneComponent.h"

ASOLAR::ASOLAR(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SolarRoot"));
    this->SolarRoot = (USceneComponent*)RootComponent;
}

TArray<FSuperWeaponInfestationDamage> ASOLAR::GetSolarTargetSolutions(bool bOnlyContactedRegions) const {
    return TArray<FSuperWeaponInfestationDamage>();
}

void ASOLAR::FireSolar(ARegion* InRegion, bool bPlayEffects) {
}


