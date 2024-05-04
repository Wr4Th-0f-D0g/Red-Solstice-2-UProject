#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "BlackOpsDeployedDelegate.h"
#include "BotCasualtyReport.h"
#include "MarsTime.h"
#include "Templates/SubclassOf.h"
#include "BotManager.generated.h"

class ARegion;
class UBotStatus;
class UDataTable;
class UMarineClassData;
class USolsticeBuffBase;

UCLASS(Blueprintable)
class TWINSTICK_API UBotManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CustomBotTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBotStatus> BotStatusClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UMarineClassData*> ClassDataAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBotStatus*> AvailableBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBotStatus*> BlackOpsOperatives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> BotLevelBuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BotNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BotSurnames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BotNickNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBotCasualtyReport> BotCasualties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBotStatus* SelectedBot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackOpsDeployed OnBlackOpsDeployed;
    
    UBotManager();

    UFUNCTION(BlueprintCallable)
    void HandleBotDied(UBotStatus* InBotStatus, const FMarsTime& InCampaignTime);
    
    UFUNCTION(BlueprintCallable)
    void DeployBlackOps(UBotStatus* BotStatus, ARegion* TargetRegion);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UBotStatus* CreateCustomBot(const UObject* WorldContextObject, FGameplayTag CustomBotTag, int32 BotLevel, bool bConsumeLevelData, bool bOverrideData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDeployBlackOps(UBotStatus* BotStatus, ARegion* TargetRegion) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BotNameIsAvailable(const FString& NewName) const;
    
    UFUNCTION(BlueprintCallable)
    UBotStatus* AddCustomBot(FGameplayTag InBotTag);
    
    UFUNCTION(BlueprintCallable)
    UBotStatus* AddClassBot(FGameplayTag InBotTag);
    
    UFUNCTION(BlueprintCallable)
    void AddBotToRoster(UBotStatus* BotStatus);
    
};

