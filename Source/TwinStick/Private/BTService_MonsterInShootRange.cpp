#include "BTService_MonsterInShootRange.h"

UBTService_MonsterInShootRange::UBTService_MonsterInShootRange() {
    this->NodeName = TEXT("Monster in Shoot Range");
    this->Range = 0.00f;
    this->MonsterController = NULL;
    this->MonsterCharacter = NULL;
    this->WeaponComponent = NULL;
}


