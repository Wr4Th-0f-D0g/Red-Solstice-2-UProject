#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MedalsDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TWINSTICK_API UMedalsDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MedalsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MedalsRequirementsTable;
    
    UMedalsDataAsset();

};

