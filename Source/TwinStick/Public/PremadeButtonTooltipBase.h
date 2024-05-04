#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SavedCharacterData.h"
#include "PremadeButtonTooltipBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UPremadeButtonTooltipBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedCharacterData SavedData;
    
    UPremadeButtonTooltipBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupSavedSkillDisplay(const TArray<FName>& SkillNames);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupSavedModules(const TMap<FName, int32>& Modules);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupModuleSizeDisplay(int32 DefenseMax, int32 DefenseCurrent, int32 OffenseMax, int32 OffenseCurrent, int32 SupportMax, int32 SupportCurrent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSecondaryWeaponDisplay(FName WeaponName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPrimaryWeaponDisplay(FName WeaponName);
    
};

