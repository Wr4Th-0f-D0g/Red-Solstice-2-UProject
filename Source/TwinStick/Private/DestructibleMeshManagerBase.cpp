#include "DestructibleMeshManagerBase.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ADestructibleMeshManagerBase::ADestructibleMeshManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DMM Root"));
    this->MeshDestructionData = NULL;
    this->DestroyTimeBeforeAnimEndOnFail = 2.00f;
    this->FloatingGeometryCacheCheckDistance = 250.00f;
    this->FloatingGeometryCacheCheckTolerance = 20.00f;
    this->RestoreMeshGeometryCachePlaybackOffset = 1.00f;
    this->RestoreMeshGeometryAnimationSpeedMultiplyer = 1.50f;
    this->AdditionalActorTag = TEXT("ISMActor");
    this->InitialDestructionPercent = -1.00f;
    this->InitialDestructionSeed = -999;
    this->bAllActorsReplaced = false;
    this->AdditionalActor = NULL;
}

void ADestructibleMeshManagerBase::UnhighlightISM() {
}

void ADestructibleMeshManagerBase::TakeDamageToItem(const UTRSInstancedStaticMeshComponent* InISM, int32 InIndex, float InDamage, FVector InDirection, AController* EventInstigator, AActor* DamageCauser) {
}

void ADestructibleMeshManagerBase::StartRestoreItem(const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex) {
}

void ADestructibleMeshManagerBase::SetItemHealth(float InNewHealth, const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex) {
}

void ADestructibleMeshManagerBase::Run() {
}

void ADestructibleMeshManagerBase::RestoreItem(const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex) {
}

void ADestructibleMeshManagerBase::RemoveSurroundingMeshes(FVector InLocation, FQuat InRotation, float InRadius, AActor* InFloorActor) {
}

void ADestructibleMeshManagerBase::PopulateISMArrayAndTagActors() {
}

void ADestructibleMeshManagerBase::OnRep_Serializer() {
}

void ADestructibleMeshManagerBase::OnRep_InitDestructionSeed() {
}


bool ADestructibleMeshManagerBase::IsFortified(const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, const int32 InIndex) {
    return false;
}

bool ADestructibleMeshManagerBase::IsCharacterOverlappingWall(ACharacter* InCharacter, UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex) {
    return false;
}

void ADestructibleMeshManagerBase::HighlightUnconvertedISM() {
}

void ADestructibleMeshManagerBase::HighlightISM() {
}

void ADestructibleMeshManagerBase::HandleNonDestrInstanceRemoved_Client(UTRSInstancedStaticMeshComponent* InISM, int32 InIndex) {
}

void ADestructibleMeshManagerBase::HandleInstanceStateChanged_Client(FStaticMeshMaterialPair InMeshType, int32 InIndex, EDamageState InState, bool bIsSilent, bool bFortificationChanged, bool bDamageStateChange) {
}

FText ADestructibleMeshManagerBase::GetItemToolTip_Implementation(UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex) {
    return FText::GetEmpty();
}

TArray<FReplacedActorInfo> ADestructibleMeshManagerBase::GetItemsInRange(FVector InCenter, float InRadius, FGameplayTagContainer TypesToSelect, bool bInNonDestroyedOnly, bool bInDoSort, bool bInAscending) {
    return TArray<FReplacedActorInfo>();
}

FTransform ADestructibleMeshManagerBase::GetItemCenterTransform(const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex) const {
    return FTransform{};
}

FReplacedActorInfo ADestructibleMeshManagerBase::GetInfoForItemRef(bool& bOutItemFound, const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex) {
    return FReplacedActorInfo{};
}

bool ADestructibleMeshManagerBase::GetInfoForItem(FReplacedActorInfo& OutReplacedItemData, const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex) const {
    return false;
}

void ADestructibleMeshManagerBase::Fortify(const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, const int32 InIndex, const FGameplayTag InItemType, const float NewHealth) {
}

void ADestructibleMeshManagerBase::FinishRestoreItem(const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex) {
}

void ADestructibleMeshManagerBase::ExecuteArtilleryStrike(float InPercent, int32 InSeed) {
}

void ADestructibleMeshManagerBase::DisplayRestoreFail(const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex) {
}

void ADestructibleMeshManagerBase::DebugDisplayObjectOffsetCenters() {
}

void ADestructibleMeshManagerBase::DamageMeshesArea(FVector InCenter, float InRadius, float InDamage, EDamageGroup InDamageType, const AController* EventInstigator, const AActor* DamageCauser) {
}

void ADestructibleMeshManagerBase::AddParticleToItem(UParticleSystemComponent* InParticle, const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex) {
}

void ADestructibleMeshManagerBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADestructibleMeshManagerBase, InitialDestructionPercent);
    DOREPLIFETIME(ADestructibleMeshManagerBase, InitialDestructionSeed);
    DOREPLIFETIME(ADestructibleMeshManagerBase, InstanceDamageSerializer);
    DOREPLIFETIME(ADestructibleMeshManagerBase, NonDestrISMRemoveSerializer);
}


