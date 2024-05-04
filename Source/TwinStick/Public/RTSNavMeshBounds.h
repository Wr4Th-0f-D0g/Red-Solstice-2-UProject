#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AI/Navigation/NavigationTypes.h"
#include "PrefabricatorActorInterface.h"
#include "RTSNavMeshBounds.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ARTSNavMeshBounds : public AActor, public IPrefabricatorActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAgentSelector SupportedAgents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    ARTSNavMeshBounds(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

