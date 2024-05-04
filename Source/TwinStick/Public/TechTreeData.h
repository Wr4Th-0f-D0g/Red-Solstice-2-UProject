#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SolsticeTechData.h"
#include "SolsticeTechTier.h"
#include "TechTreeDataRow.h"
#include "TechTreeData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TWINSTICK_API UTechTreeData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TechDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeTechTier> TechTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TechTreeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClassIsInBeta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkirmishOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompressTechRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSortThisTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DLCRequirementCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ProfileDescriptionRow;
    
    UTechTreeData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeTechData> GetTechTreeTechs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTechTreeDataRow> GetTechTreeElements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeTechData> GetTechTierTechs(int32 TechTier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTechTierFor(const FGameplayTag& TechTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTechTierCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeTechData> GetTechsRequiring(const FGameplayTag& TechTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTechDataChecked(const FGameplayTag& TechTag, FSolsticeTechData& OutTechData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSolsticeTechData GetTechData(const FGameplayTag& TechTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetRequirementsFor(const FGameplayTag& TechTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ClassTreeIsVisible() const;
    
};

