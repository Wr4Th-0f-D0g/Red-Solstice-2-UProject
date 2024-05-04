#pragma once
#include "CoreMinimal.h"
#include "TurretClip.generated.h"

USTRUCT(BlueprintType)
struct FTurretClip {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 MaxClips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 AmmoPerClip;
    
    TWINSTICK_API FTurretClip();
};

