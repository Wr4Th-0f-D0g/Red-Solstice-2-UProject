#include "CharacterInfoWidgetBase.h"

UCharacterInfoWidgetBase::UCharacterInfoWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->Hero = NULL;
    this->PlayerController = NULL;
}









void UCharacterInfoWidgetBase::HandleSuitLevelChanged(int32 Level, const FString& Message) {
}

void UCharacterInfoWidgetBase::HandleHealthChanged(int32 CurrentResource, int32 OriginalResources) {
}

void UCharacterInfoWidgetBase::HandleExperienceChanged() {
}


