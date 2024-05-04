#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameFramework/RootMotionSource.h"
#include "EVaultableType.h"
#include "VaultingComponent.generated.h"

class AActor;
class ASolsticeCharacterBase;
class AVaultActor;
class UAnimMontage;
class UCurveVector;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UVaultingComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeCharacterBase* Character;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VaultEndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VaultMidLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator VaultRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VaultStartLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVaultActor* VaultingActor;
    
    UVaultingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetRotation(FRotator InRot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetLocation(FVector InLoc);
    
    UFUNCTION(BlueprintCallable)
    void PlayMontage(UAnimMontage* InMontage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastRotation(FRotator InRot);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastLocation(FVector InLoc);
    
    UFUNCTION(BlueprintCallable)
    void MarineRootMotionMove(const FVector& EndLocation, float Duration, bool bRestrictSpeed, UCurveVector* OffsetCurve, ERootMotionFinishVelocityMode VelocityMode, const FVector& FinishSetVelocity, float FinishClampVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeCharacterBase* GetOwningCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndVault();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoVault(EVaultableType VaultType, const FVector& EndLocation, const FVector& MidPoint, AActor* VaultActor);
    
};

