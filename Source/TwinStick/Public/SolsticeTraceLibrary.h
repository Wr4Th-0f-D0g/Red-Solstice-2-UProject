#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "ESolsticeDebugTraceType.h"
#include "Templates/SubclassOf.h"
#include "SolsticeTraceLibrary.generated.h"

class AActor;
class AMonsterCharacterBase;
class ASolsticeCharacterBase;
class IGenericTeamAgentInterface;
class UGenericTeamAgentInterface;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeTraceLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USolsticeTraceLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool TraceForFloor(const UObject* WorldContextObject, FVector InLocation, float InTestPlusHeight, float InTestDownHeight);
    
    UFUNCTION(BlueprintCallable)
    static bool SphereOverlapByAttitude(TScriptInterface<IGenericTeamAgentInterface> RequestingActor, TArray<AActor*>& OutOverlapped, const FVector& SpherePos, float SphereRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TArray<AActor*> ActorsToIgnore, TEnumAsByte<ETeamAttitude::Type> Attitude, bool bIncludeIncapacitated, ESolsticeDebugTraceType DebugTraceType, float DebugDuration);
    
    UFUNCTION(BlueprintCallable)
    static bool MonsterSkillLineTraceMulti(ASolsticeCharacterBase* Monster, const FVector& StartLoc, AActor* TestActor, TArray<FHitResult>& OutHitResults, ESolsticeDebugTraceType DebugTraceType, float DebugDuration);
    
    UFUNCTION(BlueprintCallable)
    static bool MonsterSkillLineTrace(AMonsterCharacterBase* Monster, const FVector& StartLoc, AActor* TestActor, FHitResult& OutHitResult, ESolsticeDebugTraceType DebugTraceType, float DebugDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetFloorLocation(FVector& OutLocation, const UObject* WorldContextObject, FVector InTestLocation, int32 InNumTests, float InTestPlusHeight, float InMinusHeight);
    
    UFUNCTION(BlueprintCallable)
    static bool BoxTraceForObjectsByAttitude(TScriptInterface<IGenericTeamAgentInterface> RequestingActor, FHitResult& OutHit, const FVector& StartLocation, const FVector& EndLocation, const FVector& BoxExtent, const FRotator& BoxRotation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bIncludeIncapacitated, TArray<AActor*> ActorsToIgnore, TEnumAsByte<ETeamAttitude::Type> Attitude, bool bTraceComplex, bool bIgnoreSelf, ESolsticeDebugTraceType DebugTraceType, float DebugDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxOverlapWithRotation(const UObject* WorldContextObject, TArray<AActor*>& OutOverlapped, const FVector& Location, const FVector& BoxExtent, const FRotator& BoxRotation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TSubclassOf<AActor> ActorClassFilter, TArray<AActor*> ActorsToIgnore, ESolsticeDebugTraceType DebugTraceType, float DebugDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxOverlapCheckForStaticDynamicLocation(const UObject* WorldContextObject, const FVector Location, FVector BoxExtent, ESolsticeDebugTraceType DebugTraceType, float DebugDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxOverlapCheckFoAllBlockingLocation(const UObject* WorldContextObject, const FVector Location, FVector BoxExtent, bool bIgnoreFloor, ESolsticeDebugTraceType DebugTraceType, float DebugDuration);
    
    UFUNCTION(BlueprintCallable)
    static bool BoxOverlapByAttitude(TScriptInterface<IGenericTeamAgentInterface> RequestingActor, TArray<AActor*>& OutOverlapped, const FVector& Location, const FVector& BoxExtent, const FRotator& BoxRotation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TArray<AActor*> ActorsToIgnore, TEnumAsByte<ETeamAttitude::Type> Attitude, bool bIncludeIncapacitated, ESolsticeDebugTraceType DebugTraceType, float DebugDuration);
    
};

