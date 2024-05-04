#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DronePickupableObjBase.generated.h"

class AHeroCharacterBase;
class UFMODAudioComponent;
class UFMODEvent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ADronePickupableObjBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ObjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* ObjectAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* UseActivatedSound;
    
public:
    ADronePickupableObjBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UseObject(AHeroCharacterBase* aCallingHero);
    
    UFUNCTION(BlueprintCallable)
    void SetNumUses(int32 Val);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetObjectName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumUses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetMeshComponent() const;
    
};

