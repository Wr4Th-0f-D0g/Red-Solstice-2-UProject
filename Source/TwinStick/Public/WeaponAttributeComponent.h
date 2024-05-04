#pragma once
#include "CoreMinimal.h"
#include "AttributeComponent.h"
#include "EBuffChangedOperation.h"
#include "WeaponAttributeComponent.generated.h"

class ASolsticeWeaponBase;
class UFireComponentBase;
class USolsticeBuffBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UWeaponAttributeComponent : public UAttributeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAttributeComponent> CharacterAttributeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFireComponentBase> PrimaryFireComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFireComponentBase> SecondaryFireComponent;
    
    UWeaponAttributeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void HandleBuffsChanged(USolsticeBuffBase* ChangedBuff, EBuffChangedOperation ChangeOperation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeWeaponBase* GetWeaponOwner() const;
    
};

