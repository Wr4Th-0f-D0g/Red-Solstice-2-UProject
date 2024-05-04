#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PipeNetworkDestructorStepDelegate.h"
#include "PipeNetworkRoadMeshItem.h"
#include "PipeNetworkDestructor.generated.h"

class APawn;
class APipeNetworkBase;
class UObject;
class UPipeNetworkDestructor;

UCLASS(Blueprintable)
class TWINSTICK_API UPipeNetworkDestructor : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPipeNetworkDestructorStep OnPipeNetworkDestructorStep;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPipeNetworkDestructorStep OnPipeNetworkDestructorFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPipeNetworkRoadMeshItem> PipeNetworkRoadItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APipeNetworkBase* OwningPipeNetwork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APipeNetworkBase* OtherPipeNetwork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* Instigator;
    
public:
    UPipeNetworkDestructor();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPipeNetworkDestructor* StartPipeNetworkDestructor(UObject* WorldContextObject, APipeNetworkBase* OtherPipe, float DetonationTime, float DistanceBetweenExplosions, const FVector& DirectionOfPipe, bool bHalfRange, float Damage, float ExplosionStrength, APawn* NewInstigator);
    
    UFUNCTION(BlueprintCallable)
    void DetonateRoad();
    
};

