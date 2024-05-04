#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DropshipRopeSimpleDelegateDelegate.h"
#include "EvacRope.h"
#include "DropshipRopeComponent.generated.h"

class ASolsticeCharacterBase;
class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UDropshipRopeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDropshipRopeSimpleDelegate OnDropshipRopeDropBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDropshipRopeSimpleDelegate OnDropshipRopeDropEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDropshipRopeSimpleDelegate OnDropshipRopeRiseEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDropshipRopeSimpleDelegate OnDropshipRopeRiseBegin;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RopeRiseMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RopeDropMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvacRope> EvacRopes;
    
public:
    UDropshipRopeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetCharacterAtRope(ASolsticeCharacterBase* InCharacter, uint8 OptionalRopeID);
    
    UFUNCTION(BlueprintCallable)
    void RiseRopeForCharacter(ASolsticeCharacterBase* InCharacter, bool bDropRopeAgain);
    
    UFUNCTION(BlueprintCallable)
    void RiseAllRopes();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayMontage(const FEvacRope& Rope, UAnimMontage* SelectedMontage);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void HideAllRopes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEvacRope GetRopeByID(const uint8 RopeID) const;
    
    UFUNCTION(BlueprintCallable)
    void DropAllRopes();
    
};

