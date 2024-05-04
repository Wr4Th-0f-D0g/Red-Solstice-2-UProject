#include "AIMarineFormationActor.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"

AAIMarineFormationActor::AAIMarineFormationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bUseSpringArm = true;
    this->SlotA = CreateDefaultSubobject<UArrowComponent>(TEXT("SlotA"));
    this->SlotB = CreateDefaultSubobject<UArrowComponent>(TEXT("SlotB"));
    this->SlotC = CreateDefaultSubobject<UArrowComponent>(TEXT("SlotC"));
    this->SlotD = CreateDefaultSubobject<UArrowComponent>(TEXT("SlotD"));
    this->SlotE = CreateDefaultSubobject<UArrowComponent>(TEXT("SlotE"));
    this->SlotF = CreateDefaultSubobject<UArrowComponent>(TEXT("SlotF"));
    this->SlotA->SetupAttachment(RootComponent);
    this->SlotB->SetupAttachment(RootComponent);
    this->SlotC->SetupAttachment(RootComponent);
    this->SlotD->SetupAttachment(RootComponent);
    this->SlotE->SetupAttachment(RootComponent);
    this->SlotF->SetupAttachment(RootComponent);
}

void AAIMarineFormationActor::RemoveFollowerFromSlot(AHeroCharacterBase* Follower) {
}

FVector AAIMarineFormationActor::GetSlotLocationForFollower(AHeroCharacterBase* Follower) const {
    return FVector{};
}

TArray<FFormationSlots> AAIMarineFormationActor::GetFormationSlots() const {
    return TArray<FFormationSlots>();
}


FVector AAIMarineFormationActor::AssignFollowerToSlot(AHeroCharacterBase* Follower, bool bIsMissionFollower) {
    return FVector{};
}


