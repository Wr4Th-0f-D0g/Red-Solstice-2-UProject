#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AudioOptionsObject.generated.h"

UCLASS(Blueprintable, Config=Game)
class TWINSTICK_API UAudioOptionsObject : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectsVolumeSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MusicVolumeSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DialogueVolumeSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmbianceVolumeSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MasterVolumeSettings;
    
public:
    UAudioOptionsObject();

    UFUNCTION(BlueprintCallable)
    void SetMusicVolume(float Val);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterVolume(float Val);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectsVolume(float Val);
    
    UFUNCTION(BlueprintCallable)
    void SetDialogueVolume(float Val);
    
    UFUNCTION(BlueprintCallable)
    void SetAmbianceVolume(float Val);
    
    UFUNCTION(BlueprintCallable)
    void SaveAll();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMusicVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMasterVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDirty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEffectsVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDialogueVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAmbianceVolume() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplySoundSettings();
    
};

