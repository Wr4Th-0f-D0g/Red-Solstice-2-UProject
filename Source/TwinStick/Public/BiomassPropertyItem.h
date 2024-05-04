#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "BiomassPropertyItem.generated.h"

class ABiomassCenterActor;

USTRUCT(BlueprintType)
struct FBiomassPropertyItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABiomassCenterActor> Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewRapidExpansion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 NewNumHealthStacks;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 NewNumChildrenHealthStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewBiomassKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABiomassCenterActor*> NewSpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewHealth;
    
    TWINSTICK_API FBiomassPropertyItem();
};

