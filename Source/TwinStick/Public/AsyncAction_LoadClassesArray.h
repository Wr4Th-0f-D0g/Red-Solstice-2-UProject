#pragma once
#include "CoreMinimal.h"
#include "CancellableAsyncAction.h"
#include "LoadedClassesCompletedDelegate.h"
#include "AsyncAction_LoadClassesArray.generated.h"

class UAsyncAction_LoadClassesArray;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UAsyncAction_LoadClassesArray : public UCancellableAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadedClassesCompleted OnLoadAllComplete;
    
    UAsyncAction_LoadClassesArray();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncAction_LoadClassesArray* LoadClassesAsync(UObject* WorldContextObject, TArray<TSoftClassPtr<UObject>> Classes);
    
};

