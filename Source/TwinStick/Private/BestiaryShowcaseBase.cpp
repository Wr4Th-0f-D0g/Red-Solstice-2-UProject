#include "BestiaryShowcaseBase.h"
#include "AttributeComponent.h"
#include "Templates/SubclassOf.h"

ABestiaryShowcaseBase::ABestiaryShowcaseBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttributeComponent = CreateDefaultSubobject<UAttributeComponent>(TEXT("AttributeComponent"));
    this->DifficultyBuffClass = NULL;
    this->PlayerCountBuffClass = NULL;
    this->BuffSimulatedDataTable = NULL;
    this->StrollBuff = NULL;
}

void ABestiaryShowcaseBase::SetStrolBuffStack(int32 NewStackSize) {
}

float ABestiaryShowcaseBase::GetDifficultyModifiedAttributeValue(int32 PlayerCount, EDifficulty InDifficulty, EAttribute InAttribute, FSolsticeAttributeData InAttributeData, TSubclassOf<USolsticeBuffBase> ExtraBuff) {
    return 0.0f;
}


