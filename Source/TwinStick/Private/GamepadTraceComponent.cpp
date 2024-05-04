#include "GamepadTraceComponent.h"

UGamepadTraceComponent::UGamepadTraceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GamepadMinimumThreshold = 0.10f;
    this->CursorMaxRange = 1500.00f;
    this->CursorMinRange = 150.00f;
    this->CursorWidget = NULL;
    this->CursorWidgetActorClass = NULL;
    this->CursorModeSpeed = 6000.00f;
}


