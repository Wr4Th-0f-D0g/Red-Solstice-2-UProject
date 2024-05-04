#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "MapElementInfo.h"
#include "MinimapElementInfo.h"
#include "MapDynamicActorComponent.generated.h"

class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SOLSTICEMINIMAP_API UMapDynamicActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDelayAddIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManualAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinimapElementInfo MinimapElementInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapElementInfo MapElementInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInBigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInMinimap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManualRemoved;
    
    UMapDynamicActorComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TryAddToMapSystem();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMinimapIconAlwaysVisible(bool bAlwaysVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetMapLeaderPoint(FVector2D MapLeaderPoint);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetIconTint(FLinearColor InTint);
    
    UFUNCTION(BlueprintCallable)
    void SetIconTexture(UTexture2D* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetIconRadius(float Radius);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetMapLeaderPoint(FVector2D MapLeaderPoint);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemoveMapLeaderPoint(bool bAllPoints);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPingLocation(FVector2D NewPingLocation);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMapLeaderPoint(bool bAllPoints);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIcon();
    
    UFUNCTION(BlueprintCallable)
    void PingLocation(FVector2D NewPingLocation);
    
    UFUNCTION(BlueprintCallable)
    void AddToMapSystem();
    
};

