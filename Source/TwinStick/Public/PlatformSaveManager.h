#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "CachedPremadeLoadout.h"
#include "EProfileSaveType.h"
#include "ESaveGameType.h"
#include "ESolsticeHeroClass.h"
#include "SavedCharacterData.h"
#include "SavedCharacterWeaponData.h"
#include "SolsticeCampaignID.h"
#include "SolsticeProfileSaveCompleteDelegate.h"
#include "SolsticeSaveGameInfo.h"
#include "Templates/SubclassOf.h"
#include "PlatformSaveManager.generated.h"

class ASolsticeWeaponBase;
class UCampaign;

UCLASS(Blueprintable)
class TWINSTICK_API UPlatformSaveManager : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeProfileSaveComplete ProfileSaveCompleteDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProfileSaveExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CampaignSaveExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoadoutSaveExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCachedPremadeLoadout> CachedPremadeLoadouts;
    
    UPlatformSaveManager();

    UFUNCTION(BlueprintCallable)
    bool SaveWeaponTemplates(UCampaign* ActiveCampaign, TSubclassOf<ASolsticeWeaponBase> WeaponClass, const TArray<FSavedCharacterWeaponData>& WeaponTemplates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool SaveLoadoutForMarineClassInSlot(ESolsticeHeroClass HeroClass, int32 Slot, const FString& LoadoutName, const FSavedCharacterData& CharacterData, UCampaign* ActiveCampaign) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaveSlotFree(ESolsticeHeroClass HeroClass, int32 Slot, UCampaign* ActiveCampaign) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetWeaponTemplateSaveDirectory(UCampaign* ActiveCampaign) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUserProfileSaveFileNameFor(EProfileSaveType ProfileSaveType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUserLoadoutFileNameFor(ESolsticeHeroClass HeroClass, int32 Slot, UCampaign* ActiveCampaign) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUserCampaignSaveDirectory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpecialSaveFileNameForCampaign(FSolsticeCampaignID& CampaignID, ESaveGameType SaveType, FString& OutSaveFileName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSavedWeaponVariationsFor(UCampaign* ActiveCampaign, TSubclassOf<ASolsticeWeaponBase> WeaponClass, TArray<FSavedCharacterWeaponData>& OutWeaponVariations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSaveDirectoryForCampaign(FSolsticeCampaignID& CampaignID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRootSaveDirectory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRootGameDataDirectory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRootConfigDirectory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetProfileSaveDirectory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxNumCampaignSaves() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxNumCampaigns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetLoadoutForMarineClassInSlot(ESolsticeHeroClass HeroClass, int32 Slot, FSavedCharacterData& OutCharacterData, UCampaign* ActiveCampaign) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLoadDirectoryForCampaign(const FSolsticeCampaignID& CampaignID, FString& OutDirectory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLastSaveGameForCampaign(const FSolsticeCampaignID& CampaignID, FString& OutFilename, ESaveGameType SaveType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCampaignSaveDirectoryFor(FSolsticeCampaignID& CampaignID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCampaignSaveDirectory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FSolsticeCampaignID> GetAllUserCampaigns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetAllSavesForCampaign(const FSolsticeCampaignID& CampaignID, TArray<FSolsticeSaveGameInfo>& SaveGames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetAllLoadoutsForMarineClass(ESolsticeHeroClass HeroClass, TArray<FSavedCharacterData>& OutLoadouts, UCampaign* ActiveCampaign) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesCampaignSaveExist(UCampaign* ActiveCampaign, const FString& Name, FString& OutFullPath) const;
    
    UFUNCTION(BlueprintCallable)
    bool DeleteLoadoutForMarineClassInSlot(ESolsticeHeroClass HeroClass, int32 Slot, UCampaign* ActiveCampaign);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteFiles(const TArray<FString>& FilePaths);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteFile(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteCampaignSave(UCampaign* ActiveCampaign, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteCampaign(const FSolsticeCampaignID& CampaignID);
    
    UFUNCTION(BlueprintCallable)
    void ClearCachedPremades();
    
    UFUNCTION(BlueprintCallable)
    bool CanCreateNewCampaign(int32& OutNumCampaigns);
    
    UFUNCTION(BlueprintCallable)
    bool CanCreateCampaignSave(FSolsticeCampaignID& CampaignID, int32& OutNumCampaignSaves);
    
};

