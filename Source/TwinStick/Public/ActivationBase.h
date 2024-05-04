#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/Object.h"
#include "ActivationParameters.h"
#include "AreaMarkerActorParameters.h"
#include "EActivationStatus.h"
#include "Templates/SubclassOf.h"
#include "ActivationBase.generated.h"

class AAIController;
class AAoE_MarkerBase;
class UAbilityBase;
class UParticleSystem;
class UStaticMesh;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TWINSTICK_API UActivationBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAbilityBase> AbilityOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAIController> AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivationStatus ActivationStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRegisterAsActive;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAreaMarkerActorParameters AreaMarkerParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceStopMovementOnFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAoE_MarkerBase> AreaMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* AreaMarkerParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* AreaMarkerPreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAoE_MarkerBase* MarkerActor;
    
    UActivationBase();

    UFUNCTION(BlueprintCallable)
    void HandleMoveCompleted(FAIRequestID ID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentCharged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FActivationParameters GetActivationParameters() const;
    
};

