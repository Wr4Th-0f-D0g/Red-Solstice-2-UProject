#include "SolsticeDrivableVehicle.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "AttributeComponent.h"
#include "DamageComponent.h"
#include "EnergyComponent.h"
#include "HealthComponent.h"
#include "Net/UnrealNetwork.h"
#include "SolsticeVehicleSeatComponent.h"

ASolsticeDrivableVehicle::ASolsticeDrivableVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bVehicleOccupied = false;
    this->VehicleType = ESolsticeVehicleType::Invalid;
    this->NavModifierCompa = CreateDefaultSubobject<UBoxComponent>(TEXT("NavigationBlocker"));
    this->InteractableComponent = NULL;
    this->VehicleCacheSpeed = 300.00f;
    this->FloorTraceSphere = CreateDefaultSubobject<USphereComponent>(TEXT("FloorTraceSphere"));
    this->FuelBuffClass = NULL;
    this->FuelBuff = NULL;
    this->EnergyComponent = CreateDefaultSubobject<UEnergyComponent>(TEXT("EnergyComponent"));
    this->SignificanceType = ESolsticeSignificanceType::Player;
    this->bIsHovered = false;
    this->InteractionStartRange = 100.00f;
    this->bDisableOverwatchOnPerceptionDamage = false;
    this->IdleFuelAdditive = 2.00f;
    this->VehicleSeatComponent = CreateDefaultSubobject<USolsticeVehicleSeatComponent>(TEXT("VehicleSeatComponent"));
    this->AttributeComponent = CreateDefaultSubobject<UAttributeComponent>(TEXT("AttributeComponent"));
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("DamageComponent"));
    this->VehicleFXComponent = NULL;
    this->WreckMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WreckMesh"));
    this->VehicleInfoWidgetComponent = NULL;
    this->DamageComponent->SetupAttachment(RootComponent);
    this->FloorTraceSphere->SetupAttachment(RootComponent);
}

bool ASolsticeDrivableVehicle::VehicleEverEntered() const {
    return false;
}

bool ASolsticeDrivableVehicle::TraceForFloor() const {
    return false;
}

void ASolsticeDrivableVehicle::ThrottleInput(float Axis) {
}

void ASolsticeDrivableVehicle::Throttle(float Axis) {
}

void ASolsticeDrivableVehicle::SetTeam(ESolsticeTeam NewTeam) {
}

void ASolsticeDrivableVehicle::SetStencilValue(int32 NewValue, bool bRenderCustomDepth) {
}

void ASolsticeDrivableVehicle::RemoveGameplayTags(FGameplayTagContainer InTags, bool bRemoveChildren, bool bAllowClientRemove) {
}

void ASolsticeDrivableVehicle::RemoveGameplayTag(FGameplayTag InTag, bool bRemoveChildren, bool bAllowClientRemove) {
}

void ASolsticeDrivableVehicle::OnRep_VehicleOccupied() {
}

void ASolsticeDrivableVehicle::OnRep_GameplayTags() {
}

void ASolsticeDrivableVehicle::MoveRight(float Axis) {
}

void ASolsticeDrivableVehicle::MoveForward(float Axis) {
}






bool ASolsticeDrivableVehicle::IsDead() const {
    return false;
}

bool ASolsticeDrivableVehicle::HasMatchingGameplayTag(FGameplayTag InTag) const {
    return false;
}

bool ASolsticeDrivableVehicle::HasFreeSeat() const {
    return false;
}

bool ASolsticeDrivableVehicle::HasAnyMatchingGameplayTags(const FGameplayTagContainer& InTagContainer) const {
    return false;
}

bool ASolsticeDrivableVehicle::HasAllMatchingGameplayTags(const FGameplayTagContainer& InTagContainer) const {
    return false;
}

void ASolsticeDrivableVehicle::HandleVehicleDied(AActor* Character, const FDamage& DamageInfo, bool bRecentlyDied) {
}

void ASolsticeDrivableVehicle::HandleAttributeValueChanged(EAttribute Attribute, float OldValue, float NewValue) {
}

void ASolsticeDrivableVehicle::HandleActorKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyKilled) {
}

FSolsticeVehicleData ASolsticeDrivableVehicle::GetVehicleData() const {
    return FSolsticeVehicleData{};
}

float ASolsticeDrivableVehicle::GetTopArmorBlockPercent() const {
    return 0.0f;
}

float ASolsticeDrivableVehicle::GetTopArmorBlockArmor() const {
    return 0.0f;
}

ESolsticeTeam ASolsticeDrivableVehicle::GetTeamEnum() const {
    return ESolsticeTeam::HeroMarine;
}

UVehicleFXComponent* ASolsticeDrivableVehicle::GetFXComponent() const {
    return NULL;
}

FSolsticeVehicleData ASolsticeDrivableVehicle::GetDefaultData() const {
    return FSolsticeVehicleData{};
}

float ASolsticeDrivableVehicle::GetAttributeValue(EAttribute Attribute) const {
    return 0.0f;
}

bool ASolsticeDrivableVehicle::GetAttachmentByCustomTag(FName InCustomTag, FSolsticeVehicleRuntimeAttachment& OutAttachmentData) {
    return false;
}

float ASolsticeDrivableVehicle::GetArmorRegeneration() const {
    return 0.0f;
}

float ASolsticeDrivableVehicle::GetArmorPercent() const {
    return 0.0f;
}

float ASolsticeDrivableVehicle::GetArmorMax() const {
    return 0.0f;
}

int32 ASolsticeDrivableVehicle::GetArmorKineticResistance() const {
    return 0;
}

int32 ASolsticeDrivableVehicle::GetArmorEnergyResistance() const {
    return 0;
}

int32 ASolsticeDrivableVehicle::GetArmorDestructiveResistance() const {
    return 0;
}

int32 ASolsticeDrivableVehicle::GetArmorBlocksMax() const {
    return 0;
}

int32 ASolsticeDrivableVehicle::GetArmorBlocks() const {
    return 0;
}

float ASolsticeDrivableVehicle::GetArmor() const {
    return 0.0f;
}

void ASolsticeDrivableVehicle::FlipVehicle_Implementation() {
}

bool ASolsticeDrivableVehicle::ExitVehicle(ASolsticeCharacterBase* Char, bool bUseSetExitLocation, const FVector& ExitLocation, bool bForce) {
    return false;
}

bool ASolsticeDrivableVehicle::EnterVehicle(ASolsticeCharacterBase* Char) {
    return false;
}

bool ASolsticeDrivableVehicle::CanCharacterExitVehicle(ASolsticeCharacterBase* Char, bool bUseSetExitLocation, const FVector& ExitLocation, bool bForce) const {
    return false;
}

bool ASolsticeDrivableVehicle::CanCharacterEnterVehicle(ASolsticeCharacterBase* Char) const {
    return false;
}

void ASolsticeDrivableVehicle::BrakeReleased() {
}

void ASolsticeDrivableVehicle::BrakePressed() {
}

void ASolsticeDrivableVehicle::AddGameplayTags(FGameplayTagContainer InTags, bool bAllowClientAdd) {
}

void ASolsticeDrivableVehicle::AddGameplayTag(FGameplayTag InTag, bool bAllowClientAdd) {
}

void ASolsticeDrivableVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASolsticeDrivableVehicle, bVehicleOccupied);
    DOREPLIFETIME(ASolsticeDrivableVehicle, GameplayTags);
    DOREPLIFETIME(ASolsticeDrivableVehicle, VehicleData);
}


