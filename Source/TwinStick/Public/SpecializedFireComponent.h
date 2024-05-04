#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FireComponentBase.h"
#include "Templates/SubclassOf.h"
#include "SpecializedFireComponent.generated.h"

class UAbilityBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API USpecializedFireComponent : public UFireComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAbilityBase> GrantedAbilityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_GrantedAbility, meta=(AllowPrivateAccess=true))
    UAbilityBase* GrantedAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAIRequiresFriendlyCheck;
    
    USpecializedFireComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetGrantedAbility(UAbilityBase* InAbility);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GrantedAbility();
    
    UFUNCTION(BlueprintCallable)
    void HandleAbilityUsed(UAbilityBase* InAbility, const FGameplayTag& AbilityTag);
    
    UFUNCTION(BlueprintCallable)
    void CreateNewGrantedAbility(TSubclassOf<UAbilityBase> AbilityClass);
    
};

