#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
#include "BasicDynamicMulticastDelegateDelegate.h"
#include "ControlBindingSaveStruct.h"
#include "ControlsOptionsObjectChangedDelegate.h"
#include "EControlCategory.h"
#include "ESolsticeControlInputDeviceType.h"
#include "ESolsticeControlMode.h"
#include "KeyIconStruct.h"
#include "ModifierKeysPressed.h"
#include "SolsticeActionControlMapping.h"
#include "SolsticeAxisControlMapping.h"
#include "SolsticeControlBinding.h"
#include "SolsticeInputMapping.h"
#include "ControlsOptionsObject.generated.h"

class UTexture2D;

UCLASS(Blueprintable, Config=Game)
class TWINSTICK_API UControlsOptionsObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlsOptionsObjectChanged OnControlsObjectChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate OnControlsReverted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeControlMode DefaultHeroControlMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeControlMode DefaultVehicleControlMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CurrentGamepadControlsVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 GamepadControlVersion;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlBindingSaveStruct> SaveList;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoubleKeyFailsafeCheckedOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeControlBinding> ControlBindings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeActionControlMapping> SavedActionMappings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeAxisControlMapping> SavedAxisMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeActionControlMapping> ActionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeAxisControlMapping> AxisMappings;
    
public:
    UControlsOptionsObject();

    UFUNCTION(BlueprintCallable)
    void SetDefaultVehicleControlMode(ESolsticeControlMode InControlMode, bool bMarkDirty);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultHeroControlMode(ESolsticeControlMode InControlMode, bool bMarkDirty);
    
    UFUNCTION(BlueprintCallable)
    void SetControlBindingByName(FName ControlDisplayName, ESolsticeControlMode ControlGroup, FKey Key, FModifierKeysPressed Modifiers, bool bPrimaryControl);
    
    UFUNCTION(BlueprintCallable)
    void SaveInputBindings();
    
    UFUNCTION(BlueprintCallable)
    void RevertInputBindings();
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefaults();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyAlreadyBound(FKey InKey, FModifierKeysPressed InModifierKeys, ESolsticeControlMode InControlMode, TArray<FSolsticeInputMapping>& OutMappingsInUse, TArray<FName> InIgnoredMappingNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDirty() const;
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    TArray<FKey> GetPressedControlBindingsFromNames(UPARAM(Ref) TArray<FName>& ControlNames, ESolsticeControlMode ControlMode);
    
    UFUNCTION(BlueprintCallable)
    FText GetKeyCombinationText(const FInputActionKeyMapping& InMapping, bool bInUseLongKeyName, bool bInUseLongModifierKeyNames, bool bRemoveModifierKeyPrefix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIconsForKey(FKeyIconStruct& OutBinding, FKey InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESolsticeControlMode GetDefaultVehicleControlMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESolsticeControlMode GetDefaultHeroControlMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetControlPromptIcon(FKey Key, ESolsticeControlInputDeviceType ControllerType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeControlBinding> GetControlBindingsByCategory(EControlCategory ControlCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputActionKeyMapping> GetControlBindingByName(FName ControlDisplayName, ESolsticeControlMode ControlGroup);
    
};

