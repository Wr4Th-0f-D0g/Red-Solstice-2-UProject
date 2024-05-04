#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "SolsticeGameUserSettings.generated.h"

class USolsticeGameUserSettings;

UCLASS(Blueprintable, Config=Engine)
class TWINSTICK_API USolsticeGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafeZoneScale;
    
    USolsticeGameUserSettings();

    UFUNCTION(BlueprintCallable)
    void SetSafeZone(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSafeZoneSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USolsticeGameUserSettings* GetSolsticeGameUserSettings();
    
    UFUNCTION(BlueprintCallable)
    float GetSafeZone() const;
    
};

