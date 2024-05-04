#include "RTS_NetworkManager.h"
#include "Net/UnrealNetwork.h"

ARTS_NetworkManager::ARTS_NetworkManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
}

void ARTS_NetworkManager::UpdateActorBuffContainer(USolsticeBuffBase* ChangedBuff, EBuffChangedOperation Operation) {
}

void ARTS_NetworkManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARTS_NetworkManager, InteractionContainer);
    DOREPLIFETIME(ARTS_NetworkManager, DestructableContainer);
    DOREPLIFETIME(ARTS_NetworkManager, DestroyedPrefabActors);
    DOREPLIFETIME(ARTS_NetworkManager, DestroyedStaticPrefabActors);
    DOREPLIFETIME(ARTS_NetworkManager, PrefabActorsBuffs);
    DOREPLIFETIME(ARTS_NetworkManager, BiomassProperties);
}


