#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TransformChangedDelegateDelegate.h"
#include "MeshSystemNodeComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UMeshSystemNodeComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DMI;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransformChangedDelegate TransformChangedDelegate;
    
    UMeshSystemNodeComponent(const FObjectInitializer& ObjectInitializer);

};

