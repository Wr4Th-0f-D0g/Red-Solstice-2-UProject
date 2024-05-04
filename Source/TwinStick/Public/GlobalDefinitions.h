#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "ESaveGameType.h"
#include "SolsticeCampaignID.h"
#include "SolsticeSaveGameInfo.h"
#include "GlobalDefinitions.generated.h"

class UUserWidget;

UCLASS(Blueprintable, Config=Game)
class TWINSTICK_API UGlobalDefinitions : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProfileSaveExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CampaignSaveExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PremadeSaveExtension;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProjectDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDemoGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFriendsOnlyLobbiesForDemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSubscribersToBypassDemoFriends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> OptionsMenuWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArmoryLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainMenuLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ArmoryListenURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SkirmishMissionNames;
    
    UGlobalDefinitions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSavePathForGame(FSolsticeCampaignID& CampaignID, ESaveGameType SaveType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSaveDirectoryForCampaign(FSolsticeCampaignID& CampaignID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSaveDirectory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetProfileSaveDirectory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPremadeSaveDirectory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLoadDirectoryForCampaign(const FSolsticeCampaignID& CampaignID, FString& OutDirectory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLastSaveGameForCampaign(const FSolsticeCampaignID& CampaignID, FString& OutFilename, ESaveGameType SaveType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetConfigDirectory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCampaignSaveDirectory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetAllSavesForCampaign(const FSolsticeCampaignID& CampaignID, TArray<FSolsticeSaveGameInfo>& SaveGames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesSaveAlreadyExist(const FString& Filename) const;
    
    UFUNCTION(BlueprintCallable)
    bool DeleteSave(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteCampaign(const FSolsticeCampaignID& CampaignID);
    
};

