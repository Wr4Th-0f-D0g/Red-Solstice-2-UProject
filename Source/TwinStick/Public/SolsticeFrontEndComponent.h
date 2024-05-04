#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESolsticeUserOnlineContext.h"
#include "ESolsticeUserPrivilege.h"
#include "Templates/SubclassOf.h"
#include "SolsticeFrontEndComponent.generated.h"

class USolsticeUserInfo;
class USolsticeWelcomeScreen;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API USolsticeFrontEndComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeWelcomeScreen> PressStartWidget;
    
public:
    USolsticeFrontEndComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnUserInitialized(const USolsticeUserInfo* UserInfo, bool bBSuccess, FText Error, ESolsticeUserPrivilege RequestedPrivilege, ESolsticeUserOnlineContext OnlineContext);
    
};

