#include "FogOfWarManager.h"

AFogOfWarManager::AFogOfWarManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FOWTexture = NULL;
    this->SightRange = 9.00f;
    this->SamplesPerMeter = 2.00f;
    this->TraceOffsetZ = 200.00f;
    this->UpdateInterval = 0.00f;
    this->bOnlyUpdateLocalPlayer = false;
    this->UnfogColor = 255;
    this->FowMaskColor = 100;
    this->bUseTextureFile = true;
    this->TextureInFile = NULL;
    this->bIsBlurEnabled = true;
    this->TextureSize = 1024;
    this->blurKernel.AddDefaulted(15);
    this->PPVolume = NULL;
    this->FOWRenderTaget = NULL;
    this->StampMaterial = NULL;
    this->FOWMatInstance = NULL;
    this->DynamicMaterial = NULL;
    this->DynamicStamp = NULL;
    this->RegisterPlayerDelay = 20.00f;
    this->RTCanvas = NULL;
}

void AFogOfWarManager::UnregisterFowActor(AActor* Actor) {
}

void AFogOfWarManager::SetSightRange(float NewRange) {
}

void AFogOfWarManager::RegisterPlayer() {
}

void AFogOfWarManager::RegisterFowActor(AActor* Actor) {
}

void AFogOfWarManager::OnFowTextureUpdated_Implementation(UTexture2D* currentTexture) {
}

void AFogOfWarManager::LogNames() {
}

bool AFogOfWarManager::InsideFog(const UObject* WorldContextObject, FVector Location) {
    return false;
}

void AFogOfWarManager::debugTextureAccess() {
}


