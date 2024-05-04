#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SolsticeVehiclePlayerSeat.generated.h"

class ASolsticeCharacterBase;
class AVehicleWeaponBase;
class UHeroSkillsComponent;
class UVehicleWeaponComponent;

USTRUCT(BlueprintType)
struct FSolsticeVehiclePlayerSeat : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASolsticeCharacterBase* AssignedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASolsticeCharacterBase* PreviousAssignCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVehicleWeaponBase* SeatWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EntryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SeatIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PlayerPreviousCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHeroSkillsComponent* SkillsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVehicleWeaponComponent* WeaponComponent;
    
    TWINSTICK_API FSolsticeVehiclePlayerSeat();
};

