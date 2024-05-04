#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ActorIndicatorWidgetInterface.h"
#include "HealthBarWidgetBase.generated.h"

class AActor;
class IDamagable;
class UDamagable;
class UIndicatorDescriptor;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UHealthBarWidgetBase : public UUserWidget, public IActorIndicatorWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIndicatorDescriptor* IndicatorDescriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* HealthBarActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IDamagable> DamageableContext;
    
    UHealthBarWidgetBase();

    UFUNCTION(BlueprintCallable)
    void UpdateHealthAndArmor();
    
    UFUNCTION(BlueprintCallable)
    void SetDamageableContext(TScriptInterface<IDamagable> NewContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveSetDamageableContext();
    

    // Fix for true pure virtual functions not being implemented
};

