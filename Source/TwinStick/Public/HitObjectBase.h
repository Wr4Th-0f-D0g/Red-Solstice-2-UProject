#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BulletEffects.h"
#include "EDamageGroup.h"
#include "EWeaponPenetrationMode.h"
#include "ExplosionDamage.h"
#include "ExplosionDecal.h"
#include "ExplosionEffects.h"
#include "Templates/SubclassOf.h"
#include "HitObjectBase.generated.h"

class AActor;
class APawn;
class UActionObjectExplode;
class USolsticeBuffBase;

UCLASS(Blueprintable)
class TWINSTICK_API UHitObjectBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBulletEffects BulletEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponPenetrationMode PenetrationModeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridePenetrationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageGroup DamageTypeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> AppliedBuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuffApplicationChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoredActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InventorySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosionDamage ExplosionDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosionDecal ExplosionDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosionEffects ExplosionEffects;
    
    UHitObjectBase();

    UFUNCTION(BlueprintCallable)
    UActionObjectExplode* SpawnExplosiveObject(const FTransform& Transform, float Radius, FVector Normal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitServer(const FHitResult& Hit, const FVector& Direction, bool bFinalHit, bool bFriendly);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitClient(const FHitResult& Hit, const FVector& Direction, bool bFinalHit, bool bFriendly);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitAll(const FHitResult& Hit, const FVector& Direction, bool bFinalHit, bool bFriendly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetExplosionRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FExplosionEffects GetExplosionEffects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FExplosionDecal GetExplosionDecal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FExplosionDamage GetExplosionDamage() const;
    
};

