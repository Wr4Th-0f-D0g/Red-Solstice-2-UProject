#pragma once
#include "CoreMinimal.h"
#include "SolsticeVehicleRuntimeAttachment.h"
#include "SolsticeVehicleRuntimeAttachmentContainer.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeVehicleRuntimeAttachmentContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeVehicleRuntimeAttachment> RuntimeAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeVehicleRuntimeAttachment> QueuedAttachments;
    
    TWINSTICK_API FSolsticeVehicleRuntimeAttachmentContainer();
};

