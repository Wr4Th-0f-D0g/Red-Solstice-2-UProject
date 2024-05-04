#include "SolsticeVehicleSeatComponent.h"
#include "Net/UnrealNetwork.h"

USolsticeVehicleSeatComponent::USolsticeVehicleSeatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultVehicleWeaponClass = NULL;
    this->bEpicFailsAgain = true;
    this->OwningVehicle = NULL;
    this->Driver = NULL;
    this->PreviousDriver = NULL;
}

bool USolsticeVehicleSeatComponent::IsVehicleEmpty() const {
    return false;
}

bool USolsticeVehicleSeatComponent::IsCharacterSeated(ASolsticeCharacterBase* Char) const {
    return false;
}

void USolsticeVehicleSeatComponent::HandleSeatCharacterEndedPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> Arg) {
}

void USolsticeVehicleSeatComponent::HandleSeatCharacterDied(AActor* KilledActor, const FDamage& DamageInfo, bool bBRecentlyDied) {
}

ASolsticeCharacterBase* USolsticeVehicleSeatComponent::GetVehicleDriver() const {
    return NULL;
}

UHeroSkillsComponent* USolsticeVehicleSeatComponent::GetSkillsComponentForSeatIndex(int32 SeatIndex) {
    return NULL;
}

UHeroSkillsComponent* USolsticeVehicleSeatComponent::GetSkillsComponentForCharacter(ASolsticeCharacterBase* Char) {
    return NULL;
}

int32 USolsticeVehicleSeatComponent::GetSeatIndexForCharacter(ASolsticeCharacterBase* Char) const {
    return 0;
}

ASolsticeCharacterBase* USolsticeVehicleSeatComponent::GetPreviousDriver() const {
    return NULL;
}

TArray<ASolsticeCharacterBase*> USolsticeVehicleSeatComponent::GetAllSeatedCharacters() const {
    return TArray<ASolsticeCharacterBase*>();
}

bool USolsticeVehicleSeatComponent::DoesSeatHaveWeapon(int32 SeatIndex) const {
    return false;
}

void USolsticeVehicleSeatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USolsticeVehicleSeatComponent, ReplicatedSeats);
    DOREPLIFETIME(USolsticeVehicleSeatComponent, bEpicFailsAgain);
}


