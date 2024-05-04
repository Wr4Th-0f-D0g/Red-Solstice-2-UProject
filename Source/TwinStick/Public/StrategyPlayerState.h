#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "CharacterData.h"
#include "CharacterEquipment.h"
#include "CharacterWeaponData.h"
#include "CustomVisualDefinition.h"
#include "EAttribute.h"
#include "ESkillSlot.h"
#include "ESolsticeHeroClass.h"
#include "ESuitSection.h"
#include "EquipmentContainer.h"
#include "EquippedModule.h"
#include "ModuleContainer.h"
#include "PowerSuitModel.h"
#include "ReplicatedModule.h"
#include "SavedCharacterData.h"
#include "SavedCharacterWeaponData.h"
#include "SavedModule.h"
#include "SolsticeDeployedVehicleData.h"
#include "SolsticePendingBuff.h"
#include "SolsticePlayerState.h"
#include "StrategyViewConfiguration.h"
#include "Templates/SubclassOf.h"
#include "StrategyPlayerState.generated.h"

class AArmoryPlayerStart;
class ACameraActor;
class AHeroCharacterBase;
class ALoadoutGarageBase;
class APrimaryWeaponBase;
class ASecondaryWeaponBase;
class ASolsticeWeaponBase;
class AStrategyControllerBase;
class AStrategyPlayerState;
class AWeaponWorkbenchBase;
class UDataTable;
class ULoadoutValidationBase;
class UModuleEquipStatus;
class USkill;
class USolsticeBuffBase;

UCLASS(Blueprintable)
class TWINSTICK_API AStrategyPlayerState : public ASolsticePlayerState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponModified, const FCharacterWeaponData&, WeaponData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FViewContextChanged, AStrategyPlayerState*, NewViewContext);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVehicleChanged, const FSolsticeDeployedVehicleData&, OldVehicle, const FSolsticeDeployedVehicleData&, NewVehicle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerViewChanged, FGameplayTag, PlayerView);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerReadyChanged, bool, NewReady);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FModulesChanged, const FEquippedModule&, Module, bool, Added);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMarineClassChanged, const FPowerSuitModel&, PowerSuitModel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLoadoutChanged, const FCharacterData&, Loadout);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEquipmentChanged, const FCharacterEquipment&, Equipment, bool, Added);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCustomSkinChanged, const FGameplayTag&, SkinTag);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FClassRequestResponseReceived);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AWeaponWorkbenchBase> WorkbenchActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerReady, meta=(AllowPrivateAccess=true))
    bool bPlayerReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerReadyChanged OnPlayerReadyChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACameraActor> CameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerStart, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AArmoryPlayerStart> PlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* LoadoutPreviewHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWeaponWorkbenchBase* WorkbenchActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeWeaponBase* WorkbenchPreviewWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALoadoutGarageBase* GarageActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStrategyPlayerState> ViewContext;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewContextChanged OnViewContextChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PremadeName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarineClassChanged OnMarineClassChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CustomVisual, meta=(AllowPrivateAccess=true))
    FCustomVisualDefinition CustomVisual;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomSkinChanged OnCustomSkinChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FModuleContainer ReplicatedModules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquippedModule> EquippedModules;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponModified OnWeaponModified;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModulesChanged OnModulesChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VehicleData, meta=(AllowPrivateAccess=true))
    FSolsticeDeployedVehicleData VehicleData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleChanged OnVehicleChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeBuffBase* PowerBuff;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentChanged OnEquipmentChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeBuffBase* WeaponBuff;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClassRequestResponseReceived OnClassRequestResponseReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PremadeCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SuitModules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CustomBotTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticePendingBuff> BuffsPendingAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UModuleEquipStatus* LastEquipStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FEquipmentContainer ReplicatedGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterEquipment> EquippedGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULoadoutValidationBase* ValidationObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerViewChanged OnPlayerViewChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerCurrentView, meta=(AllowPrivateAccess=true))
    FGameplayTag PlayerCurrentView;
    
public:
    AStrategyPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WeaponInvalidated(TSubclassOf<ASolsticeWeaponBase> InvalidatedWeapon, TSubclassOf<ASolsticeWeaponBase> DefaultWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WeaponDataWeaponClassIsDefaultForCurrentPowerSuit(TSoftClassPtr<ASolsticeWeaponBase> InWeaponSoftClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ValidateClassLimit(const FCharacterData& NewData);
    
    UFUNCTION(BlueprintCallable)
    void UpdateModuleSelection();
    
    UFUNCTION(BlueprintCallable)
    void StaticBroadcastModulesChanged();
    
    UFUNCTION(BlueprintCallable)
    void SetWorkbenchPreviewWeapon(ASolsticeWeaponBase* NewPreviewWeapon);
    
    UFUNCTION(BlueprintCallable)
    void SetViewContext(AStrategyPlayerState* NewViewContext);
    
    UFUNCTION(BlueprintCallable)
    void SetupPremade(const FCharacterData& InData);
    
    UFUNCTION(BlueprintCallable)
    void SetupLoadoutHero();
    
    UFUNCTION(BlueprintCallable)
    void SetupCharacterUI();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SetSkill(ESkillSlot InSkillSlot, int32 InSlotIndex, TSubclassOf<USkill> InSkillClass);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerReady(bool NewReady);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredSuitColor(FLinearColor InColor, bool bPrimaryColor);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultColorForClass();
    
    UFUNCTION(BlueprintCallable)
    void SetCustomSkin(FGameplayTag InSkinTag, bool bUseDefaultColors);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetVehicleData(const FSolsticeDeployedVehicleData& NewVehicleData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerReady(bool NewReady);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPlayerName(const FString& NewName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPlayerCurrentView(FGameplayTag ViewTag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetCustomVisualDefinition(const FCustomVisualDefinition& NewVisual);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetCharacterData(const FCharacterData& NewData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerModifyVehicle(const FSolsticeDeployedVehicleData& NewVehicleData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAdjustWeapon(ASolsticeWeaponBase* Weapon, const FCharacterWeaponData& WeaponData);
    
    UFUNCTION(BlueprintCallable)
    FCharacterData SavePlayerData();
    
    UFUNCTION(BlueprintCallable)
    void SaveMarineSetup(ESolsticeHeroClass InClass, int32 InSlot, const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    void SaveClassPremade();
    
    UFUNCTION(BlueprintCallable)
    void SaveBotSetup();
    
    UFUNCTION(BlueprintCallable)
    void SaveBotPremade();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RemoveModule(const FReplicatedModule& OldModule);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RemoveGear(const FCharacterEquipment& OldGear);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlayerCanLoadPremadeLoadout(const FSavedCharacterData& SavedLoadout);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VehicleData(const FSolsticeDeployedVehicleData& OldVehicleData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerStart();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerReady();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerCurrentView();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CustomVisual(const FCustomVisualDefinition& OldVisual);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerChangedViews(const FStrategyViewConfiguration& CurrentView, const FStrategyViewConfiguration& PreviousView);
    
    UFUNCTION(BlueprintCallable)
    FSavedCharacterData MakeSavedCharacterData(const FString& SetupName, int32 Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterData MakeCharacterData() const;
    
    UFUNCTION(BlueprintCallable)
    void LoadNetworkPremade(const FSavedCharacterData& InData);
    
    UFUNCTION(BlueprintCallable)
    void LoadMarineSetup(ESolsticeHeroClass InClass, int32 InSlot);
    
    UFUNCTION(BlueprintCallable)
    void LoadClassPremade();
    
    UFUNCTION(BlueprintCallable)
    void LoadBotPremade();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaveSlotFree(ESolsticeHeroClass InClass, int32 InSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllowedToHotJoin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeroReceived(AHeroCharacterBase* NewHero);
    
    UFUNCTION(BlueprintCallable)
    void HandleAttributeValueChanged(EAttribute InAttribute, float OldValue, float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterWeaponData GetSecondaryWeaponData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetSaveNamesForClass(ESolsticeHeroClass InClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSaveNameFor(ESolsticeHeroClass InClass, int32 InSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSavedCharacterWeaponData> GetSavedWeaponVariations(TSubclassOf<ASolsticeWeaponBase> WeaponClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterWeaponData GetPrimaryWeaponData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPowerSuitModel GetPowerSuitModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetPlayerCurrentView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AStrategyControllerBase* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfFreeModuleSlots(ESuitSection SuitSection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxPower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESolsticeHeroClass GetMarineClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UModuleEquipStatus* GetLastEquipStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInventoryItemEquipCount(FGameplayTag ItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquippedMedalSizeByName(const FName& ModuleName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FSavedModule> GetEquippedInventoryModules() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ASecondaryWeaponBase> GetDefaultSecondaryWeaponFor(FPowerSuitModel InPowerSuitModel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<APrimaryWeaponBase> GetDefaultPrimaryWeaponFor(FPowerSuitModel InPowerSuitModel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSavedModule> GetDefaultLoadoutFor(FPowerSuitModel InPowerSuitModel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESolsticeHeroClass GetDefaultHeroClass() const;
    
    UFUNCTION(BlueprintCallable)
    void EmptyModules();
    
    UFUNCTION(BlueprintCallable)
    void DeleteMarineSetup(ESolsticeHeroClass InClass, int32 InSlot);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOverClassLimits(ESolsticeHeroClass UnavailableClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ChangeHero(const FCharacterData& NewData, bool FirstSetup);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void AddModule(const FReplicatedModule& NewModule);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void AddGear(const FCharacterEquipment& NewGear);
    
};

