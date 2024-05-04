#include "WorldClock.h"

UWorldClock::UWorldClock() : UUserWidget(FObjectInitializer::Get()) {
    this->DateText = NULL;
    this->TimeOfDayText = NULL;
}

void UWorldClock::HandleCampaignTimeChanged_Implementation(const FMarsTime& NewCampaignTime) {
}


