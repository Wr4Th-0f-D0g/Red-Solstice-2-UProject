#pragma once
#include "CoreMinimal.h"
#include "EArtillerySupportLevel.h"
#include "ArtillerySupportLevelChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArtillerySupportLevelChanged, EArtillerySupportLevel, SupportLevel);

