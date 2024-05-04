#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameUserSettings.h"
#include "OptionsMenuGraphics.generated.h"

class UComboBoxString;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UOptionsMenuGraphics : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TemporalAAOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, FString> AspectRatioTextMap;
    
public:
    UOptionsMenuGraphics();

private:
    UFUNCTION(BlueprintCallable)
    void ToggleVSyncEnabled();
    
    UFUNCTION(BlueprintCallable)
    void ToggleVisualEffectQuality();
    
    UFUNCTION(BlueprintCallable)
    void ToggleViewDistanceQuality();
    
    UFUNCTION(BlueprintCallable)
    void ToggleTextureQuality();
    
    UFUNCTION(BlueprintCallable)
    void ToggleShadowQuality();
    
    UFUNCTION(BlueprintCallable)
    void TogglePostProcessingQuality();
    
    UFUNCTION(BlueprintCallable)
    void ToggleOverallScalabilityLevel();
    
    UFUNCTION(BlueprintCallable)
    void ToggleIsCursorLocked();
    
    UFUNCTION(BlueprintCallable)
    void ToggleFullscreenMode();
    
    UFUNCTION(BlueprintCallable)
    void ToggleFowQuality();
    
    UFUNCTION(BlueprintCallable)
    void ToggleFoilageQuality();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDynamicResolution();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleAspectRatioLock();
    
private:
    UFUNCTION(BlueprintCallable)
    void ToggleAntiAliasingQuality();
    
    UFUNCTION(BlueprintCallable)
    void SetVSyncEnabled(bool aIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetVisualEffectQuality(int32 aQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetViewDistanceQuality(int32 aQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureQuality(int32 aQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowQuality(int32 aQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetResolution(FIntPoint Resolution);
    
    UFUNCTION(BlueprintCallable)
    void SetPostProcessingQuality(int32 aQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetOverallScalabilityLevel(int32 aLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCursorLocked(bool InIsLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetFullscreenMode(TEnumAsByte<EWindowMode::Type> aWindowMode);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRateLimit(int32 aLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetFowQuality(int32 InIsUseLowQualityFow);
    
    UFUNCTION(BlueprintCallable)
    void SetFoliageQuality(int32 aQuatity);
    
    UFUNCTION(BlueprintCallable)
    void SetAntiAliasingQuality(int32 aQuatity);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitWidescreenAspectRationDropdownBox(UComboBoxString* InComboBox);
    
    UFUNCTION(BlueprintCallable)
    void InitCobboBoxForResolution(UComboBoxString* aBox);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetVSyncEnabledText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVSyncEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetVisulaEffectQualityText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVisualEffectQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetViewDistanceQualityText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetViewDistanceQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTextureQualityText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTextureQuality();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStringFromAspectRatio(float InRatio);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetShadowQualityText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShadowQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetResolutionTextY();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetResolutionTextX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetResolutionTextFull();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntPoint GetResolution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetQualityLevelDescriptionFromNumeric(int32 aNumericVal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPostProcessingQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPostPorcessingText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetOverallScalabilityLevelText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOverallScalabilityLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetOnOffDescriptionFromBool(bool aBool);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetIsCursorLockedText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCursorLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFullscreenModeText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFullScreenModeDescritptionFromEnum(TEnumAsByte<EWindowMode::Type> aEnum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EWindowMode::Type> GetFullscreenMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFrameRateLimit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFrameLimitText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFowQualityText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFOWQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFoliageQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFoilageQualityText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDynamicResolutionText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDesktopResolutionTextFull();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntPoint GetDesktopResolution();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAspectRatioFromString(const FString& inString) const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAntiAliasingQualityText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAntiAliasingQuality();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAllAvailableResolutionsAsStrings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntPoint ConvertStringToIntPoint(const FString& aString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ConvertIntPointToString(FIntPoint aPoint);
    
};

