#pragma once
#include "CoreMinimal.h"
#include "OnLargeMapElementHoveredDelegate.generated.h"

class UMapSystem_MapElementBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLargeMapElementHovered, UMapSystem_MapElementBase*, HoveredElement);

