#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerController.h"
#include "MissionGenerationData.h"
#include "PlayerCharacterNameMessageRecievedDelegateDelegate.h"
#include "PlayerGameChatMessageRecievedDelegateDelegate.h"
#include "PlayerGameSystemMessageRecievedDelegateDelegate.h"
#include "SolsticePlayerController.generated.h"

class AHeroCharacterBase;
class ASolsticePlayerState;

UCLASS(Blueprintable)
class TWINSTICK_API ASolsticePlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerGameChatMessageRecievedDelegate OnPlayerGameChatMessageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerGameSystemMessageRecievedDelegate OnPlayerGameSystemMessageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCharacterNameMessageRecievedDelegate OnPlayerCharacterNameMessageReceived;
    
    ASolsticePlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSendGameSystemMessageToAll(const FText& MessageText, const FLinearColor& MessageColor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSendGameChatMessage(const FString& MessageText);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSendCharacterNameMessageToAll(const FText& MessageText, const FLinearColor& MessageColor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestMissionGenerationData();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNotifyDestroyingSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHeroCharacterBase* GetHero() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveMissionGenerationData(const FMissionGenerationData& MissionGenerationData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveGameSystemMessage(const FText& MessageText, const FLinearColor& MessageColor);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveGameChatMessage(ASolsticePlayerState* SenderPlayerState, const FString& MessageText);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveCharacterNameMessage(const FText& MessageText, const FLinearColor& MessageColor);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHostLeavingMatch();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientFailedMissionGenerationData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeGamepadType(FName GamepadName);
    
};

