#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "NavLinkCustomComponent.h"
#include "ERTSNavlinkType.h"
#include "EVaultableType.h"
#include "Templates/SubclassOf.h"
#include "RTSNavLinkCustomComponent.generated.h"

class AAIController;
class UNavArea;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API URTSNavLinkCustomComponent : public UNavLinkCustomComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MidPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERTSNavlinkType NavlinkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClaimReleaseDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVaultableType VaultType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAIController> ClaimedBy;
    
    URTSNavLinkCustomComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetupSmartLink(TSubclassOf<UNavArea> EnabledNavAreaClass, TSubclassOf<UNavArea> DisabledNavAreaClass, FVector RightPointLoc, FVector LeftLocPoint, TEnumAsByte<ENavLinkDirection::Type> Direction, float InBroadcastRadius, TEnumAsByte<ECollisionChannel> InBroadcastCollisionChannel, float InBroadcastInterval, bool bSendBroadcastWhenEnabled, bool bSendBroadcastWhenDisabled, float InCooldownTime);
    
    UFUNCTION(BlueprintCallable)
    void ReEnable();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastToAI();
    
};

