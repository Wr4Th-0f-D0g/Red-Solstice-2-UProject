#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "MonsterComponentBase.h"
#include "OnEnterNestDelegate.h"
#include "Templates/SubclassOf.h"
#include "NestingMonsterComponent.generated.h"

class AAIController;
class ANestBase;
class UNavigationQueryFilter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UNestingMonsterComponent : public UMonsterComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NestRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANestBase* Nest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController* AIController;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterNest OnEnterNest;
    
    UNestingMonsterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopMonitoringInsideNest();
    
    UFUNCTION(BlueprintCallable)
    void StartMonitoringInsideNest();
    
    UFUNCTION(BlueprintCallable)
    void SetNestLocation(const FVector& InNestlocation, const float& NewNestRadius);
    
    UFUNCTION(BlueprintCallable)
    void MoveToNest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNest();
    
    UFUNCTION(BlueprintCallable)
    void HandleMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNestLocation(bool& NewHasNest);
    
};

