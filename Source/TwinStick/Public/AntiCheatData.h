#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AntiCheatData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TWINSTICK_API UAntiCheatData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ModulesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FiringModeDataTable;
    
    UAntiCheatData();

};

