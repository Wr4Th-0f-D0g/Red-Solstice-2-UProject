#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SpringArm.h"
#include "SpringArmBlueprintLibrary.generated.h"

class AActor;
class UWorld;

UCLASS(Blueprintable)
class TWINSTICK_API USpringArmBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpringArmBlueprintLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void TickSpringArm(UPARAM(Ref) FSpringArm& SpringArm, const UWorld* WorldContext, const AActor* IgnoreActor, const FTransform& InitialTransform, const FVector OffsetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSpringArmCollisionFixApplied(const FSpringArm& SpringArm);
    
    UFUNCTION(BlueprintCallable)
    static void InitializeSpringArm(UPARAM(Ref) FSpringArm& SpringArm);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetSpringArmUnfixedEndPosition(const FSpringArm& SpringArm);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetSpringArmEndTransform(const FSpringArm& SpringArm);
    
};

