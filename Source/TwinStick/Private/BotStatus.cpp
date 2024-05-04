#include "BotStatus.h"
#include "Net/UnrealNetwork.h"

UBotStatus::UBotStatus() {
    this->RankTable = NULL;
    this->BotLevel = 0;
    this->BotRank = 1;
    this->BotXP = 0;
    this->bSkirmishXP_Awarded = false;
    this->Deployments = 0;
    this->bInSquad = false;
    this->CampaignXP_Multiplier = 0.10f;
    this->SkirmishXP_Multiplier = 0.25f;
    this->bDead = false;
    this->PrimaryWeaponClass = NULL;
    this->SecondaryWeaponClass = NULL;
    this->MaxInjuries = 3;
}

bool UBotStatus::TryChangeBotName(const FString& NewName) {
    return false;
}

void UBotStatus::SetBotLevel(int32 InLevel, bool bAdjustXP) {
}

void UBotStatus::SelectSkill(int32 InLevel, FGameplayTag InSkillTag) {
}

bool UBotStatus::IsAssignedToBlackOps() const {
    return false;
}

bool UBotStatus::HasAnyUnassignedSkills() const {
    return false;
}

FVector UBotStatus::GetSecondaryColor() const {
    return FVector{};
}

FVector UBotStatus::GetPrimaryColor() const {
    return FVector{};
}

int32 UBotStatus::GetNextLevelForTraining() const {
    return 0;
}

UDataTable* UBotStatus::GetModulesDataTable() const {
    return NULL;
}

int32 UBotStatus::GetMaxInjuryCount() {
    return 0;
}

UCharacterDataAsset* UBotStatus::GetHeroData() const {
    return NULL;
}

ESolsticeHeroClass UBotStatus::GetHeroClass() const {
    return ESolsticeHeroClass::ESHC_Invalid;
}

UTexture2D* UBotStatus::GetClassIcon() const {
    return NULL;
}

TArray<FBotLevel> UBotStatus::GetBotLevelData(const FBotSkillTree& InClassData) {
    return TArray<FBotLevel>();
}

ARegion* UBotStatus::GetBlackOpsRegion() const {
    return NULL;
}

TArray<FGameplayTag> UBotStatus::GetAllSelectedBotSkills() const {
    return TArray<FGameplayTag>();
}

int32 UBotStatus::ApplyInjury(const FMarsTime& InjuryTime) {
    return 0;
}

void UBotStatus::AddXP(int32 XP) {
}

void UBotStatus::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBotStatus, BotName);
    DOREPLIFETIME(UBotStatus, CustomBotTag);
    DOREPLIFETIME(UBotStatus, BotLevel);
    DOREPLIFETIME(UBotStatus, BotRank);
    DOREPLIFETIME(UBotStatus, PowerSuitModel);
}


