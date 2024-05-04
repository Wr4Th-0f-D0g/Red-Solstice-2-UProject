#pragma once
#include "CoreMinimal.h"
#include "ComponentMaterialsBackupStruct.generated.h"

class UMaterialInterface;
class UMeshComponent;

USTRUCT(BlueprintType)
struct FComponentMaterialsBackupStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMeshComponent> Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    TWINSTICK_API FComponentMaterialsBackupStruct();
};

