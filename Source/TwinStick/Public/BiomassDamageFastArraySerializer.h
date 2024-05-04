#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "BiomassDamageNetworkInfoStruct.h"
#include "BiomassDamageFastArraySerializer.generated.h"

USTRUCT(BlueprintType)
struct FBiomassDamageFastArraySerializer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBiomassDamageNetworkInfoStruct> BiomassDamageNetworkInfos;
    
    TWINSTICK_API FBiomassDamageFastArraySerializer();
};

