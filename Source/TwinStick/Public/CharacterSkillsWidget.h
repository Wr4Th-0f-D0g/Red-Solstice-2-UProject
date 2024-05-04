#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterSkillsWidget.generated.h"

class ARTS_PlayerController;
class UEnergyComponent;
class UProgressBar;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UCharacterSkillsWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* EnergyBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* EnergyStances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* EnergyStatusText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* EnergyRegenRate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARTS_PlayerController* RTS_Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnergyComponent* EnergyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentEnergyRegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentEnergyPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentEnergy;
    
public:
    UCharacterSkillsWidget();

    UFUNCTION(BlueprintCallable)
    void SetupWidget();
    
};

