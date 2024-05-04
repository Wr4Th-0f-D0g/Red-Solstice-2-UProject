#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "MissionWaypointArrows.generated.h"

class AMinimapActorBase;
class AMissionBase;

UCLASS(Blueprintable)
class TWINSTICK_API AMissionWaypointArrows : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMissionBase* TrackedMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMinimapActorBase* TrackedMissionMinimapActor;
    
    AMissionWaypointArrows(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMissionForTracking(AMissionBase* NewMission, AMinimapActorBase* NewMinimapActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostSetMission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FVector GetEvacMissionLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    AMissionBase* GetEvacMission() const;
    
};

