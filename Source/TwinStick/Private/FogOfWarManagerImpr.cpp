#include "FogOfWarManagerImpr.h"

AFogOfWarManagerImpr::AFogOfWarManagerImpr(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsTerraIncognitaEnabled = false;
    this->IsFogEnabled = true;
    this->IsBlurEnabled = true;
    this->UpdateTime = 0.03f;
    this->FailsafeTime = 2.00f;
    this->PostProcessVolume = NULL;
    this->FOWRenderTaget = NULL;
    this->StampMaterial = NULL;
    this->FOWMatInstance = NULL;
    this->FogMaskPercentDesired = 0.00f;
    this->FogMaskPercentChangePerSecond = 0.10f;
    this->RenderPartialTextures = true;
    this->DynamicMaterial = NULL;
    this->FOWTexture = NULL;
    this->DynamicStamp = NULL;
    this->RTCanvas = NULL;
    this->IsAdjustMapSizeToMapBounds = true;
    this->MaterialParameterCollection = NULL;
    this->TexelSize = 25;
    this->TextureResolution = 1024;
    this->MapSize = 2000;
    this->IsDoBlurKernelCalculation = false;
    this->blurKernel.AddDefaulted(8);
    this->BlurKernelSize = 9;
    this->BlurKernelCurve = 3.00f;
    this->WriteDebugLog = false;
    this->DrawDebugInfo = false;
}

void AFogOfWarManagerImpr::UnregisterFOWRevealActor(AActor* InActor) {
}

void AFogOfWarManagerImpr::StopFow(bool bInDoCleanupRt) {
}

void AFogOfWarManagerImpr::StartFow() {
}

void AFogOfWarManagerImpr::RemoveStoppingObject(UObject* InStoppingObject) {
}

void AFogOfWarManagerImpr::RegisterFOWRevealActor(AActor* InActor, float RevealRadius) {
}

bool AFogOfWarManagerImpr::IsInsideFOWRevealItemRadius(const FVector& Point) const {
    return false;
}

TArray<UFOWComponent*> AFogOfWarManagerImpr::GetRegisteredFowComponents() const {
    return TArray<UFOWComponent*>();
}

uint8 AFogOfWarManagerImpr::GetLocationColorValue(FVector InLocation) {
    return 0;
}

bool AFogOfWarManagerImpr::GetIsStarted() {
    return false;
}

bool AFogOfWarManagerImpr::GetIsLocationVisible(FVector InLocation) {
    return false;
}

bool AFogOfWarManagerImpr::FowActive() const {
    return false;
}

void AFogOfWarManagerImpr::FindMapBounds() {
}

void AFogOfWarManagerImpr::AddStoppingObject(UObject* InStoppingObject) {
}


