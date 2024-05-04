#include "EventListBase.h"

UEventListBase::UEventListBase() : UUserWidget(FObjectInitializer::Get()) {
    this->UpcomingEventsVB = NULL;
    this->EventWidgetClass = NULL;
}

void UEventListBase::SortWidgets() {
}

void UEventListBase::RemoveEventWidget(UEventWidgetBase* InEventWidget) {
}

void UEventListBase::HandleCampaignHourChanged(const FMarsTime& CampaignTime) {
}

UEventWidgetBase* UEventListBase::CreateEventWidget(UObject* InEventObject) {
    return NULL;
}

void UEventListBase::AddEventWidget(UEventWidgetBase* InEventWidget) {
}


