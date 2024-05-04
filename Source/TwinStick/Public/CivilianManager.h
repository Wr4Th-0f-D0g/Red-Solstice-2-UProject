#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ECivilianMapMovement.h"
#include "LocationInfo.h"
#include "RallyPoint.h"
#include "ScannerInfo.h"
#include "Templates/SubclassOf.h"
#include "CivilianManager.generated.h"

class ACivilianCharacterBase;
class AScannerBase;
class ULocationManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UCivilianManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RallypointTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EvacTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContainmentTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScannerTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCiviliansAtRallyPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRallyPointRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRallyPointRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScanningDurationTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScanningDurationTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECivilianMapMovement MapMovementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACivilianCharacterBase> CivilianClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RallypointTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AScannerBase*, FScannerInfo> Scanners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> OverlapObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnCivilians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfCivilians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CivilianSpawnCollisionBoxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CivilianRadiusToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CivilianSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACivilianCharacterBase> SpawnCivilianClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugCivilianCollisionCheck;
    
    UCivilianManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnCivNextTick(TSubclassOf<ACivilianCharacterBase> Class, FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    void SpawnCivilians(ULocationManager* InLocManager);
    
    UFUNCTION(BlueprintCallable)
    void SpawnCivilian_NonPointer(FTransform SpawnLocation);
    
    UFUNCTION(BlueprintCallable)
    ACivilianCharacterBase* SpawnCivilian(FTransform SpawnLocation);
    
    UFUNCTION(BlueprintCallable)
    float SetScannerOccupied(AScannerBase* InScanner, ACivilianCharacterBase* OccupyingCiv, bool bNewOccupied);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCivilian(ACivilianCharacterBase* Civ);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScannerOccupied(AScannerBase* InScanner, ACivilianCharacterBase*& OccupyingCiv) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetNextRallyPoint(ACivilianCharacterBase* CivilianChar, FRallyPoint& OutRallyPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AScannerBase* GetClosestScannerToLoc(const FVector& Loc) const;
    
    UFUNCTION(BlueprintCallable)
    FLocationInfo GetClosestScannerLoc(const FVector& CivilianLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ACivilianCharacterBase*> GetAllCivilians() const;
    
    UFUNCTION(BlueprintCallable)
    void AddCivilian(ACivilianCharacterBase* Civ);
    
};

