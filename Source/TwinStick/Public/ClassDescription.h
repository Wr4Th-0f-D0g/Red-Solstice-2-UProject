#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ArmorMaterialDescription.h"
#include "EAttribute.h"
#include "SkeletalMeshDescription.h"
#include "SolsticeStaticMeshDescription.h"
#include "SuitSectionData.h"
#include "ClassDescription.generated.h"

class USkeletalMesh;
class UTexture2D;

USTRUCT(BlueprintType)
struct TWINSTICK_API FClassDescription : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ClassIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClassDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttribute, float> Attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorMaterialDescription ArmorMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeStaticMeshDescription> ClassStaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMeshDescription> ClassSkeletalMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSuitSectionData> AvailableSlots;
    
    FClassDescription();
};

