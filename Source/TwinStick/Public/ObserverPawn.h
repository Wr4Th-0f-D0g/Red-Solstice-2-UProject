#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "Layout/Margin.h"
#include "AimCameraSwitchCompleteDelegateDelegate.h"
#include "FiringMode.h"
#include "SolsticeControlInterface.h"
#include "ObserverPawn.generated.h"

class AActor;
class AHeroAI_Controller;
class AHeroCharacterBase;
class AMapSystemManager;
class ARTS_PlayerController;
class UCameraComponent;
class UCurveFloat;
class UFloatingPawnMovement;
class UParticleSystemComponent;
class USceneComponent;
class USpringArmComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AObserverPawn : public APawn, public ISolsticeControlInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraGamepadScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraZoomOutMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CameraAdjustAtMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CameraInterpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFiringMode ActiveFiringMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHeroAI_Controller* HeroController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraDistanceInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraInterpCurrentDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraInterpMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraLockedInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraVehicleInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorModeInteropolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraMechInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalVehicleHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeedInterpolationMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeedInterpolationMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeedAimInterpolationMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeedAimInterpolationMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraInterpolationStopSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DesiredCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ScrollMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ManualCameraMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMechCameraAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin AimingCameraDeadZonePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin VehicleAimingCameraDeadZonePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MechAimingMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleAimingMaxDisatnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MechAimInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleAimInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisableManualCameraScreenArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManualCameraEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCameraInterpolationEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ManualModeVelocityInterpolationStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ManualModeAimInterpolationStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ManualModeAimingMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MouseDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdjustUnlockedCameraHeightByFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMapSystemManager* MapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bObserverMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseXPositive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseYNegative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseXNegative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseYPositive;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* Hero;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARTS_PlayerController* RTS_Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHeroCharacterBase> ObservedHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* ObserverSpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ObserverRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ObserverCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFloatingPawnMovement* ObserverMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringArmTargetLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanMoveCameraBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManualCameraAllowed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAimCameraSwitchCompleteDelegate OnAimCameraSwitchComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlockEnabled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimCameraArmPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToAimCameraSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringarmDefaultLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SpringarmDefaultRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringarmLengthChangePerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringarmPitchChangePerSec;
    
public:
    AObserverPawn(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ZoomCamera(float AxisValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SyncLoc();
    
public:
    UFUNCTION(BlueprintCallable)
    void SwitchAimingCamera(bool bIsEnabled, float InAdditionalSpringOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector SpringDampVector(FVector Current, FVector Target, FVector& CurrentVelocity, float SmoothTime, float DeltaTIme, float MaxSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SpringDampFloat(float Current, float Target, float& CurrentVelocity, float SmoothTime, float DeltaTIme, float MaxSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SnapToTarget(AActor* TargetActor, bool bLock);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldEnableManualCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldDisableManualCamera() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSpringarmDefaultRotation(FRotator InRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetSpringarmDefaultLength(float InLength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetObserverMode(bool bOn);
    
    UFUNCTION(BlueprintCallable)
    void SetObservedSpecificTarget(AHeroCharacterBase* InNewObserved);
    
    UFUNCTION(BlueprintCallable)
    void OrbitCamera(float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    void MoveRight(float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    void MoveForward(float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    bool MoveCameraToKeepPositionsInFrame(FVector& InOutTargetPosition, FVector OriginPosition, FVector TargetPosition, float AngularMargin, float MaxDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool MouseOffScreenCheck();
    
    UFUNCTION(BlueprintCallable)
    float LimitYAxis(float InAxisValue);
    
    UFUNCTION(BlueprintCallable)
    float LimitXAxis(float InAxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ZoomCamera(float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OrbitCamera(float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMouseOnScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInManualMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraInFreeMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InterpToObserved();
    
    UFUNCTION(BlueprintCallable)
    FVector InterpolateCameraTowardsVelocity(float DeltaTIme, float MinSpeedMargin, float MaxSpeedMargin, float MaxDistance, float InterpolationSpeed);
    
    UFUNCTION(BlueprintCallable)
    FVector InterpolateCameraTowardsCursor(float DeltaTIme, FMargin DeadZonePercentage, float MaxDistance, float InterpolationSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UParticleSystemComponent* GetWeatherCameraPCS() const;
    
    UFUNCTION(BlueprintCallable)
    FRotator GetSpringarmDefaultRotation();
    
    UFUNCTION(BlueprintCallable)
    float GetSpringarmDefaultLength();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UParticleSystemComponent* GetParticleSystem() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoveSpeedModifier();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInAimingCameraMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAimingCameraTransitionComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHeroAI_Controller* GetHeroController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableUnlocking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableUnlocking();
    
    UFUNCTION(BlueprintCallable)
    void CycleObserverTargets();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanScrollCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanMoveCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CameraFollowCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalculateFOWDistance();
    
    UFUNCTION(BlueprintCallable)
    void AdjustManualModeCamera(float DeltaTIme, bool InManualMode);
    
    UFUNCTION(BlueprintCallable)
    void AdjustHeightAccordingToFloor(float DeltaTIme);
    
    UFUNCTION(BlueprintCallable)
    void AddFOWDistanceToZHeight(FVector& ObserverLocation);
    

    // Fix for true pure virtual functions not being implemented
};

