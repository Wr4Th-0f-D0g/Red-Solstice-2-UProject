#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ComponentMaterialsBackupStruct.h"
#include "DissolveParams.h"
#include "EDissolveType.h"
#include "DissolveComponent.generated.h"

class UMaterialInstanceDynamic;
class UMeshComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UDissolveComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDissolveType, FDissolveParams> DissolveParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DestroyAfterDissolve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DissolveMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDoingDissolve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentDissolveAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentMaterialsBackupStruct> BackedUpMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleComponent;
    
public:
    UDissolveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StartSink();
    
public:
    UFUNCTION(BlueprintCallable)
    void ScheduleDissolve(EDissolveType InDamageType, float TimerTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<UMeshComponent*> GetMeshes() const;
    
};

