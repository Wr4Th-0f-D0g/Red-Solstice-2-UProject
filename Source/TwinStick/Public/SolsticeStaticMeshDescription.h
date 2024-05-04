#pragma once
#include "CoreMinimal.h"
#include "SolsticeStaticMeshDescription.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct TWINSTICK_API FSolsticeStaticMeshDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> MeshAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartHidden;
    
    FSolsticeStaticMeshDescription();
};

