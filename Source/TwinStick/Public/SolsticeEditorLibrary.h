#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "SolsticeEditorLibrary.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeEditorLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USolsticeEditorLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnActorDefferedProjected(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, FGameplayTagContainer GameplayTags, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner, bool bAdjustLocation, bool bProjectLocation, bool bTraceToFloor);
    
    UFUNCTION(BlueprintCallable)
    static AActor* FinishSpawningActorProjected(AActor* Actor, const FTransform& SpawnTransform);
    
};

