#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Engine/EngineTypes.h"
#include "ESolsticeDebugTraceType.h"
#include "OverlapByObjectsAsyncDelegateDelegate.h"
#include "OverlapByObjectsNode.generated.h"

class AActor;
class UObject;
class UOverlapByObjectsNode;
class UWorld;

UCLASS(Blueprintable)
class TWINSTICK_API UOverlapByObjectsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapByObjectsAsyncDelegate Completed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ECollisionChannel>> ObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoredActors;
    
    UOverlapByObjectsNode();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOverlapByObjectsNode* SphereOverlapObjectsAsync(const UObject* WorldContextObject, const FVector InLocation, const FRotator Rotation, const TArray<TEnumAsByte<ECollisionChannel>> InObjectTypes, const float InRadius, const TArray<AActor*> InIgnoredActors, int32 InData, ESolsticeDebugTraceType InDebugTraceType, float InDebugDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOverlapByObjectsNode* CapsuleOverlapObjectsAsync(const UObject* WorldContextObject, const FVector InLocation, const FRotator Rotation, const TArray<TEnumAsByte<ECollisionChannel>> InObjectTypes, const float InRadius, const float InHalfHeight, const TArray<AActor*> InIgnoredActors, int32 InData, ESolsticeDebugTraceType InDebugTraceType, float InDebugDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOverlapByObjectsNode* BoxOverlapObjectsAsync(const UObject* WorldContextObject, const FVector InLocation, const FRotator Rotation, const TArray<TEnumAsByte<ECollisionChannel>> InObjectTypes, const FVector InHalfExtent, const TArray<AActor*> InIgnoredActors, int32 InData, ESolsticeDebugTraceType InDebugTraceType, float InDebugDuration);
    
};

