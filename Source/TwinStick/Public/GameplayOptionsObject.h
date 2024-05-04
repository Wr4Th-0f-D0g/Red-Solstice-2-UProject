#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayOptionsObjectChangedDelegate.h"
#include "GameplayOptionsObject.generated.h"

UCLASS(Blueprintable, Config=Game)
class TWINSTICK_API UGameplayOptionsObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayOptionsObjectChanged OnOptionsObjectChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> BoolGameplayOptionsInFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> BoolGameplayOptionsCurrentlySet;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> StringGameplayOptionsInFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> StringGameplayOptionsCurrentlySet;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> FloatGameplayOptionsInFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> FloatGameplayOptionsCurrentlySet;
    
public:
    UGameplayOptionsObject();

    UFUNCTION(BlueprintCallable)
    void SetLocale(const FString& InLocale);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplaySettingStringByTag(FGameplayTag InTag, const FString& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplaySettingString(FName InName, const FString& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplaySettingGameplayTag(FName InName, FGameplayTag InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplaySettingFloatByTag(FGameplayTag InTag, float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplaySettingFloat(FName InName, float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplaySettingBoolByTag(FGameplayTag InTag, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplaySettingBool(FName InName, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SaveAll();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDirty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGameplaySettingStringByTag(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGameplaySettingString(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetGameplaySettingGameplayTag(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameplaySettingFloatByTag(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameplaySettingFloat(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGameplaySettingBoolByTag(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGameplaySettingBool(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentlySetLocale();
    
};

