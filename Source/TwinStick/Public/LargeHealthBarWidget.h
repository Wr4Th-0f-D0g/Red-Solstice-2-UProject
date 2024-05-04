#pragma once
#include "CoreMinimal.h"
#include "SmallHealthBarWidget.h"
#include "LargeHealthBarWidget.generated.h"

class UArmorComponent;
class UOverlay;
class UProgressBar;
class USuppressionComponent;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API ULargeHealthBarWidget : public USmallHealthBarWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* SuppressionProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* SuppressionOverlay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArmorComponent* ArmorComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USuppressionComponent* SupressionComp;
    
public:
    ULargeHealthBarWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SupressionChanged(USuppressionComponent* SupressionComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SupressedChanged(USuppressionComponent* SupressionComponent, bool bNewSupressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResistanceChanged(UArmorComponent* ArmorComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSupressionChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleSupressedChanged(bool bNewSupressed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleStunnedChanged(bool bStunned);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleResistanceChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleArmorValChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleArmorChanged(int32 CurrentResources, int32 OriginalResources);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ArmorChanged(UArmorComponent* ArmorComponent);
    
};

