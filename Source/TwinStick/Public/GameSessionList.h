#pragma once
#include "CoreMinimal.h"
#include "ESessionSortType.h"
#include "SessionSortInfo.h"
#include "SolsticeSessionSearchFilter.h"
#include "StrategyMenuBase.h"
#include "Templates/SubclassOf.h"
#include "GameSessionList.generated.h"

class UGameSessionRow;
class USolsticeSession_SearchSessionRequest;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UGameSessionList : public UStrategyMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* SessionsVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameSessionRow> SessionRowClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeSessionSearchFilter LobbyOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSessionSortInfo SessionSortInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USolsticeSession_SearchSessionRequest* SessionRequest;
    
public:
    UGameSessionList();

protected:
    UFUNCTION(BlueprintCallable)
    void SortRowsByCurrentSortSettings();
    
    UFUNCTION(BlueprintCallable)
    void SetSessionSortType(ESessionSortType InSortType, bool bCallSort);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRefreshButtonEnabled(bool bNewEnabled);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestMoreInfoForRow(UGameSessionRow* RowWidget);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshSessions();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostSessionDataReady(int32 CurrentIndexFound);
    
};

