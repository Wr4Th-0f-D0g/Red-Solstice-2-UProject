#include "ComponentButton.h"

UComponentButton::UComponentButton() {
    this->bIsMounted = false;
    this->bNewDrag = false;
    this->ModuleIcon = NULL;
}


void UComponentButton::RemoveModuleFromParent() {
}

void UComponentButton::HandleEquippedModulesChanged(AStrategyPlayerState* PS, const UModuleEquipStatus* MES) {
}

TArray<ESuitSection> UComponentButton::GetArmorSectionsModuleIsLocatedIn() const {
    return TArray<ESuitSection>();
}


void UComponentButton::BroadcastPreviewChanged(const FModuleInfo& PreviewModule, bool IsHovered, bool IsDragged) {
}


