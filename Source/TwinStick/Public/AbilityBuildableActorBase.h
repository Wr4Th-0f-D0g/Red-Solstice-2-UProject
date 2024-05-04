#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityActorBase.h"
#include "ActorDamagedDelegate.h"
#include "ActorKilledDelegate.h"
#include "BuildCompletedDelegate.h"
#include "TerminalUserInterface.h"
#include "AbilityBuildableActorBase.generated.h"

class APowerConsumer;
class UFMODAudioComponent;
class UFMODEvent;
class UMaterialInstanceDynamic;
class UMeshComponent;
class UParticleSystem;
class UParticleSystemComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AAbilityBuildableActorBase : public AAbilityActorBase, public ITerminalUserInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* CompletedParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* UnderConstructionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ConstructionCompletedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> BuildableMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleteImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsMarineToBuildIfPreplaced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentBuildTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBuildCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APowerConsumer*> LinkedTerminals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> LinkedTerminalsGuid;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildCompleted OnBuildCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorDamaged OnActorDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorKilled OnActorKilled;
    
    AAbilityBuildableActorBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetCurrentBuildTime(float BuildTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMarineInRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetTotalBuildTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBuildProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuildStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuildProgressUpdated(float BuildProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuildPaused();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuildCompleted();
    

    // Fix for true pure virtual functions not being implemented
};

