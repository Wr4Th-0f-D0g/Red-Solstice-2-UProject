#include "SolsticeLevelActorBase.h"

ASolsticeLevelActorBase::ASolsticeLevelActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRandomizedRuntime = false;
    this->bRandomizeInPIE = false;
    this->LevelType = ELevelType::ELT_Combat;
    this->bShouldRopeDrop = true;
    this->LevelManager = NULL;
    this->AtmosphereController = NULL;
    this->FOWManager = NULL;
    this->DestructibleMeshManager = NULL;
    this->ISM_Actor = NULL;
    this->BurningManager = NULL;
    this->BiomassManager = NULL;
    this->MissionManager = NULL;
    this->MapSystemManager = NULL;
    this->StrategyMapDefinitions = NULL;
    this->PrefabData = NULL;
}




bool ASolsticeLevelActorBase::IsTutorialLevel() const {
    return false;
}

bool ASolsticeLevelActorBase::IsProceduralLevel() const {
    return false;
}

bool ASolsticeLevelActorBase::IsCombatLayerLevel() const {
    return false;
}

void ASolsticeLevelActorBase::HandleNavigationGenerationFinished(ANavigationData* Data) {
}

AGroupPlayerStartBase* ASolsticeLevelActorBase::GetGroupStart_Implementation() const {
    return NULL;
}

void ASolsticeLevelActorBase::CheckToChangeNavmeshFullAsync() {
}


