#include "RTSNavLinkCustomComponent.h"
#include "Templates/SubclassOf.h"

URTSNavLinkCustomComponent::URTSNavLinkCustomComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NavlinkType = ERTSNavlinkType::Vault;
    this->ClaimReleaseDelay = 0.20f;
    this->VaultType = EVaultableType::EVaultType_None;
}

void URTSNavLinkCustomComponent::ToggleEnabled(bool bEnabled) {
}

void URTSNavLinkCustomComponent::SetupSmartLink(TSubclassOf<UNavArea> EnabledNavAreaClass, TSubclassOf<UNavArea> DisabledNavAreaClass, FVector RightPointLoc, FVector LeftLocPoint, TEnumAsByte<ENavLinkDirection::Type> Direction, float InBroadcastRadius, TEnumAsByte<ECollisionChannel> InBroadcastCollisionChannel, float InBroadcastInterval, bool bSendBroadcastWhenEnabled, bool bSendBroadcastWhenDisabled, float InCooldownTime) {
}

void URTSNavLinkCustomComponent::ReEnable() {
}

void URTSNavLinkCustomComponent::BroadcastToAI() {
}


