#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Engine/EngineBaseTypes.h"
#include "GameFramework/GameUserSettings.h"
#include "GraphicsOptionsObject.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew, Config=Game)
class TWINSTICK_API UGraphicsOptionsObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TemporalAASamplesInFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TemporalAASamplesCurrentlySet;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockCursorToScreenInFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockCursorToScreenCurrentlySet;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FowQualityInFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FowQualitySet;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrightnessInFile;
    
public:
    UGraphicsOptionsObject();

    UFUNCTION(BlueprintCallable)
    void SetWasSavedAsFullscreenWithoutChanging(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetVSyncEnabled(bool aIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetVisualEffectQuality(int32 aQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetViewDistanceQuality(int32 aQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetUseDynamicResolution(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureQuality(int32 aQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowQuality(int32 aQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetResolutionScale(float aScale);
    
    UFUNCTION(BlueprintCallable)
    void SetResolution(FIntPoint Resolution);
    
    UFUNCTION(BlueprintCallable)
    void SetPostProcessingQuality(int32 aQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetOverallScalabilityLevel(int32 aLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLockCursor(bool InbIsLockCursor);
    
    UFUNCTION(BlueprintCallable)
    void SetHDREnabledSettings(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetFullscreenMode(TEnumAsByte<EWindowMode::Type> aWindowMode);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRateLimit(int32 aLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetFowQuality(int32 InFOWQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetFoliageQuality(int32 aQuatity);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultSettings();
    
    UFUNCTION(BlueprintCallable)
    void SetAntiAliasingQuality(int32 aQuality);
    
    UFUNCTION(BlueprintCallable)
    void SaveResolutionWitoutChanging();
    
    UFUNCTION(BlueprintCallable)
    void RevertResolution();
    
    UFUNCTION(BlueprintCallable)
    void RevertEverything();
    
    UFUNCTION(BlueprintCallable)
    void RequestResolutionChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWasSavedAsFullscreenWithoutChanging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVSyncEnabledSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVSyncEnabledLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVisualEffectQualitySettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVisualEffectQualityLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetViewDistanceQualitySettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetViewDistanceQualityLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseDynamicResolutionSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseDynamicResolutionLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTextureQualitySettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTextureQualityLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShadowQualitySettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShadowQualityLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntPoint GetResolutionSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResolutionScaleSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResolutionScaleLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntPoint GetResolutionLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPostProcessingQualitySettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPostProcessingQualityLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOverallScalabilityLevelSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOverallScalabilityLevelLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsResolutionConfirmed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMouseLockMode GetIsLockCursorSettingsEnumVal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLockCursorSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLockCursorLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDirty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHDREnabledSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHDREnabledLocal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EWindowMode::Type> GetFullscreenModeSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EWindowMode::Type> GetFullscreenModeLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFrameRateLimitSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFrameRateLimitLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFOWQualitySettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFowQualityLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFoliageQualitySettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFoliageQualityLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDoesNeedRestart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrightnessSetings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrightnessLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAntiAliasingQualitySettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAntiAliasingQualityLocal();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmResolution();
    
    UFUNCTION(BlueprintCallable)
    void ApplyResolution();
    
    UFUNCTION(BlueprintCallable)
    void ApplyNonResolution();
    
    UFUNCTION(BlueprintCallable)
    void ApplyFirstTimeDefaultResolution();
    
    UFUNCTION(BlueprintCallable)
    void ApplyBrightness(float InBrightness);
    
};

