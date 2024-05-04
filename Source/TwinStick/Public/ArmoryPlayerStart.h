#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "ArmoryPlayerStart.generated.h"

class AArmoryPlayerStart;
class ACameraActor;
class AStrategyPlayerState;

UCLASS(Blueprintable)
class TWINSTICK_API AArmoryPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerStartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* AttachedCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AArmoryPlayerStart* LeftPlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AArmoryPlayerStart* RightPlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStrategyPlayerState> OwningPlayerState;
    
    AArmoryPlayerStart(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AStrategyPlayerState* GetRightPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AStrategyPlayerState* GetLeftPlayer() const;
    
};

