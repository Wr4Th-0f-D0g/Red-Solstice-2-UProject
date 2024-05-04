#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "CorsairLightsManager.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UCorsairLightsManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FString> EventNamesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionMinDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionMinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBetweenExplosions;
    
    UCorsairLightsManager();

    UFUNCTION(BlueprintCallable)
    void SetState(FGameplayTag InStateGameplayTag);
    
    UFUNCTION(BlueprintCallable)
    void SetEvent(FGameplayTag InEventGameplayTag);
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetStates();
    
    UFUNCTION(BlueprintCallable)
    void ClearState(FGameplayTag InStateGameplayTag);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllStates();
    
    UFUNCTION(BlueprintCallable)
    void CallExplosion(float InRadius, float InDamage);
    
};

