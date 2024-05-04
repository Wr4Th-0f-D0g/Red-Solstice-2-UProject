#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "ESolsticeSteamChatEntryType.h"
#include "Templates/SubclassOf.h"
#include "ChatWidgetBase.generated.h"

class ASolsticePlayerState;
class UBorder;
class UChatRowWidgetBase;
class USizeBox;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UChatWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UChatRowWidgetBase> ChatRowClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxChatRowItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESolsticeSteamChatEntryType, FText> EnumToText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ChatPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideTimerEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChatHideDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* ChatMainSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FText> ChatTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* ChatInputAreaBorder;
    
    UChatWidgetBase();

    UFUNCTION(BlueprintCallable)
    void UpdateOptionsSettings();
    
    UFUNCTION(BlueprintCallable)
    void SendChatMessage(const FText& ChatMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LobbyPlayerChatMessage(ASolsticePlayerState* SenderPlayerState, const FText& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LobbyGameChatMessage(const FText& Message, const FLinearColor& Color, bool bIsLocal);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameSystemMessageReceived(const FText& Message, const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameChatMessageReceived(ASolsticePlayerState* SenderPlayerState, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void CreateChatRow(ASolsticePlayerState* SenderPlayerState, const FString& MessageText, FGameplayTag MessageType, float MessageTimer);
    
    UFUNCTION(BlueprintCallable)
    void ClearChatPanel();
    
};

