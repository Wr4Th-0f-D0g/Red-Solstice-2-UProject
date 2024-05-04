#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EDifficulty.h"
#include "EHordeArrivalTime.h"
#include "RequisitionData.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API URequisitionData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDifficulty, float> DifficultyModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHordeArrivalTime, float> HordeArrivalModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> InfestationModifiers;
    
    URequisitionData();

};

