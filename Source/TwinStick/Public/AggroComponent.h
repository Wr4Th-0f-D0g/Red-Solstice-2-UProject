#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "AggroComponent.generated.h"

class ASolsticeAIControllerBase;
class ASolsticeCharacterBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UAggroComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverTickAggro;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvQueryRequest PerceivedQueryRequest;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvQueryRequest AllQueryRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IgnoreEnemyTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeAIControllerBase* MyController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle AggroDetails;
    
    UAggroComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupPerceivedEnemiesQuery(ASolsticeCharacterBase* Querier);
    
    UFUNCTION(BlueprintCallable)
    void SetupAllEnemiesQuery(ASolsticeCharacterBase* Querier);
    
    UFUNCTION(BlueprintCallable)
    void RunPerceptionEQSQuery();
    
};

