#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "ESolsticeUserOnlineContext.h"
#include "ESolsticeUserPrivilege.h"
#include "SolsticeWelcomeScreen.generated.h"

class USolsticeUserInfo;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API USolsticeWelcomeScreen : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListeningForInput;
    
public:
    USolsticeWelcomeScreen();

    UFUNCTION(BlueprintCallable)
    void HandleUserInitialized(const USolsticeUserInfo* UserInfo, bool bBSuccess, FText Error, ESolsticeUserPrivilege RequestedPrivilege, ESolsticeUserOnlineContext OnlineContext);
    
};

