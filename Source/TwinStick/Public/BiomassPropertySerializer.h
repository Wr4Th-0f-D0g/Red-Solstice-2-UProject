#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "BiomassPropertyItem.h"
#include "BiomassPropertySerializer.generated.h"

class ARTS_NetworkManager;

USTRUCT(BlueprintType)
struct FBiomassPropertySerializer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBiomassPropertyItem> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARTS_NetworkManager> Owner;
    
    TWINSTICK_API FBiomassPropertySerializer();
};

