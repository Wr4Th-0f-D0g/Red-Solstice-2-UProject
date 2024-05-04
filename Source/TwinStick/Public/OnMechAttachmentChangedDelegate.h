#pragma once
#include "CoreMinimal.h"
#include "OnMechAttachmentChangedDelegate.generated.h"

class AMechCharacterBase;
class ASolsticeCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMechAttachmentChanged, AMechCharacterBase*, Mech, ASolsticeCharacterBase*, Char, bool, bAssigned);

