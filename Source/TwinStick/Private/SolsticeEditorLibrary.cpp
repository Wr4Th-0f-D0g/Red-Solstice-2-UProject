#include "SolsticeEditorLibrary.h"
#include "Templates/SubclassOf.h"

USolsticeEditorLibrary::USolsticeEditorLibrary() {
}

AActor* USolsticeEditorLibrary::SpawnActorDefferedProjected(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, FGameplayTagContainer GameplayTags, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner, bool bAdjustLocation, bool bProjectLocation, bool bTraceToFloor) {
    return NULL;
}

AActor* USolsticeEditorLibrary::FinishSpawningActorProjected(AActor* Actor, const FTransform& SpawnTransform) {
    return NULL;
}


