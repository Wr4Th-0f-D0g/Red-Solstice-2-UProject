#include "SolsticeTraceLibrary.h"
#include "Templates/SubclassOf.h"

USolsticeTraceLibrary::USolsticeTraceLibrary() {
}

bool USolsticeTraceLibrary::TraceForFloor(const UObject* WorldContextObject, FVector InLocation, float InTestPlusHeight, float InTestDownHeight) {
    return false;
}

bool USolsticeTraceLibrary::SphereOverlapByAttitude(TScriptInterface<IGenericTeamAgentInterface> RequestingActor, TArray<AActor*>& OutOverlapped, const FVector& SpherePos, float SphereRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TArray<AActor*> ActorsToIgnore, TEnumAsByte<ETeamAttitude::Type> Attitude, bool bIncludeIncapacitated, ESolsticeDebugTraceType DebugTraceType, float DebugDuration) {
    return false;
}

bool USolsticeTraceLibrary::MonsterSkillLineTraceMulti(ASolsticeCharacterBase* Monster, const FVector& StartLoc, AActor* TestActor, TArray<FHitResult>& OutHitResults, ESolsticeDebugTraceType DebugTraceType, float DebugDuration) {
    return false;
}

bool USolsticeTraceLibrary::MonsterSkillLineTrace(AMonsterCharacterBase* Monster, const FVector& StartLoc, AActor* TestActor, FHitResult& OutHitResult, ESolsticeDebugTraceType DebugTraceType, float DebugDuration) {
    return false;
}

bool USolsticeTraceLibrary::GetFloorLocation(FVector& OutLocation, const UObject* WorldContextObject, FVector InTestLocation, int32 InNumTests, float InTestPlusHeight, float InMinusHeight) {
    return false;
}

bool USolsticeTraceLibrary::BoxTraceForObjectsByAttitude(TScriptInterface<IGenericTeamAgentInterface> RequestingActor, FHitResult& OutHit, const FVector& StartLocation, const FVector& EndLocation, const FVector& BoxExtent, const FRotator& BoxRotation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bIncludeIncapacitated, TArray<AActor*> ActorsToIgnore, TEnumAsByte<ETeamAttitude::Type> Attitude, bool bTraceComplex, bool bIgnoreSelf, ESolsticeDebugTraceType DebugTraceType, float DebugDuration) {
    return false;
}

bool USolsticeTraceLibrary::BoxOverlapWithRotation(const UObject* WorldContextObject, TArray<AActor*>& OutOverlapped, const FVector& Location, const FVector& BoxExtent, const FRotator& BoxRotation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TSubclassOf<AActor> ActorClassFilter, TArray<AActor*> ActorsToIgnore, ESolsticeDebugTraceType DebugTraceType, float DebugDuration) {
    return false;
}

bool USolsticeTraceLibrary::BoxOverlapCheckForStaticDynamicLocation(const UObject* WorldContextObject, const FVector Location, FVector BoxExtent, ESolsticeDebugTraceType DebugTraceType, float DebugDuration) {
    return false;
}

bool USolsticeTraceLibrary::BoxOverlapCheckFoAllBlockingLocation(const UObject* WorldContextObject, const FVector Location, FVector BoxExtent, bool bIgnoreFloor, ESolsticeDebugTraceType DebugTraceType, float DebugDuration) {
    return false;
}

bool USolsticeTraceLibrary::BoxOverlapByAttitude(TScriptInterface<IGenericTeamAgentInterface> RequestingActor, TArray<AActor*>& OutOverlapped, const FVector& Location, const FVector& BoxExtent, const FRotator& BoxRotation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TArray<AActor*> ActorsToIgnore, TEnumAsByte<ETeamAttitude::Type> Attitude, bool bIncludeIncapacitated, ESolsticeDebugTraceType DebugTraceType, float DebugDuration) {
    return false;
}


