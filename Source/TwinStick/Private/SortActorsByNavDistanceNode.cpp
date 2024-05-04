#include "SortActorsByNavDistanceNode.h"

USortActorsByNavDistanceNode::USortActorsByNavDistanceNode() {
    this->WorldContextObject = NULL;
    this->bUseInteractionLocation = false;
}

USortActorsByNavDistanceNode* USortActorsByNavDistanceNode::SortActorsByNavDistanceNode(const UObject* NewWorldContextObject, FVector InStartLoc, TArray<AActor*> InActorsToSort, bool bInUseInteractionLocationIfPossible) {
    return NULL;
}

void USortActorsByNavDistanceNode::OnWorkDone() {
}


