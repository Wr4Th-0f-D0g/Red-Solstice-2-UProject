#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PrefabProperty.h"
#include "PrefabricatorComponentData.generated.h"

USTRUCT(BlueprintType)
struct PREFABRICATORRUNTIME_API FPrefabricatorComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrefabProperty> PrefabProperties;
    
    FPrefabricatorComponentData();
};

