#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/Object.h"
#include "CinematicEvent.generated.h"

class ACinematicWaypoint;
class AHeroCharacterBase;
class AMonsterCharacterBase;
class ASolsticeCharacterBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TWINSTICK_API UCinematicEvent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveToWaypoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACinematicWaypoint* WaypointToMoveTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StoppingRadius;
    
    UCinematicEvent();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WaypointEntered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SequenceFinished();
    
    UFUNCTION(BlueprintCallable)
    void SequenceActivated(ASolsticeCharacterBase* InHero);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecievedSequenceActivated();
    
    UFUNCTION(BlueprintCallable)
    void NextSequence();
    
    UFUNCTION(BlueprintCallable)
    void MoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMonsterCharacterBase* GetMonster() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHeroCharacterBase* GetHero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeCharacterBase* GetCharacter() const;
    
};

