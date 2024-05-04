#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PrefabricatorPropertyAssetMapping.h"
#include "PrefabProperty.generated.h"

USTRUCT(BlueprintType)
struct PREFABRICATORRUNTIME_API FPrefabProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExportedValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrefabricatorPropertyAssetMapping> AssetSoftReferenceMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCrossReferencedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CrossReferencePrefabActorId;
    
    FPrefabProperty();
};

