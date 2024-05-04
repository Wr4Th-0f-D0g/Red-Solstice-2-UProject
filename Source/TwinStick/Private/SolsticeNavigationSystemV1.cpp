#include "SolsticeNavigationSystemV1.h"

USolsticeNavigationSystemV1::USolsticeNavigationSystemV1() {
    this->SupportedAgents.AddDefaulted(3);
}

void USolsticeNavigationSystemV1::OnRTSNavigationBoundsUpdated(ARTSNavMeshBounds* NavVolume) {
}


