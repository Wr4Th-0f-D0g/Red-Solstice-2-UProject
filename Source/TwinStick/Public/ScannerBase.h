#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ScannerBase.generated.h"

class UBoxComponent;
class USceneComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AScannerBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ScannerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ScannerEntrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ScannerExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScannerOccupied;
    
public:
    AScannerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetScannerOccupied(bool bNewOccupied);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetScannerExit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetScannerEntrance() const;
    
};

