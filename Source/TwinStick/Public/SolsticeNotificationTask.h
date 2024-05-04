#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "SolsticeNotificationResultMCDelegateDelegate.h"
#include "SolsticeNotificationTask.generated.h"

class ULocalPlayer;
class UObject;
class USolsticeNotificationTask;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeNotificationTask : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeNotificationResultMCDelegate OnNotificationResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULocalPlayer* TargetLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag NotificationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString AdditionalInfoString;
    
public:
    USolsticeNotificationTask();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static USolsticeNotificationTask* ShowNotificationMessage(UObject* InWorldContextObject, FGameplayTag InNotificationTag, const FString& InAdditionalInfoString);
    
};

