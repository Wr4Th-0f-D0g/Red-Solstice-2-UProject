#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "EItemDescriptionType.h"
#include "AbilityDisplay.generated.h"

class UTexture2D;

UINTERFACE(Blueprintable)
class UAbilityDisplay : public UInterface {
    GENERATED_BODY()
};

class IAbilityDisplay : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetTooltipText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FLinearColor GetTooltipColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetNameDisplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FLinearColor GetNameColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetLevelDescriptionText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FLinearColor GetLevelDescriptionColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetAbilityName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UTexture2D* GetAbilityIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FLinearColor GetAbilityDescriptionTypeColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EItemDescriptionType GetAbilityDescriptionType() const;
    
};

