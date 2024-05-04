#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "GameplayTagContainer.h"
#include "MoveTargetActorBase.h"
#include "AIMarineMoveTarget.generated.h"

class AHeroCharacterBase;
class ANPCHeroController;
class UEnvQuery;
class UFollowerComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AAIMarineMoveTarget : public AMoveTargetActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFollowerComponent* AIMarineComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* AIHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANPCHeroController* NPCController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagContainerNOTMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagContainerMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* MarineEQSQuery;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvQueryRequest QueryRequest;
    
    AAIMarineMoveTarget(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupQuery(AHeroCharacterBase* Querier);
    
    UFUNCTION(BlueprintCallable)
    void SetupMoveTarget(AHeroCharacterBase* InAIMarine);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleAssignedHeroChanged(AHeroCharacterBase* NewHero, AHeroCharacterBase* OldHero);
    
};

