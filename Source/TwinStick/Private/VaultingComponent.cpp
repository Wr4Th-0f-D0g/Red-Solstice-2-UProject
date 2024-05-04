#include "VaultingComponent.h"

UVaultingComponent::UVaultingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Character = NULL;
    this->VaultingActor = NULL;
}

void UVaultingComponent::ServerSetRotation_Implementation(FRotator InRot) {
}
bool UVaultingComponent::ServerSetRotation_Validate(FRotator InRot) {
    return true;
}

void UVaultingComponent::ServerSetLocation_Implementation(FVector InLoc) {
}
bool UVaultingComponent::ServerSetLocation_Validate(FVector InLoc) {
    return true;
}

void UVaultingComponent::PlayMontage(UAnimMontage* InMontage) {
}

void UVaultingComponent::MulticastRotation_Implementation(FRotator InRot) {
}

void UVaultingComponent::MulticastLocation_Implementation(FVector InLoc) {
}

void UVaultingComponent::MarineRootMotionMove(const FVector& EndLocation, float Duration, bool bRestrictSpeed, UCurveVector* OffsetCurve, ERootMotionFinishVelocityMode VelocityMode, const FVector& FinishSetVelocity, float FinishClampVelocity) {
}

ASolsticeCharacterBase* UVaultingComponent::GetOwningCharacter() {
    return NULL;
}

void UVaultingComponent::EndVault_Implementation() {
}

void UVaultingComponent::DoVault_Implementation(EVaultableType VaultType, const FVector& EndLocation, const FVector& MidPoint, AActor* VaultActor) {
}


