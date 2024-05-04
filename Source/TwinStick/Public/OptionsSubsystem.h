#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OptionsSubsystem.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class TWINSTICK_API UOptionsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* OptionsWidget;
    
public:
    UOptionsSubsystem();

    UFUNCTION(BlueprintCallable)
    void ShowOptionsMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOptionsOpen() const;
    
    UFUNCTION(BlueprintCallable)
    void HideOptionsMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetOptionsWidget() const;
    
};

