#pragma once
#include "CoreMinimal.h"
#include "CancellableAsyncAction.h"
#include "LoadedObjectsCompletedDelegate.h"
#include "AsyncAction_LoadObjectArray.generated.h"

class UAsyncAction_LoadObjectArray;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UAsyncAction_LoadObjectArray : public UCancellableAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadedObjectsCompleted OnLoadAllComplete;
    
    UAsyncAction_LoadObjectArray();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncAction_LoadObjectArray* LoadObjectsAsync(UObject* WorldContextObject, TArray<TSoftObjectPtr<UObject>> Objects);
    
};

