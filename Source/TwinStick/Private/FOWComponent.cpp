#include "FOWComponent.h"
#include "Net/UnrealNetwork.h"

UFOWComponent::UFOWComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsNativeRevealFog = true;
    this->IsNativeRevealTerraIncognita = false;
    this->InitialSightRange = 800.00f;
    this->DesiredSightRange = 800.00f;
    this->SightRangeChangePerSecond = 2000.00f;
    this->HasMovedTexelSizeMultiplyer = 0.75f;
    this->HasMovedTexelSizeMultiplyerOffscreen = 2.00f;
    this->TraceOffsetZ = 200.00f;
    this->ExtendRangeIfOnHigherGround = false;
    this->ExtendRangeHeightAdditionalOffset = 0.00f;
    this->ExtendRangeLengthMultiplyer = 2.00f;
    this->VisibleTexelValue = 255;
    this->FowBlurOverrideRule = OverrideNone;
    this->bReportAllVisible = false;
    this->UpdateEveryFrame = false;
    this->DrawRangeExtentDubugLines = false;
    this->FOWManager = NULL;
    this->ActorAttributeComp = NULL;
}

void UFOWComponent::SetSightRangeModifier(float InModifier) {
}

void UFOWComponent::SetDesiredSightRange(float NewRange) {
}

void UFOWComponent::SetActualSightRange(float NewRange) {
}

void UFOWComponent::ServerSetDesiredSightRange_Implementation(float NewRange) {
}

void UFOWComponent::RemoveIgnoredActor(AActor* InActor) {
}

bool UFOWComponent::GetIsRevealTerraIncognita_Implementation() {
    return false;
}

bool UFOWComponent::GetIsRevealFog_Implementation() {
    return false;
}

bool UFOWComponent::GetIsLocationVisible(FVector InLocation) {
    return false;
}

float UFOWComponent::GetDesiredSightRange_Implementation() {
    return 0.0f;
}

float UFOWComponent::GetActualSightRange() const {
    return 0.0f;
}

void UFOWComponent::AddIgnoredActor(AActor* InActor) {
}

void UFOWComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFOWComponent, InitialSightRange);
    DOREPLIFETIME(UFOWComponent, DesiredSightRange);
    DOREPLIFETIME(UFOWComponent, SightRangeChangePerSecond);
}


