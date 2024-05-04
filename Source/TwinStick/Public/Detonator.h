#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Detonator.generated.h"

class AExplosiveActorBase;
class APawn;
class UInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UDetonator : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* OwnerAsPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* OwnerInputComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DeployedExplosives, meta=(AllowPrivateAccess=true))
    TArray<AExplosiveActorBase*> DeployedExplosives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedExplosiveIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetonatorEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreviewEnabled;
    
    UDetonator(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnregisterExplosive(AExplosiveActorBase* Explosive);
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousExplosive();
    
    UFUNCTION(BlueprintCallable)
    void SelectNextExplosive();
    
    UFUNCTION(BlueprintCallable)
    void RegisterExplosive(AExplosiveActorBase* Explosive);
    
    UFUNCTION(BlueprintCallable)
    void PreviewDetonate();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DeployedExplosives();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AExplosiveActorBase* GetSelectedExplosive(bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void EndPreviewHovered(AExplosiveActorBase* Explosive);
    
    UFUNCTION(BlueprintCallable)
    void EndPreviewDetonate();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DetonateServer(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Detonate();
    
    UFUNCTION(BlueprintCallable)
    void BeginPreviewHovered(AExplosiveActorBase* Explosive);
    
};

