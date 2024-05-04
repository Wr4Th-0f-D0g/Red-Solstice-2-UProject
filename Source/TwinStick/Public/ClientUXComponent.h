#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EGameMessage.h"
#include "EGameMessageType.h"
#include "ClientUXComponent.generated.h"

class UDataTable;
class UFMODEvent;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UClientUXComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UClientUXComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OwnerSpawnEmitterAttached(UParticleSystem* EmitterTemplate);
    
    UFUNCTION(BlueprintCallable)
    void OwnerSendGameMessageFromSimpleText_Integer(const UDataTable* DataTable, FName RowName, int32 InInteger, FLinearColor Color, EGameMessageType MessageType, EGameMessage GameMessage);
    
    UFUNCTION(BlueprintCallable)
    void OwnerSendGameMessageFromSimpleText(const UDataTable* DataTable, FName RowName, const FLinearColor Color, EGameMessageType MessageType, EGameMessage GameMessage);
    
    UFUNCTION(BlueprintCallable)
    void OwnerSendGameMessage(const FText& MessageText, const FLinearColor Color, EGameMessageType MessageType, EGameMessage GameMessage);
    
    UFUNCTION(BlueprintCallable)
    void OwnerPlaySoundAttached(UFMODEvent* Event);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSpawnEmitterAttached(UParticleSystem* EmitterTemplate);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendGameMessageFromSimpleText_Integer(const UDataTable* DataTable, FName RowName, int32 InInteger, FLinearColor Color, EGameMessageType MessageType, EGameMessage GameMessage);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendGameMessageFromSimpleText(const UDataTable* DataTable, FName RowName, const FLinearColor Color, EGameMessageType MessageType, EGameMessage GameMessage);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendGameMessage(const FText& MessageText, const FLinearColor Color, EGameMessageType MessageType, EGameMessage GameMessage);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlaySoundAttached(UFMODEvent* Event);
    
};

