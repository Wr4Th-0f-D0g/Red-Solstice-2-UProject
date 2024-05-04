#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "CallToActionAcknowledgedDelegate.h"
#include "CallToActionBase.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UCallToActionBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CallToActionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CallToActionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> ContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CallToActionViewTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCallToActionAcknowledged OnCallToActionConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCallToActionAcknowledged OnCallToActionIgnored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeDismissedWithRMP;
    
    UCallToActionBase();

    UFUNCTION(BlueprintCallable)
    void SetContextObject(UObject* InContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetFirstTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallToActionTagAdded(const FGameplayTag& NewTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallToActionNameAdded(const FName& NewName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallToActionIgnored();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallToActionContextObjectSet(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallToActionConfirmed();
    
    UFUNCTION(BlueprintCallable)
    void AddCallToActionTag(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable)
    void AddCallToActionName(FName InName);
    
};

