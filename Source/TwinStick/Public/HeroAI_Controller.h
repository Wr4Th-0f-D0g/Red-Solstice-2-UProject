#pragma once
#include "CoreMinimal.h"
#include "HeroControllerBase.h"
#include "HeroAI_Controller.generated.h"

class APlayerController;
class ARTS_PlayerState;

UCLASS(Blueprintable)
class TWINSTICK_API AHeroAI_Controller : public AHeroControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARTS_PlayerState> HeroPlayerState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerOwner;
    
    AHeroAI_Controller(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetPlayerOwner(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARTS_PlayerState* GetPlayerState();
    
};

