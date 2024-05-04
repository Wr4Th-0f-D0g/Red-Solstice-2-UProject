#include "RTSNavModifier.h"
#include "Components/BillboardComponent.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"
#include "Components/TextRenderComponent.h"
#include "Templates/SubclassOf.h"

ARTSNavModifier::ARTSNavModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = true;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ModifierBox"));
    this->Tags.AddDefaulted(2);
    this->BillboardComp = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComp"));
    this->TextRenderer = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRenderer"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->AreaClass = NULL;
    this->BillboardComp->SetupAttachment(RootComponent);
    this->TextRenderer->SetupAttachment(RootComponent);
}

bool ARTSNavModifier::ShowVehicleBlockers() const {
    return false;
}

bool ARTSNavModifier::ShowNavModifiers() const {
    return false;
}

void ARTSNavModifier::SetNavAreaClass(TSubclassOf<UNavAreaBase> InAreaClass) {
}


