#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CharacterData.h"
#include "CharacterWeaponData.h"
#include "ELevelType.h"
#include "ESolsticeHeroClass.h"
#include "MissionGenerationData.h"
#include "PreClientTravelDelegateDelegate.h"
#include "SavedCharacterData.h"
#include "SavedLoadoutsReceivedDelegate.h"
#include "SavedSolsticeModifiedVehicleData.h"
#include "SolsticePlayerController.h"
#include "StrategyControllerBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API AStrategyControllerBase : public ASolsticePlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreClientTravelDelegate OnPreClientTravel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedLoadoutsReceived OnSavedLoadoutsReceived;
    
    AStrategyControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwapWeapons();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSwapWeapons();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSaveWeaponTemplate(const FCharacterWeaponData& SlotData, const FString& SlotName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSaveVehicleTemplate(const FSavedSolsticeModifiedVehicleData& VehicleData, int32 SaveIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSaveLoadout(const FSavedCharacterData& NewLoadout, int32 Slot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestSavedLoadouts(ESolsticeHeroClass MarineClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDeleteWeaponTemplate(const FCharacterWeaponData& SlotData, const FString& SlotName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDeleteVehicleTemplate(const FGameplayTag& VehicleTag, int32 SaveIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDeleteLoadout(ESolsticeHeroClass MarineClass, int32 Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadedWorld(ELevelType LevelType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendNetworkError(const FGameplayTag& ErrorTag);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveSavedLoadouts(ESolsticeHeroClass MarineClass, const TArray<FSavedCharacterData>& ClassLoadouts);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientForceUpdateMissionGenerationData(const FMissionGenerationData& MissionGenerationData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void CharacterSelectionChanged(const FCharacterData& CharacterData);
    
};

