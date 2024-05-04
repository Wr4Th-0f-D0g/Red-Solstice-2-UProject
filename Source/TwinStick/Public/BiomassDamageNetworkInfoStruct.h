#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "BiomassDamageNetworkInfoStruct.generated.h"

USTRUCT(BlueprintType)
struct FBiomassDamageNetworkInfoStruct : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint Location;
    
    TWINSTICK_API FBiomassDamageNetworkInfoStruct();
};

