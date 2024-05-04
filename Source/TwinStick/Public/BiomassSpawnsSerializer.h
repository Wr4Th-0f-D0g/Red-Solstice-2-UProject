#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "BiomassSpawnItem.h"
#include "BiomassSpawnsSerializer.generated.h"

class ARTS_NetworkManager;

USTRUCT(BlueprintType)
struct FBiomassSpawnsSerializer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBiomassSpawnItem> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARTS_NetworkManager> Owner;
    
    TWINSTICK_API FBiomassSpawnsSerializer();
};

