#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "BotData.h"
#include "ESolsticeHeroClass.h"
#include "ESuitTier.h"
#include "MarineShoutData.h"
#include "PowerSuit.h"
#include "SavedModule.h"
#include "SuitDescription.h"
#include "Templates/SubclassOf.h"
#include "MarineClassData.generated.h"

class APrimaryWeaponBase;
class ASecondaryWeaponBase;
class UMaterialInterface;
class USkeletalMesh;
class UTexture2D;

UCLASS(Blueprintable)
class TWINSTICK_API UMarineClassData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DescriptionRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarineShoutData> Shouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeHeroClass MarineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarineClassEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredCampaignTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredProfileTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DLCRequirementCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> SkeletonMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultPrimaryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultSecondaryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESuitTier, FPowerSuit> SuitMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APrimaryWeaponBase> DefaultPrimaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASecondaryWeaponBase> DefaultSecondaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedModule> DefaultLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESuitTier DefaultSuitTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<APrimaryWeaponBase>> PrimaryWeaponsRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ASecondaryWeaponBase>> SecondaryWeaponsRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBotData ClassBotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBotData SkirmishBotData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CachedIdentifier;
    
    UMarineClassData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMarineClassEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSuitDescription GetSuitDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<ASecondaryWeaponBase>> GetRandomSecondaryWeaponArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<APrimaryWeaponBase>> GetRandomPrimaryWeaponArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ASecondaryWeaponBase> GetDefaultSecondaryWeaponClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetDefaultSecondaryColor(ESuitTier SuitTier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<APrimaryWeaponBase> GetDefaultPrimaryWeaponClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetDefaultPrimaryColor(ESuitTier SuitTier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetClassIcon() const;
    
};

