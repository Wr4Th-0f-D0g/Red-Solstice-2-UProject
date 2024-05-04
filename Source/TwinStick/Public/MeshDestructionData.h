#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "MeshDestructionCategory.h"
#include "MeshDestructionWallTypeDefaultValues.h"
#include "StaticMeshMaterialPair.h"
#include "MeshDestructionData.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class TWINSTICK_API UMeshDestructionData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMeshDestructionCategory> MeshCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMeshDestructionWallTypeDefaultValues> TypeDefaultValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FStaticMeshMaterialPair> FortifyMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UNiagaraSystem*> RestoreFailedParticles;
    
    UMeshDestructionData();

};

