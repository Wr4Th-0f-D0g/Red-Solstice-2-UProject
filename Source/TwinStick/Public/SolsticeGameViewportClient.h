#pragma once
#include "CoreMinimal.h"
#include "CommonGameViewportClient.h"
#include "SolsticeGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class TWINSTICK_API USolsticeGameViewportClient : public UCommonGameViewportClient {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredViewportRenderOpacity;
    
public:
    USolsticeGameViewportClient();

};

