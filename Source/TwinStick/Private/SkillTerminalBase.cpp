#include "SkillTerminalBase.h"
#include "UsableSkillComponent.h"

ASkillTerminalBase::ASkillTerminalBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UUsableSkillComponent>(TEXT("InteractableComponent"))) {
    this->Tags.AddDefaulted(2);
    this->InteractableComponent->SetupAttachment(RootComponent);
}


