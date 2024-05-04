#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "StaticMeshMaterialPair.h"
#include "InstanceDamageSerializableStruct.generated.h"

USTRUCT(BlueprintType)
struct FInstanceDamageSerializableStruct : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStaticMeshMaterialPair StaticMeshType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DamageState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFortified;
    
    TWINSTICK_API FInstanceDamageSerializableStruct();
};

