#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ComponentMaterialsBackupStruct.h"
#include "DynamicMeshContainer.h"
#include "EEnemyThreatLevel.h"
#include "EIndicatorType.h"
#include "ESolsticeHeroClass.h"
#include "ESuitTier.h"
#include "EVaultableType.h"
#include "FOWRevealInterface.h"
#include "HeroMeleeDamageDelegateDelegate.h"
#include "HeroPromotedDelegate.h"
#include "HeroRevivedDelegate.h"
#include "ModuleInfo.h"
#include "PowerSuitModel.h"
#include "SolsticeCharacterBase.h"
#include "Templates/SubclassOf.h"
#include "HeroCharacterBase.generated.h"

class AAbilityDroneBase;
class AActor;
class AController;
class AFlashlightBase;
class AHeroControllerBase;
class AMovableDestrVehicleBase;
class APawn;
class APlayerController;
class ASolsticeDrivableVehicle;
class ASolsticePlayerState;
class ASolsticeWeaponBase;
class UAnimInstance;
class UArrowComponent;
class UBoxComponent;
class UClientUXComponent;
class UDataTable;
class UEnvQuery;
class UFMODAudioComponent;
class UFMODEvent;
class UFOWComponent;
class UHeroSkillsComponent;
class UInventoryComponent;
class UMapDynamicActorComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMeshComponent;
class UMutatedMarineComponent;
class UNavigationQueryFilter;
class UParticleSystem;
class UPowerSuitComponent;
class USceneComponent;
class USolsticeBuffBase;
class UStaticMeshComponent;
class UTextRenderComponent;
class UUserWidget;
class UZiplineMovementComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AHeroCharacterBase : public ASolsticeCharacterBase, public IFOWRevealInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VehicleExitPositionEQS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bCharacterNamePermanentHidden, meta=(AllowPrivateAccess=true))
    bool bCharacterNamePermanentHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PlayerLocatorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ReviveIgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverlapBarricades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarricadeOverlapRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> BarricadeOverlapQueryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* VaultBoxDetect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> VaultObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VaultDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* MechLeaveQueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* HeroMissionArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UArrowComponent* HeroMainArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* HeroMissionArrowText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* VehicleMissionArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UArrowComponent* VehicleMainArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* VehicleMissionArrowText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> MechExitQueryNavFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PlayerDetectedRoof;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USolsticeBuffBase> DamagedComponentBuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAbilityDroneBase> SaffronDroneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FComponentMaterialsBackupStruct> HeroOriginalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* FrozenMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ConcealedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasConcealedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasFrozenMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonsterProximityRadius;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeroPromoted OnHeroPromoted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFOWComponent* FOWComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* DeathInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> CharacterNameWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObserverModeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MarineDeadSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableInfiniteRevives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CharacterNameWidgetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsArmoryCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PremadeCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UMeshComponent*, UMaterialInstanceDynamic*> DynamicMeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CustomSkinTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FModuleInfo> SuitModules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UMeshComponent*> SuitMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UMeshComponent*> TaggedMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ModulesPendingAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SuitModulesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDynamicMeshContainer DynamicMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FlashLightAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFlashlightBase> FlashLightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMutatedMarineComponent* MutatedMarineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMutatedMarineComponent> MutatedMarineComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFlashlightBase* FlashLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeleeWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FlashLightHidden, meta=(AllowPrivateAccess=true))
    bool bFlashLightHidden;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerOwner, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HeroPlayerState, meta=(AllowPrivateAccess=true))
    ASolsticePlayerState* HeroPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPowerSuitModel PowerSuitModel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HideWeapons, meta=(AllowPrivateAccess=true))
    bool bHideWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> MarineAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ReviveShockEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TeleportArriveEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ReviveStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* TeleportStopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ReviveFailedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* RevivedParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* RevivedSoundEffect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeroRevived OnHeroRevived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* LocalInteractionBoxComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPowerSuitComponent* PowerSuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UZiplineMovementComponent* ZiplineComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* TakeDamageSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* DamageSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyThreatLevel ThreatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText HeroName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapDynamicActorComponent* MapDynamicActorComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UClientUXComponent* ClientUXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeroSkillsComponent* SkillsComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeroMeleeDamageDelegate OnHeroMeleeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LevelUpParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsInDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterSaveName;
    
    AHeroCharacterBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Vault();
    
    UFUNCTION(BlueprintCallable)
    void SpawnFlashLight();
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponsHidden(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetupPremade(const FPowerSuitModel& InSuitModel);
    
    UFUNCTION(BlueprintCallable)
    void SetupHeroMeshes(const FPowerSuitModel& InSuitModel, bool bSequencer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShowEvacMarker(bool bShowMarker);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryColor(const FVector& InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRoofVisible(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRoofInvisible(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryColor(const FVector& InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetHeroPlayerState(ASolsticePlayerState* PS);
    
    UFUNCTION(BlueprintCallable)
    void SetHeroName(FText Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHeroControlsEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetFlashHidden(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEvacArrowDirection(float Yaw);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterNameWidgetHidden(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterNamePermanentHidden(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllIncapacitationStates();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceieveDoVault(EVaultableType VaultType, FVector MidPoint, FVector EndLocation, AActor* VaultActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerOwner();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HideWeapons();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HeroPlayerState();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_FlashLightHidden();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bCharacterNamePermanentHidden();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_LeaveMechAtLocation(const FVector& Vector);
    
    UFUNCTION(BlueprintCallable)
    void MutateHero();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRevivedEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MeshRemoved(UMeshComponent* RemovedMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MeshColorChanged(UMeshComponent* InMesh, const FVector& InColor, bool bPrimaryColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MarineClassChanged(ESolsticeHeroClass NewClass);
    
    UFUNCTION(BlueprintCallable)
    void LogPlayerMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_TeleportOffVehicle(AMovableDestrVehicleBase* DestrVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_TeleportOffDrivableVehicle(ASolsticeDrivableVehicle* DestrVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_HandleLeaveMechAtLocation(const FVector& Vector);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CanVault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_BarricadeDetected(AActor* OverlappedBarricade);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFollowerBot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideEvacArrow();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void HeroRevivedServer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeroRevivedClient();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasZeroIntegrity() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleTagRemoved(ASolsticeCharacterBase* Char, FGameplayTag RemovedTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleTagAdded(ASolsticeCharacterBase* Char, FGameplayTag AddedTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleSuitLevelChanged(int32 NewLevel, const FString& LevelUpMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleExperienceReward(float AccountXP, float MatchXP, FVector Location, AActor* Awardee, float Range);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESuitTier GetSuitTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldRevealFOW_Implementation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AAbilityDroneBase> GetSaffronDroneClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPowerSuitModel GetPowerSuitModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticePlayerState* GetPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPlayerPositionAdjustedZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetPlayerOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetMeshComponentWithTag(FName InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESolsticeHeroClass GetMarineClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* GetInventoryComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHeroName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFOWComponent* GetFOWComponent_Implementation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHeroControllerBase* GetAIController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeWeaponBase* GetActiveWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    void DoRevive(bool bTeleportToSafeZone, APawn* ReviveInstigator);
    
    UFUNCTION(BlueprintCallable)
    void DiscoverCharacterName(AController* InController, EIndicatorType IndicatorType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DamageRandomSkill();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRevived();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRejoinDead();
    
    UFUNCTION(BlueprintCallable)
    void CharacterRevivedTagChanged(FGameplayTag Tag, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanRevive() const;
    

    // Fix for true pure virtual functions not being implemented
};

