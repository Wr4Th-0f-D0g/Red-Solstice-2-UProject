#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerTalkingIndicator.generated.h"

class APlayerState;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UPlayerTalkingIndicator : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* IndicatorPlayerState;
    
    UPlayerTalkingIndicator();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPlayerTalking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPlayerQuiet();
    
    UFUNCTION(BlueprintCallable)
    void SetIndicatorPlayerState(APlayerState* NewPlayerState);
    
};

