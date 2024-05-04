#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESolsticeVehicleModuleCategory.h"
#include "ESolsticeVehicleModuleTarget.h"
#include "SolsticeCampaignRequirement.h"
#include "SolsticeVehicleModuleAttachmentData.h"
#include "VehicleWeaponData.h"
#include "SolsticeVehicleModuleData.generated.h"

class USolsticeBuffBase;
class UVehicleSkill;

USTRUCT(BlueprintType)
struct FSolsticeVehicleModuleData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeVehicleModuleCategory ModuleCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeVehicleModuleTarget ModuleSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowedVehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USolsticeBuffBase> VehicleBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleWeaponData SeatWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UVehicleSkill> SeatSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkillSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeVehicleModuleAttachmentData VisualData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeVehicleModuleAttachmentData> AdditionalVisualData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkirmishRankUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeCampaignRequirement CampaignRequirements;
    
    TWINSTICK_API FSolsticeVehicleModuleData();
};

