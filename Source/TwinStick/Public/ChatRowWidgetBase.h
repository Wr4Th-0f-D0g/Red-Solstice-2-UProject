#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Blueprint/UserWidget.h"
#include "ChatRowWidgetBase.generated.h"

class ASolsticePlayerState;
class UFMODEvent;
class USolsticeRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UChatRowWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USolsticeRichTextBlock* InternalRichTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WrapTextLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticePlayerState* SenderPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SenderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomStyleCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle HideTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime MessageTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BlockedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSenderIsAvoided;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SoundEvent;
    
    UChatRowWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetupChatRow(ASolsticePlayerState* InPlayerState, const FString& InMessage, const FString& StyleCode, float MessageLifetime);
    
    UFUNCTION(BlueprintCallable)
    void SetTextInternal(const FString& InSenderName, const FString& InMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChatMessage(const FText& InSender, const FText& InMessage, const FLinearColor& Color, float Lifetime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostChatTextCopied();
    
    UFUNCTION(BlueprintCallable)
    void OnGameOptionsChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnAvoidedPlayersChanged();
    
    UFUNCTION(BlueprintCallable)
    void FinishRemovalTimer();
    
};

