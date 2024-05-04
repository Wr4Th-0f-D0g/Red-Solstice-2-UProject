#include "CinematicEvent.h"

UCinematicEvent::UCinematicEvent() {
    this->bMoveToWaypoint = false;
    this->WaypointToMoveTo = NULL;
    this->StoppingRadius = 0.00f;
}


void UCinematicEvent::SequenceFinished_Implementation() {
}

void UCinematicEvent::SequenceActivated(ASolsticeCharacterBase* InHero) {
}


void UCinematicEvent::NextSequence() {
}

void UCinematicEvent::MoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result) {
}

AMonsterCharacterBase* UCinematicEvent::GetMonster() const {
    return NULL;
}

AHeroCharacterBase* UCinematicEvent::GetHero() const {
    return NULL;
}

ASolsticeCharacterBase* UCinematicEvent::GetCharacter() const {
    return NULL;
}


