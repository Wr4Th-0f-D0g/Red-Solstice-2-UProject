#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "BulletEffects.h"
#include "CharacterWeaponData.h"
#include "EWeaponUpgradeType.h"
#include "Templates/SubclassOf.h"
#include "WeaponData.h"
#include "WeaponDescription.h"
#include "SolsticeWeaponStatics.generated.h"

class AActor;
class ASolsticeWeaponBase;
class UAbilityBase;
class UFireComponentBase;
class UHitObjectBase;
class UMaterialInstance;
class UObject;
class UParticleSystem;
class UWeaponPassiveBuffBase;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeWeaponStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USolsticeWeaponStatics();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCharacterWeaponData MakeWeaponData(TSubclassOf<ASolsticeWeaponBase> WeaponClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWeaponUpgradeAvailable(const UObject* WorldContextObject, FDataTableRowHandle UpgradeRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSecondaryWeapon(const FCharacterWeaponData& WeaponData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPrimaryWeapon(const FCharacterWeaponData& WeaponData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasWeaponUpgradeOfType(const FCharacterWeaponData& WeaponData, EWeaponUpgradeType UpgradeType);
    
    UFUNCTION(BlueprintCallable)
    static bool HasLineOfSightToActor(const ASolsticeWeaponBase* InWeapon, const AActor* InTarget, float InRange, bool bDrawDebug);
    
    UFUNCTION(BlueprintCallable)
    static bool HasLineOfSight(const ASolsticeWeaponBase* InWeapon, const FVector& InLocation, float InRange, bool bDrawDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWeaponDescription GetWeaponDescriptionFor(const FWeaponData& WeaponData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWeaponDescription GetWeaponDescriptionByName(FName WeaponName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<TSubclassOf<UWeaponPassiveBuffBase>> GetWeaponBuffs(const FCharacterWeaponData& WeaponData);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetShotOriginLocation(const ASolsticeWeaponBase* InWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UFireComponentBase> GetSecondaryFireModeClass(const FCharacterWeaponData& WeaponData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UHitObjectBase> GetSecondaryFireModeAdvancedAmmoClass(const FCharacterWeaponData& WeaponData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UFireComponentBase> GetSecondaryFireComponentClass(const FWeaponData& WeaponData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UHitObjectBase> GetSecondaryFireComponentAdvancedAmmoClass(const FWeaponData& WeaponData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UFireComponentBase> GetPrimaryFireComponentClass(const FWeaponData& WeaponData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UHitObjectBase> GetPrimaryFireComponentAdvancedAmmoClass(const FWeaponData& WeaponData);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetMuzzleShotDirection(const ASolsticeWeaponBase* InWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UParticleSystem* GetMuzzleFlashSingleShotFX(UPARAM(Ref) FBulletEffects& BulletEffects);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UParticleSystem* GetMuzzleFlashFX(UPARAM(Ref) FBulletEffects& BulletEffects);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UAbilityBase> GetGrantedSkill(const FCharacterWeaponData& WeaponData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetEquippedUpgradeOfType(const FCharacterWeaponData& WeaponData, EWeaponUpgradeType UpgradeType, FDataTableRowHandle& OutUpgradeHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMaterialInstance* GetDecalMaterial(UPARAM(Ref) FBulletEffects& BulletEffects);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UParticleSystem* GetBulletTrailFX(UPARAM(Ref) FBulletEffects& BulletEffects);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UParticleSystem* GetBulletHitFX(UPARAM(Ref) FBulletEffects& BulletEffects);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FDataTableRowHandle> GetAllWeaponUpgradeHandles(const FCharacterWeaponData& WeaponData);
    
};

