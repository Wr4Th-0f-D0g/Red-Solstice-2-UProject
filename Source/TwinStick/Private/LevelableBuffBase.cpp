#include "LevelableBuffBase.h"
#include "Net/UnrealNetwork.h"

ULevelableBuffBase::ULevelableBuffBase() {
    this->Level = 0;
}

void ULevelableBuffBase::SetLevel(int32 NewLevel) {
}

void ULevelableBuffBase::OnRep_Level() {
}

FText ULevelableBuffBase::GetCachedLevelDescriptions() {
    return FText::GetEmpty();
}


void ULevelableBuffBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULevelableBuffBase, Level);
}


