#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BotInjuryTracker.h"
#include "BotLevel.h"
#include "BotLevelChangedDelegate.h"
#include "BotModuleUnlockedDelegate.h"
#include "BotRankChangedDelegate.h"
#include "BotSkillTrainedDelegate.h"
#include "BotSkillTree.h"
#include "CharacterWeaponData.h"
#include "CustomVisualDefinition.h"
#include "ESolsticeHeroClass.h"
#include "EquippedSkill.h"
#include "MarsTime.h"
#include "PowerSuitModel.h"
#include "SaveGameWeaponData.h"
#include "SavedModule.h"
#include "SolsticeSaveInterface.h"
#include "Templates/SubclassOf.h"
#include "BotStatus.generated.h"

class ARegion;
class ASolsticeWeaponBase;
class AStrategyPlayerState;
class UCharacterDataAsset;
class UDataTable;
class UTexture2D;

UCLASS(Blueprintable)
class UBotStatus : public UObject, public ISolsticeSaveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RankTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStrategyPlayerState> PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FString BotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag CustomBotTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString RegionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 BotLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBotLevelChanged OnBotLevelChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 BotRank;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBotRankChanged OnBotRankChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FPowerSuitModel PowerSuitModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 BotXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSkirmishXP_Awarded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Deployments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bInSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CampaignXP_Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkirmishXP_Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FBotLevel> BotLevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FBotInjuryTracker BotInjuries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BotTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SpawnTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedModule> UnlockedModules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSavedModule> EquippedModules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASolsticeWeaponBase> PrimaryWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASolsticeWeaponBase> SecondaryWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FCharacterWeaponData PrimaryWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FCharacterWeaponData SecondaryWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSaveGameWeaponData SavedPrimaryWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSaveGameWeaponData SavedSecondaryWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquippedSkill> MainSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquippedSkill> UtilitySkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FCustomVisualDefinition CustomVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector PrimaryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector SecondaryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag CustomSkinTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBotSkillTrained OnBotSkillTrained;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBotModuleUnlocked OnBotModuleUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxInjuries;
    
    UBotStatus();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryChangeBotName(const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    void SetBotLevel(int32 InLevel, bool bAdjustXP);
    
    UFUNCTION(BlueprintCallable)
    void SelectSkill(int32 InLevel, FGameplayTag InSkillTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssignedToBlackOps() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyUnassignedSkills() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSecondaryColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPrimaryColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextLevelForTraining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetModulesDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxInjuryCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharacterDataAsset* GetHeroData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESolsticeHeroClass GetHeroClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetClassIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FBotLevel> GetBotLevelData(const FBotSkillTree& InClassData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARegion* GetBlackOpsRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetAllSelectedBotSkills() const;
    
    UFUNCTION(BlueprintCallable)
    int32 ApplyInjury(const FMarsTime& InjuryTime);
    
    UFUNCTION(BlueprintCallable)
    void AddXP(int32 XP);
    

    // Fix for true pure virtual functions not being implemented
};

