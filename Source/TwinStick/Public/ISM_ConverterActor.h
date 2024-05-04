#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ISM_ConverterActor.generated.h"

class AStaticMeshActor;
class UTRSInstancedStaticMeshComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AISM_ConverterActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinNumberOfActorsToConvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTRSInstancedStaticMeshComponent*> InstancedStaticMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AStaticMeshActor>> ConvertedActors;
    
    AISM_ConverterActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleISMs();
    
    UFUNCTION(BlueprintCallable)
    void ToggleConvertedActors();
    
    UFUNCTION(BlueprintCallable)
    void ReplaceISMsWithStaticMeshActors();
    
    UFUNCTION(BlueprintCallable)
    bool AddInstancedMesh(AStaticMeshActor* StaticMeshActor, const FTransform& InstanceTransform);
    
};

