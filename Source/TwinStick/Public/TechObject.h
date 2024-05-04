#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ETechResearchStatus.h"
#include "SolsticeTechData.h"
#include "TechObject.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UTechObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeTechData TechData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedTechTag, meta=(AllowPrivateAccess=true))
    FGameplayTag ReplicatedTechTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ETechResearchStatus ResearchStatus;
    
    UTechObject();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnpauseResearch();
    
    UFUNCTION(BlueprintCallable)
    void Unlock();
    
    UFUNCTION(BlueprintCallable)
    void StartResearch();
    
    UFUNCTION(BlueprintCallable)
    void PauseResearch();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedTechTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MeetsRequirements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTechTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSupplyRequirement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpecialistRequirement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetProgressRequirement() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishResearch();
    
};

