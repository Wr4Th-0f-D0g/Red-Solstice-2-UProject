#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PrefabricatorAssetInterface.generated.h"

UCLASS(Blueprintable)
class PREFABRICATORRUNTIME_API UPrefabricatorAssetInterface : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicates;
    
    UPrefabricatorAssetInterface();

};

