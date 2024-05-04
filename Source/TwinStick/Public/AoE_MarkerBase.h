#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "AoE_MarkerBase.generated.h"

class APawn;
class UAbilityBase;
class UParticleSystem;
class UParticleSystemComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class TWINSTICK_API AAoE_MarkerBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HighlightedActors;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* AreaEffectParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* AreaMarkerPreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAbilityBase> AbilityOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHighlightTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TargetClassFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> IgnoreClassFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> PawnOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnValidLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutsideMinimumRange;
    
    AAoE_MarkerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPawnOwner(APawn* InPawnOwner);
    
    UFUNCTION(BlueprintCallable)
    void SetAbilityOwner(UAbilityBase* InAbilityOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveHighlight(AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProjectilePathBecameValid();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProjectilePathBecameInvalid();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LocationOutsideMinimumRange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LocationInsideMinimumRange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LocationBecameValid();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LocationBecameInvalid();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsOnValidLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Highlight(AActor* Target);
    
};

