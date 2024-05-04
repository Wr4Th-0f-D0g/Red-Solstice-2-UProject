#include "LightBase.h"
#include "Components/SceneComponent.h"

ALightBase::ALightBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->Tags.AddDefaulted(2);
    this->IsLightsOn = false;
    this->IsLightsFlickering = false;
    this->FlickerLightMax = 0.00f;
    this->FlickerLightMin = 0.00f;
    this->FlickerDarkMax = 0.00f;
    this->FlickerDarkMin = 0.00f;
    this->Health = 0.00f;
    this->HealthMax = 0.00f;
    this->FlickerOnDeath = false;
    this->HealthForFlickerAfterDeath = 0.00f;
    this->DamageableComponent = NULL;
    this->bIsDebugEnabled = false;
    this->LinkedTerminal = NULL;
    this->bIsDebugLineEnabled = true;
    this->bShouldFlushPersistantDebugLines = true;
    this->bIsDebugLinePersistent = true;
    this->DebugLineDuration = 0.00f;
    this->DebugLineDepthPriority = 2;
    this->DebugLineThickness = 10.00f;
}

void ALightBase::SwitchLights(bool aIsOn) {
}

void ALightBase::SetFlickerParameters(float aOnMax, float aOnMin, float aOffMax, float aOffMin) {
}

void ALightBase::SetFlicker(bool aIsOn) {
}


TArray<ULightComponent*> ALightBase::GetLights() {
    return TArray<ULightComponent*>();
}

bool ALightBase::GetIsLightOn() {
    return false;
}

bool ALightBase::GetIsFlickering() {
    return false;
}

void ALightBase::DoFlickerSwitch() {
}




