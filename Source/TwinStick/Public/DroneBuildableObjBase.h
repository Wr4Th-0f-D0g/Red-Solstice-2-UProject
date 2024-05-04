#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "DroneBuildableObjBase.generated.h"

class UBoxComponent;
class UFMODAudioComponent;
class UFMODEvent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ADroneBuildableObjBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalUnitsRequiredToBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuiltUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BuiltObjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CollisionBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* BuildObjectAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* BuildCompleteSound;
    
public:
    ADroneBuildableObjBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBuildProgressBp();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBuildProgress();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMeshComponent(UStaticMeshComponent* Val);
    
    UFUNCTION(BlueprintCallable)
    void SetBuiltObjectName(FText Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAsNonValid();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleBuildCompleteBp();
    
    UFUNCTION(BlueprintCallable)
    void HandleBuildComplete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalUnitsRequiredToBuild() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBuilt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCollisionSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBuiltUnits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBuiltObjectName() const;
    
    UFUNCTION(BlueprintCallable)
    bool Build(float aUnits);
    
};

