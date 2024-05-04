#pragma once
#include "CoreMinimal.h"
#include "BuildingMapInfo.generated.h"

class UTexture2D;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct FBuildingMapInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* MapTextureRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* InMapTexture;
    
    TWINSTICK_API FBuildingMapInfo();
};

