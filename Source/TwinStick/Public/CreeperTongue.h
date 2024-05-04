#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CreeperTongue.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ACreeperTongue : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    ACreeperTongue(const FObjectInitializer& ObjectInitializer);

};

