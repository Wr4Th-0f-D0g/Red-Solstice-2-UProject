#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "BTTask_MissionBase.h"
#include "MissionLocation.h"
#include "BTT_MissionLocationBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UBTT_MissionLocationBase : public UBTTask_MissionBase, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionLocation MissionLocation;
    
    UBTT_MissionLocationBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationValid(const FVector& InVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationInvalid(const FVector& InVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMinimapDisplayText() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetLocationsForConfiguredMission(const FMissionLocation& InConfiguredMission, TArray<FRotator>& OutRotations);
    
    UFUNCTION(BlueprintCallable)
    FVector GetLocationForConfiguredMission(const FMissionLocation& InConfiguredMission, FRotator& OutRotation);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

