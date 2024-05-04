#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Damage.h"
#include "OnCharacterRemovedFromSeatDelegate.h"
#include "OnSeatWeaponChangedDelegate.h"
#include "SolsticeVehiclePlayerSeatContainer.h"
#include "Templates/SubclassOf.h"
#include "SolsticeVehicleSeatComponent.generated.h"

class AActor;
class ASolsticeCharacterBase;
class ASolsticeDrivableVehicle;
class AVehicleWeaponBase;
class UHeroSkillsComponent;
class USkill;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API USolsticeVehicleSeatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVehicleWeaponBase> DefaultVehicleWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SeatSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SeatCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExitSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USkill>> SeatUtilitySkills;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSolsticeVehiclePlayerSeatContainer ReplicatedSeats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bEpicFailsAgain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASolsticeDrivableVehicle* OwningVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASolsticeCharacterBase* Driver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASolsticeCharacterBase* PreviousDriver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterRemovedFromSeat OnCharacterRemovedFromSeat;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSeatWeaponChanged OnSeatWeaponChanged;
    
    USolsticeVehicleSeatComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVehicleEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterSeated(ASolsticeCharacterBase* Char) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSeatCharacterEndedPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> Arg);
    
    UFUNCTION(BlueprintCallable)
    void HandleSeatCharacterDied(AActor* KilledActor, const FDamage& DamageInfo, bool bBRecentlyDied);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeCharacterBase* GetVehicleDriver() const;
    
    UFUNCTION(BlueprintCallable)
    UHeroSkillsComponent* GetSkillsComponentForSeatIndex(int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable)
    UHeroSkillsComponent* GetSkillsComponentForCharacter(ASolsticeCharacterBase* Char);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeatIndexForCharacter(ASolsticeCharacterBase* Char) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeCharacterBase* GetPreviousDriver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASolsticeCharacterBase*> GetAllSeatedCharacters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesSeatHaveWeapon(int32 SeatIndex) const;
    
};

