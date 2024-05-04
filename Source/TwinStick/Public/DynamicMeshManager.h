#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "DynamicMeshManager.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct TWINSTICK_API FDynamicMeshManager : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMeshComponent> DynamicMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartHidden;
    
    FDynamicMeshManager();
};

