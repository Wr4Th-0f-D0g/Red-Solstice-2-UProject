#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/Pawn.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "ESolsticeTeam.h"
#include "TeamInstigatorPawn.generated.h"

class UGameplayTagComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ATeamInstigatorPawn : public APawn, public IGenericTeamAgentInterface, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTagComponent;
    
    ATeamInstigatorPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMatchingGameplayTag(FGameplayTag InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& InTagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& InTagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESolsticeTeam GetTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const;
    

    // Fix for true pure virtual functions not being implemented
};

