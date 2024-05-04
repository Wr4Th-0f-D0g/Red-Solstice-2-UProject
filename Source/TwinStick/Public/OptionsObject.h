#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OptionsObject.generated.h"

class UAudioOptionsObject;
class UControlsOptionsObject;
class UGameplayOptionsObject;
class UGraphicsOptionsObject;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew, Config=Game)
class TWINSTICK_API UOptionsObject : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGraphicsOptionsObject* GraphicsOptionsObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControlsOptionsObject* ControlsOptionsObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayOptionsObject* GameplayOptionsObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioOptionsObject* AudioOptionsObject;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipInitResCheck;
    
public:
    UOptionsObject();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowGameplayMenu();
    
    UFUNCTION(BlueprintCallable)
    void SetIsInGameReloadMode(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void ResetShouldShowGameplayMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInGameReloadMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGraphicsOptionsObject* GetGraphicsOptionsObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameplayOptionsObject* GetGameplayOptionsObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDefaultLocaleString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UControlsOptionsObject* GetControlsOptionsObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAudioOptionsObject* GetAudioOptionsObject() const;
    
};

