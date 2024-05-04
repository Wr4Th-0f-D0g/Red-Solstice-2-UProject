#include "OverlapByObjectsNode.h"

UOverlapByObjectsNode::UOverlapByObjectsNode() {
    this->World = NULL;
}

UOverlapByObjectsNode* UOverlapByObjectsNode::SphereOverlapObjectsAsync(const UObject* WorldContextObject, const FVector InLocation, const FRotator Rotation, const TArray<TEnumAsByte<ECollisionChannel>> InObjectTypes, const float InRadius, const TArray<AActor*> InIgnoredActors, int32 InData, ESolsticeDebugTraceType InDebugTraceType, float InDebugDuration) {
    return NULL;
}

UOverlapByObjectsNode* UOverlapByObjectsNode::CapsuleOverlapObjectsAsync(const UObject* WorldContextObject, const FVector InLocation, const FRotator Rotation, const TArray<TEnumAsByte<ECollisionChannel>> InObjectTypes, const float InRadius, const float InHalfHeight, const TArray<AActor*> InIgnoredActors, int32 InData, ESolsticeDebugTraceType InDebugTraceType, float InDebugDuration) {
    return NULL;
}

UOverlapByObjectsNode* UOverlapByObjectsNode::BoxOverlapObjectsAsync(const UObject* WorldContextObject, const FVector InLocation, const FRotator Rotation, const TArray<TEnumAsByte<ECollisionChannel>> InObjectTypes, const FVector InHalfExtent, const TArray<AActor*> InIgnoredActors, int32 InData, ESolsticeDebugTraceType InDebugTraceType, float InDebugDuration) {
    return NULL;
}


