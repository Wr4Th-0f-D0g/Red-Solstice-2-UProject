#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshDescription.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct TWINSTICK_API FSkeletalMeshDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> MeshAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartHidden;
    
    FSkeletalMeshDescription();
};

