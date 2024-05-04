#pragma once
#include "CoreMinimal.h"
#include "SolsticeMainUserWidget.h"
#include "MainMenu.generated.h"

class ULeaderboardInfo;
class UStrategyMenuBase;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UMainMenu : public USolsticeMainUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PatchnotesFileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStrategyMenuBase> ArchivesWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitingToQuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PatchnotesString;
    
public:
    UMainMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void ShowArchiveWidget();
    
    UFUNCTION(BlueprintCallable)
    void QuitGame();
    
    UFUNCTION(BlueprintCallable)
    void LeaderboardsUploaded(ULeaderboardInfo* LeaderboardInfo, bool Success);
    
    UFUNCTION(BlueprintCallable)
    void InitiateQuitGame();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPatchNotesText();
    
};

