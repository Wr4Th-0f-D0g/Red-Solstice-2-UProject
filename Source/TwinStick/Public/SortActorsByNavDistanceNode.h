#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ActorPathData.h"
#include "SortActorsByNavDistanceDelegateDelegate.h"
#include "SortActorsByNavDistanceNode.generated.h"

class AActor;
class UObject;
class USortActorsByNavDistanceNode;

UCLASS(Blueprintable)
class TWINSTICK_API USortActorsByNavDistanceNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSortActorsByNavDistanceDelegate Completed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToSort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorPathData> OutActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInteractionLocation;
    
    USortActorsByNavDistanceNode();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USortActorsByNavDistanceNode* SortActorsByNavDistanceNode(const UObject* NewWorldContextObject, FVector InStartLoc, TArray<AActor*> InActorsToSort, bool bInUseInteractionLocationIfPossible);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWorkDone();
    
};

