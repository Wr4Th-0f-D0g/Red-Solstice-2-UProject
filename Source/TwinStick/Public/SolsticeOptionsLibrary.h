#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
#include "ESolsticeControlMode.h"
#include "ModifierKeysPressed.h"
#include "SolsticeButtonTextures.h"
#include "SolsticeControlBinding.h"
#include "SolsticeOptionsLibrary.generated.h"

class UAudioOptionsObject;
class UControlsOptionsObject;
class UDataTable;
class UGameplayOptionsObject;
class UGraphicsOptionsObject;
class UObject;
class UOptionsObject;
class UOptionsRelatedDefinitions;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeOptionsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USolsticeOptionsLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SkipInitResCheck(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetControl(UPARAM(Ref) FSolsticeControlBinding& ControlBinding, ESolsticeControlMode ControlGroup, FKey Key, FModifierKeysPressed Modifiers, bool bPrimaryControl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsControlEnabledFor(const FSolsticeControlBinding& ControlBinding, ESolsticeControlMode ControlGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FIntPoint> GetSupportedResolutions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FString> GetSupportedLanguageNames(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetOptionsTextsDT(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString GetOptionsSavePath(const FString& InFilename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UOptionsRelatedDefinitions* GetOptionsRelatedDefinitions(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UOptionsObject* GetOptionsObject(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FInputActionKeyMapping> GetKeyMappingFor(const FSolsticeControlBinding& ControlBinding, ESolsticeControlMode ControlGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGraphicsOptionsObject* GetGraphicsOptionsObject(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGameplayOptionsObject* GetGameplayOptionsObject(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCurrentLanguageName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UControlsOptionsObject* GetControlsOptionsObject(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetControlNameTextsDT(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetControlDisplayNameFor(const FSolsticeControlBinding& ControlBinding, ESolsticeControlMode ControlGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FSolsticeButtonTextures> GetButtonTextures(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAudioOptionsObject* GetAudioOptionsObject(const UObject* WorldContextObject);
    
};

