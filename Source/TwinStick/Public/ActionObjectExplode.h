#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ApplyBuffEffect.h"
#include "BiomassExplosionDamageData.h"
#include "ExplosionDamage.h"
#include "ExplosionDecal.h"
#include "ExplosionEffects.h"
#include "Templates/SubclassOf.h"
#include "ActionObjectExplode.generated.h"

class AActor;
class APawn;
class UCameraShakeBase;
class UDecalComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class TWINSTICK_API UActionObjectExplode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosionDamage DamageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosionDecal Decal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosionEffects Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FApplyBuffEffect> AppliedBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBiomassExplosionDamageData BiomassDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* RealDamageSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoredActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> IgnoredClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> CameraShakeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraShakeRadiusMultiplyer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraShakeScale;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDrawExplosion;
    
public:
    UActionObjectExplode();

    UFUNCTION(BlueprintCallable)
    UDecalComponent* SpawnExplosionDecal(FVector InPosition, FVector InNormal);
    
    UFUNCTION(BlueprintCallable)
    UParticleSystemComponent* PlayExplosionEffects(const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    void Detonate(UDecalComponent*& OutDecal, UParticleSystemComponent*& OutParticleComponent, bool bPlayEffects);
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoreTag(FName InTag);
    
    UFUNCTION(BlueprintCallable)
    void AddAppliedBuff(const FApplyBuffEffect& InBuff);
    
};

