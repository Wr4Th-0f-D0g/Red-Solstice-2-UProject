#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Styling/SlateTypes.h"
#include "EAirSupportLevel.h"
#include "EArtillerySupportLevel.h"
#include "EDifficulty.h"
#include "EHordeArrivalTime.h"
#include "ESecondaryMissionFrequency.h"
#include "MissionSetupControlsBase.generated.h"

class AMissionSetupActor;
class ARegion;
class AStrategyMission;
class USlider;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UMissionSetupControlsBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* SecondaryMissionSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* AirSupportSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* HordeControlSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* ArtillerySupportSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* InfestationLevelSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSliderStyle SliderStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SecondaryMissionsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* AirSupportText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HordeControlText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ArtillerySupportText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* InfestationLevelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESecondaryMissionFrequency, FName> SecondaryMissionLocMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAirSupportLevel, FName> AirSupportLocMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHordeArrivalTime, FName> HordeArrivalLocMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EArtillerySupportLevel, FName> ArtillerySupportLocMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMissionSetupActor* MissionSetupActor;
    
    UMissionSetupControlsBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMissionSetupActorBP(AMissionSetupActor* InSetupActor);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionSetupActor(AMissionSetupActor* InSetupActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostDifficultySettingChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSetupActorValueChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleSecondaryMissionFrequencyValueChanged(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleMSADifficultyChanged(EDifficulty NewDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void HandleHordeControlValueChanged(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleArtillerySupportValueChanged(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleAirSupportValueChanged(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARegion* GetRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AStrategyMission* GetMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSupplySlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumSecondaryMissionFrequencySliderValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumHordeArrivalSliderValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumArtillerySupportSliderValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumAirSupportSliderValue() const;
    
    UFUNCTION(BlueprintCallable)
    void ClientHandleSecondaryMissionFrequencyChanged(ESecondaryMissionFrequency InFrequency);
    
    UFUNCTION(BlueprintCallable)
    void ClientHandleHordeControlValueChanged(EHordeArrivalTime InArrivalTime);
    
    UFUNCTION(BlueprintCallable)
    void ClientHandleArtillerySupportValueChanged(EArtillerySupportLevel InSupportLevel);
    
    UFUNCTION(BlueprintCallable)
    void ClientHandleAirSupportLevelChanged(EAirSupportLevel InSupportLevel);
    
};

