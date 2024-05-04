#pragma once
#include "CoreMinimal.h"
#include "SolsticeWeaponComponent.h"
#include "MonsterWeaponComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UMonsterWeaponComponent : public USolsticeWeaponComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FirePressed, meta=(AllowPrivateAccess=true))
    bool bFirePressed;
    
    UMonsterWeaponComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetFirePressed(bool NewPressed);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FirePressed();
    
};

