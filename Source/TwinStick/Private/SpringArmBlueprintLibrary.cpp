#include "SpringArmBlueprintLibrary.h"

USpringArmBlueprintLibrary::USpringArmBlueprintLibrary() {
}

void USpringArmBlueprintLibrary::TickSpringArm(FSpringArm& SpringArm, const UWorld* WorldContext, const AActor* IgnoreActor, const FTransform& InitialTransform, const FVector OffsetLocation) {
}

bool USpringArmBlueprintLibrary::IsSpringArmCollisionFixApplied(const FSpringArm& SpringArm) {
    return false;
}

void USpringArmBlueprintLibrary::InitializeSpringArm(FSpringArm& SpringArm) {
}

FVector USpringArmBlueprintLibrary::GetSpringArmUnfixedEndPosition(const FSpringArm& SpringArm) {
    return FVector{};
}

FTransform USpringArmBlueprintLibrary::GetSpringArmEndTransform(const FSpringArm& SpringArm) {
    return FTransform{};
}


