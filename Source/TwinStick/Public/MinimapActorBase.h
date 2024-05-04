#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MinimapActorBase.generated.h"

class AMissionBase;

UCLASS(Blueprintable)
class TWINSTICK_API AMinimapActorBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MinimapActor, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MinimapActor, meta=(AllowPrivateAccess=true))
    bool bAreaIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MissionText, meta=(AllowPrivateAccess=true))
    FText MissionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NotShownOnMinimap, meta=(AllowPrivateAccess=true))
    bool bNotShownOnMinimap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Mission, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AMissionBase> Mission;
    
public:
    AMinimapActorBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateParameters();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_NotShownOnMinimap();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionText();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Mission();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MinimapActor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMissionTextChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMinimapIconChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MissionReceived(AMissionBase* NewMission);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrimaryMissionMarker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMissionBase* GetMission() const;
    
};

