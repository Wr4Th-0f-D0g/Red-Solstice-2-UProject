#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "Components/SlateWrapperTypes.h"
#include "AttributeInfo.h"
#include "CharacterWeaponData.h"
#include "EAirSupportLevel.h"
#include "EArtillerySupportLevel.h"
#include "EAttribute.h"
#include "EDifficulty.h"
#include "EHordeArrivalTime.h"
#include "ESecondaryMissionFrequency.h"
#include "ESolsticeHeroClass.h"
#include "FiringModeAttributes.h"
#include "MarineBotSettings.h"
#include "ModuleInfo.h"
#include "SolsticeAttributeModifier.h"
#include "SolsticeVehicleModuleData.h"
#include "Templates/SubclassOf.h"
#include "TitleAndDataText.h"
#include "WeaponData.h"
#include "SolsticeUILibrary.generated.h"

class UBehaviorTree;
class UObject;
class USkill;
class USolsticeBuffBase;
class UTextBlock;
class UUserWidget;
class UVehicleSkill;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeUILibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USolsticeUILibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool WeaponDataIsForPrimaryWeapon(const FWeaponData& InWeaponData);
    
    UFUNCTION(BlueprintCallable)
    static void TickSlateImmediately();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetFilteredTextBlockText(const UObject* WorldContextObject, const FString& Text, UTextBlock* TextBlock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESlateVisibility SelectWidgetVisibility(bool Condition, bool HitTestable, bool ShouldCollapse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBackKey(FKey InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAcceptKey(FKey InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCharacterWeaponData GetVehicleModuleWeaponData(const FSolsticeVehicleModuleData& VehicleModuleData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UVehicleSkill> GetVehicleModuleSkill(const FSolsticeVehicleModuleData& VehicleModuleData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<USolsticeBuffBase> GetVehicleModuleBuff(const FSolsticeVehicleModuleData& VehicleModuleData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateBrush GetSlateBrushForGamepadControlBinding(const UObject* Context, FName ControlName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSecondaryMissionValueText(ESecondaryMissionFrequency MissionFrequency);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetProjectilesFiredFromFiringModeAttributes(const FFiringModeAttributes& FiringModeAttribute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetMarineClassDisplayName(ESolsticeHeroClass InClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FSlateBrush GetInputIconBrushForKey(const UObject* WorldContext, FKey InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetHordeArrivalValueText(EHordeArrivalTime HordeArrival);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<USkill> GetGrantedSkillClass(const FModuleInfo& ModuleInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkill* GetGrantedSkillCDO(const FModuleInfo& ModuleInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<USolsticeBuffBase> GetGameplayBuff(const FModuleInfo& ModuleInfo);
    
    UFUNCTION(BlueprintCallable)
    static FSlateBrush GetGamepadIconForKey(FKey InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetGamepadIconDecoratorFromInputActionMapping(const UObject* Context, FInputActionKeyMapping InputActionKeyMapping);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBehaviorTree* GetCustomBehaviorTree(const FMarineBotSettings& MarineBotSettings);
    
    UFUNCTION(BlueprintCallable)
    static FTitleAndDataText GetAttributeModifierSeparatedText(const FSolsticeAttributeModifier& AttributeModifier, bool bForceShowClamps, bool& bAttributeValuePositive, int32 Stacks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetAttributeModifierDisplayText(const FSolsticeAttributeModifier& AttributeModifier, int32 Stacks, bool bAlwaysSign);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetAttributeModifierArrayDisplayText(const TArray<FSolsticeAttributeModifier>& ArrayOfModifiers, int32 Stacks, bool bAlwaysSign);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAttributeInfo GetAttributeInfoForAttribute(EAttribute InAttribute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetAspectDescriptionText(FName AspectName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetArtillerySupportValueText(EArtillerySupportLevel ArtillerySupport);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetAirSupportValueText(EAirSupportLevel AirSupport);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool GamePadModeActive(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatFloatToText(float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FlushLocalInputKeys(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText DifficultyToText(EDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName DifficultyToName(EDifficulty InDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText DifficultyStringToText(const FString& DifficultyString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckOrCreateWidget(UObject* WorldContextObject, UPARAM(Ref) UUserWidget*& WidgetPointer, TSubclassOf<UUserWidget> WidgetClass);
    
};

