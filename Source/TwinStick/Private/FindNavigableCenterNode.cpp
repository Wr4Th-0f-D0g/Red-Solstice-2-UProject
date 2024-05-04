#include "FindNavigableCenterNode.h"

UFindNavigableCenterNode::UFindNavigableCenterNode() {
    this->WorldContextObject = NULL;
    this->StartingCenter = NULL;
    this->bIgnoreDeadEnds = true;
}

void UFindNavigableCenterNode::TestRandomActorRecursive() {
}

UFindNavigableCenterNode* UFindNavigableCenterNode::FindNavigableCenterNode(const UObject* NewWorldContextObject, AMeshSystemCenterBase* NewStartingCenter, TArray<AMeshSystemCenterBase*> NewIgnoreCenters, TArray<AMeshSystemLinkBase*> NewIgnoreLinks, bool NewBIgnoreDeadEnds) {
    return NULL;
}


