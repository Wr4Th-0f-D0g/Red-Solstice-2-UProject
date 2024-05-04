#include "CampaignCinematic.h"

FCampaignCinematic::FCampaignCinematic() {
    this->PlayMode = ECampaignCinematicPlayMode::Queued;
    this->CinematicAsset = NULL;
    this->bAutoPlay = false;
}

