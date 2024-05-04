#include "TeamInstigatorPawn.h"
#include "GameplayTagComponent.h"

ATeamInstigatorPawn::ATeamInstigatorPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
}

bool ATeamInstigatorPawn::HasMatchingGameplayTag(FGameplayTag InTag) const {
    return false;
}

bool ATeamInstigatorPawn::HasAnyMatchingGameplayTags(const FGameplayTagContainer& InTagContainer) const {
    return false;
}

bool ATeamInstigatorPawn::HasAllMatchingGameplayTags(const FGameplayTagContainer& InTagContainer) const {
    return false;
}

ESolsticeTeam ATeamInstigatorPawn::GetTeam() const {
    return ESolsticeTeam::HeroMarine;
}

void ATeamInstigatorPawn::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const {
}


