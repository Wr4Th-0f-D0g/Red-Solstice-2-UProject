#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "GameplayTagContainer.h"
#include "SolsticeVehicleModuleData.h"
#include "VehicleModListButtonBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UVehicleModListButtonBase : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeVehicleModuleData VehicleModData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VehicleModTag;
    
    UVehicleModListButtonBase();

};

