#include "HASROC.h"
#include "Components/SceneComponent.h"

AHASROC::AHASROC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HasrocRoot"));
    this->HasrocRoot = (USceneComponent*)RootComponent;
}

FSuperWeaponInfestationDamage AHASROC::ModifyRegionInfestationDamageForDisplay(FSuperWeaponInfestationDamage InDamage, TArray<ARegion*> CurrentTargetRegions) {
    return FSuperWeaponInfestationDamage{};
}


