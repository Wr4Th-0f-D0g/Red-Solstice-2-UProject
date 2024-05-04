#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "OnBurningStoppedDelegate.h"
#include "Templates/SubclassOf.h"
#include "WallBurningPoint.h"
#include "WallBurningManager.generated.h"

class AActor;
class APawn;
class USolsticeBuffBase;

UCLASS(Blueprintable)
class TWINSTICK_API UWallBurningManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurningInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BurnStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurningRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BiomassDamageIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> BurningBuffClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBurningStopped OnBurningStopped;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWallBurningPoint> WallBurningPoints;
    
public:
    UWallBurningManager();

    UFUNCTION(BlueprintCallable)
    void StopBurning();
    
    UFUNCTION(BlueprintCallable)
    void StartBurning(AActor* Owner, APawn* Instigator, bool EnableDebug);
    
    UFUNCTION(BlueprintCallable)
    void SetBurnStacks(int32 InBurnStacks);
    
    UFUNCTION(BlueprintCallable)
    bool GetPoints(TArray<FWallBurningPoint>& Points);
    
    UFUNCTION(BlueprintCallable)
    void AddPoint(FVector Location, float Duration);
    
};

