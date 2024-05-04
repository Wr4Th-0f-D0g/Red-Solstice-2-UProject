#include "MapSystem_MapElementBase.h"

UMapSystem_MapElementBase::UMapSystem_MapElementBase() : UUserWidget(FObjectInitializer::Get()) {
    this->bAlwaysVisible = false;
    this->VisibilityRange = 0.00f;
    this->ElementActor = NULL;
    this->ToolTipWidgetRef = NULL;
    this->ParentActor = NULL;
    this->MapManager = NULL;
    this->bIsElementSelected = false;
    this->ElementHoveredIcon = NULL;
    this->ElementSelectedIcon = NULL;
    this->bAllowRotationChange = false;
}



void UMapSystem_MapElementBase::OnUnHovered() {
}



void UMapSystem_MapElementBase::OnHovered() {
}



ACharacter* UMapSystem_MapElementBase::GetPlayerCharacter() const {
    return NULL;
}

float UMapSystem_MapElementBase::GetDistanceFromPlayer() {
    return 0.0f;
}


