#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorBuffContainer.h"
#include "BiomassPropertySerializer.h"
#include "DestructableContainer.h"
#include "EBuffChangedOperation.h"
#include "InteractionContainer.h"
#include "PrefabActorDestructionContainer.h"
#include "StaticPrefabActorDestructionContainer.h"
#include "StaticPrefabActorDestructionItem.h"
#include "RTS_NetworkManager.generated.h"

class ADynamicActorBase;
class USolsticeBuffBase;

UCLASS(Blueprintable)
class TWINSTICK_API ARTS_NetworkManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, ADynamicActorBase*> PrefabActorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FStaticPrefabActorDestructionItem> StaticPrefabActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADynamicActorBase*> NonPrefabActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FInteractionContainer InteractionContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDestructableContainer DestructableContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPrefabActorDestructionContainer DestroyedPrefabActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FStaticPrefabActorDestructionContainer DestroyedStaticPrefabActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FActorBuffContainer PrefabActorsBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FBiomassPropertySerializer BiomassProperties;
    
    ARTS_NetworkManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateActorBuffContainer(USolsticeBuffBase* ChangedBuff, EBuffChangedOperation Operation);
    
};

