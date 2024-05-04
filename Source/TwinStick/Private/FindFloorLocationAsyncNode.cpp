#include "FindFloorLocationAsyncNode.h"

UFindFloorLocationAsyncNode::UFindFloorLocationAsyncNode() {
    this->WorldContextObject = NULL;
    this->NumTests = 5;
    this->TestPlusHeight = 1500.00f;
    this->TestMinusHeight = 1500.00f;
    this->bDoTestsInOnetick = true;
    this->Payload = -1;
    this->bReturnFirstStatic = false;
}

UFindFloorLocationAsyncNode* UFindFloorLocationAsyncNode::FindFloorLocationAsyncNode(const UObject* NewWorldContextObject, FVector InTestLocation, int32 InNumTests, float InTestPlusHeight, float InTestMinusHeight, bool bInDoTestsInOnetick, int32 InPayload, bool bInReturnFirstStatic) {
    return NULL;
}


