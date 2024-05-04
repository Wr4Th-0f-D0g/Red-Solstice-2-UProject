#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESolsticeLeaderboardDisplayType.h"
#include "LeaderboardEntryStruct.h"
#include "LeaderboardInfo.generated.h"

class UDownloadLeaderboardRequest;
class UFindLeaderboardRequest;
class UUploadLeaderboardRequest;

UCLASS(Blueprintable)
class TWINSTICK_API ULeaderboardInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeaderboardName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LeaderboardDisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LeaderboardDescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAscending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeLeaderboardDisplayType DisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDataBeingDownloaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDataBeingUploaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEntriesInvalidatedByNewData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFindLeaderboardRequest* FindLeaderboardRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDownloadLeaderboardRequest*> DownloadLeaderboardCallResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUploadLeaderboardRequest*> UploadLeaderboardCallResults;
    
public:
    ULeaderboardInfo();

    UFUNCTION(BlueprintCallable)
    void UploadScore();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLeaderboardUploadedOnlineSys(const FName SessionName, bool bSuccess);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerScoreDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeaderboardReadInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLeaderboardEntryStruct> GetEntryArray();
    
};

