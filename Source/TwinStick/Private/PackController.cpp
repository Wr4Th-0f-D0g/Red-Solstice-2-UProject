#include "PackController.h"

UPackController::UPackController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPackLeader = false;
    this->bPackMember = false;
    this->bAttackOnDamage = true;
    this->bEvadeOnDamage = false;
    this->PackMemberAggroOnDamageAmt = 0.00f;
    this->PackLeaderAggroOnDamageAmt = 0.00f;
    this->PackLeaderDamagedBehindAngle = 90.00f;
    this->FeintDotCheck = 0.00f;
    this->bIsPackable = false;
    this->MyController = NULL;
    this->MyPawn = NULL;
}

void UPackController::SetPackLeader(AMonsterControllerBase* InPackLeader) {
}

void UPackController::RemoveFromPack(AMonsterControllerBase* PackLeader, AMonsterCharacterBase* PackMember, bool bDead) {
}

void UPackController::RemoveFromLeader(AMonsterControllerBase* MemberController) {
}

void UPackController::PackDamaged(float DamageAmount, AActor* DamageDealer) {
}

void UPackController::NotifyFeint(AActor* FeintActor) {
}

int32 UPackController::GetPackMembersNum() const {
    return 0;
}

TArray<AMonsterControllerBase*> UPackController::GetPackMembers() const {
    return TArray<AMonsterControllerBase*>();
}

AMonsterControllerBase* UPackController::GetPackLeader() const {
    return NULL;
}

TArray<AMonsterCharacterBase*> UPackController::FindMembersBehindActor(AActor* TestActor, float ConeRadius) {
    return TArray<AMonsterCharacterBase*>();
}

void UPackController::CheckMemberTick() {
}

void UPackController::AddToPack(AMonsterControllerBase* MemberController) {
}


