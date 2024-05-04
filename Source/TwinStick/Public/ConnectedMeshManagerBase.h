#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ConectedManagerLinkFinishedDelegateDelegate.h"
#include "MeshCentersArray.h"
#include "MeshLinksArray.h"
#include "Templates/SubclassOf.h"
#include "ConnectedMeshManagerBase.generated.h"

class AMeshSystemCenterBase;
class AMeshSystemLinkBase;
class ULocationManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UConnectedMeshManagerBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxConnectionDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConectedManagerLinkFinishedDelegate OnLinkFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AMeshSystemCenterBase>, FMeshCentersArray> MeshCenters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AMeshSystemLinkBase>, FMeshLinksArray> MeshLinks;
    
public:
    UConnectedMeshManagerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnLocationsMapped(ULocationManager* InLocManager);
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetAllLinks(TArray<AMeshSystemLinkBase*>& OutLinks, TSubclassOf<AMeshSystemLinkBase> InLinkType);
    
    UFUNCTION(BlueprintCallable)
    bool GetAllCenters(TArray<AMeshSystemCenterBase*>& OutArray, TSubclassOf<AMeshSystemCenterBase> InCenterType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreElementsMapped() const;
    
};

