#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AspectInterface.generated.h"

UINTERFACE(Blueprintable)
class UAspectInterface : public UInterface {
    GENERATED_BODY()
};

class IAspectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReloadAspects(int32 AspectLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSuppression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMinimumRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMaximumRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHeal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDurationAspect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDoT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAspectValue(FName AspectName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetArmorShredded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAmount() const;
    
};

