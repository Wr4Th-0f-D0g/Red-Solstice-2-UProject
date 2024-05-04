#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameFramework/GameMode.h"
#include "GameplayTagContainer.h"
#include "NewPlayerLoggedInDelegateDelegate.h"
#include "ReplicatedAttributeModifier.h"
#include "SolsticeVehicleData.h"
#include "StrategyMissionData.h"
#include "Templates/SubclassOf.h"
#include "SolsticeGameMode.generated.h"

class AMissionSetupActor;
class APlayerController;
class APlayerState;
class ASolsticeDrivableVehicle;
class UActorComponent;
class UDataTable;

UCLASS(Blueprintable, NonTransient)
class TWINSTICK_API ASolsticeGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedAttributeModifier> SquadAttributeModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PremadesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultPremadeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMissionSetupActor* MissionSetupActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewPlayerLoggedInDelegate OnNewPlayerLoggedIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMissionSetupActor> MissionSetupActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> CampaignStateComponentClass;
    
    ASolsticeGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnbanPlayer(APlayerController* BannedPC);
    
    UFUNCTION(BlueprintCallable)
    ASolsticeDrivableVehicle* SpawnVehicleFromTag(FGameplayTag VehicleTag, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    ASolsticeDrivableVehicle* SpawnVehicle(const FSolsticeVehicleData& VehicleData, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    AMissionSetupActor* SpawnMissionSetupActorSkirmish(const FStrategyMissionData& InMissionData);
    
    UFUNCTION(BlueprintCallable)
    AMissionSetupActor* SpawnMissionSetupActorPIE(FDataTableRowHandle InMissionRow);
    
    UFUNCTION(BlueprintCallable)
    static void SeamlessTravelToArmory(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static void SeamlessTravelTo(APlayerController* PC, FName MAPNAME, const FString& GameModeAlias);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlayerEligibleForPlay(APlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable)
    void MarkPlayerEvacuated(APlayerController* EvacuatedPC);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_InitGameState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMissionSetupActor* FindMissionSetupActor() const;
    
    UFUNCTION(BlueprintCallable)
    void EvacUsed();
    
    UFUNCTION(BlueprintCallable)
    void BanPlayer(APlayerController* BannedPC);
    
};

