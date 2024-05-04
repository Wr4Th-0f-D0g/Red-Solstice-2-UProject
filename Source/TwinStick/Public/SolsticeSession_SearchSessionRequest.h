#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESessionSearchDistance.h"
#include "ESolsticeSessionOnlineMode.h"
#include "SolsticeSession_FindSessionsFinishedDynamicDelegate.h"
#include "SolsticeSession_SearchSessionRequest.generated.h"

class USolsticeSession_SearchResult;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeSession_SearchSessionRequest : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeSessionOnlineMode OnlineMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLobbies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSearchResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PingBucketSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LobbyGameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideStartedGames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESessionSearchDistance SearchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchTypeFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USolsticeSession_SearchResult*> Results;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeSession_FindSessionsFinishedDynamic K2_OnSearchFinished;
    
public:
    USolsticeSession_SearchSessionRequest();

};

