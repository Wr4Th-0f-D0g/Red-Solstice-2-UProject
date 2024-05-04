#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GroupPlayerStartBase.generated.h"

class APlayerState;
class UBoxComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AGroupPlayerStartBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PlayerStarts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> VehiclePlayerStarts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> NormalPlayerStarts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPlayerStartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<APlayerState*, UBoxComponent*> VehicleStartMap;
    
    AGroupPlayerStartBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AActor* GetNextPlayerStart(APlayerState* PlayerState);
    
};

