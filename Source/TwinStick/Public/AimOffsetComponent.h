#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "AimOffsetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UAimOffsetComponent : public UBoxComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AdjustToCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraAdjustTime;
    
public:
    UAimOffsetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAdjustToCamera(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void HandleArmorBlocksChanged(int32 Blocks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAdjustToCamera() const;
    
};

