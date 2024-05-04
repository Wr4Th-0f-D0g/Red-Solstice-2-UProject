#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FindFloorLocationDelegateDelegate.h"
#include "FindFloorLocationAsyncNode.generated.h"

class UFindFloorLocationAsyncNode;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UFindFloorLocationAsyncNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindFloorLocationDelegate Completed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TestLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestPlusHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestMinusHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoTestsInOnetick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Payload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnFirstStatic;
    
    UFindFloorLocationAsyncNode();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFindFloorLocationAsyncNode* FindFloorLocationAsyncNode(const UObject* NewWorldContextObject, FVector InTestLocation, int32 InNumTests, float InTestPlusHeight, float InTestMinusHeight, bool bInDoTestsInOnetick, int32 InPayload, bool bInReturnFirstStatic);
    
};

