#include "AISense_Proximity.h"
#include "Perception/AIPerceptionTypes.h"

UAISense_Proximity::UAISense_Proximity() {
    this->NotifyType = EAISenseNotifyType::OnPerceptionChange;
    this->bAutoRegisterAllPawnsAsSources = true;
    this->MaxTracesPerTick = 6;
    this->MinQueriesPerTimeSliceCheck = 40;
    this->MaxTimeSlicePerTick = 0.01f;
    this->HighImportanceDistance = 100.00f;
    this->MaxQueryImportance = 60.00f;
    this->ProximityLimitQueryImportance = 10.00f;
}


