#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "DesignationManager.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UDesignationManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DesignatedActorsFriendlyMarine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DesignatedActorsEnemyMarine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DesignatedActorsMonster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> DesignatableActorClasses;
    
public:
    UDesignationManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RemoveDesignatedCharacter(AActor* InRemovedActor, const AActor* InDesignatingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorValidClassForDesignation(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetDesignatedCharactersInRange(FVector InLocation, float InRange, const AActor* InQueryingActor);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetDesignatedCharacters(const AActor* InQueryingActor);
    
    UFUNCTION(BlueprintCallable)
    void AddDesignatedCharacter(AActor* InNewActor, const AActor* InDesignatingActor);
    
};

