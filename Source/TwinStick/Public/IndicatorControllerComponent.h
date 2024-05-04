#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIndicatorType.h"
#include "IndicatorControllerComponent.generated.h"

class AActor;
class ARTS_PlayerController;
class UIndicatorDescriptor;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UIndicatorControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> TurretWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> InteractableWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARTS_PlayerController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, UIndicatorDescriptor*> CharacterNameDescriptors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, UIndicatorDescriptor*> TurretDescriptors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, UIndicatorDescriptor*> HealthBarDescriptors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, UIndicatorDescriptor*> InteractableSourceDescriptors;
    
public:
    UIndicatorControllerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterIndicatorSource(AActor* Actor, EIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void RegisterTurretIndicatorSource(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterInteractableIndicatorSource(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterIndicatorSource(AActor* Actor, EIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void RegisterHealthBarIndicatorSource(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCharacterNameIndicatorSource(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSoftClassPtr<UUserWidget> GetHealthBarWidgetClass(AActor* Actor);
    
};

