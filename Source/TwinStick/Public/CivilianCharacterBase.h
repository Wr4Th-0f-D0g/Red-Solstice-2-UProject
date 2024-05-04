#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CivilianChosenMovementChangedDelegate.h"
#include "CivilianMovementStatusChangedDelegate.h"
#include "CivilianWaitTypeChangedDelegate.h"
#include "ECivilianChosenMovement.h"
#include "ECivilianMovementStatus.h"
#include "ECivilianWaitType.h"
#include "SolsticeCharacterBase.h"
#include "CivilianCharacterBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API ACivilianCharacterBase : public ASolsticeCharacterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECivilianMovementStatus MovementStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECivilianWaitType WaitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECivilianChosenMovement ChosenMovement;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCivilianChosenMovementChanged OnChosenMovementChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCivilianMovementStatusChanged OnMovementStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCivilianWaitTypeChanged OnWaitTypeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ChosenWaypoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Waypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEvacuating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEnterEvac;
    
    ACivilianCharacterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStandIdle(bool bRegisterWithAI, bool bMoveAround);
    
    UFUNCTION(BlueprintCallable)
    void SelectMovement(ECivilianChosenMovement NewMovement);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveToNextRallyPoint();
    
    UFUNCTION(BlueprintCallable)
    void GotoWaitType(ECivilianWaitType NewWait);
    
    UFUNCTION(BlueprintCallable)
    void GotoMovementStatus(ECivilianMovementStatus NewStatus);
    
};

