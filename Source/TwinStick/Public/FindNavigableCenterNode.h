#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FindNavigableCeterDelegateDelegate.h"
#include "FindNavigableCenterNode.generated.h"

class AMeshSystemCenterBase;
class AMeshSystemLinkBase;
class UFindNavigableCenterNode;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UFindNavigableCenterNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindNavigableCeterDelegate CompletedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMeshSystemCenterBase* StartingCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMeshSystemCenterBase*> IgnoreCenters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMeshSystemLinkBase*> IgnoreLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreDeadEnds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMeshSystemCenterBase*> CentersList;
    
public:
    UFindNavigableCenterNode();

protected:
    UFUNCTION(BlueprintCallable)
    void TestRandomActorRecursive();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFindNavigableCenterNode* FindNavigableCenterNode(const UObject* NewWorldContextObject, AMeshSystemCenterBase* NewStartingCenter, TArray<AMeshSystemCenterBase*> NewIgnoreCenters, TArray<AMeshSystemLinkBase*> NewIgnoreLinks, bool NewBIgnoreDeadEnds);
    
};

