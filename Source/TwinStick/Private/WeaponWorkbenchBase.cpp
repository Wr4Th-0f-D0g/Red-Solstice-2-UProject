#include "WeaponWorkbenchBase.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Templates/SubclassOf.h"

AWeaponWorkbenchBase::AWeaponWorkbenchBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneComponent"));
    this->DefaultSceneComponent = (USceneComponent*)RootComponent;
    this->SceneCaptureSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SceneCaptureSpringArm"));
    this->SceneCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComponent"));
    this->CurrentTemplateIndex = -1;
    this->CurrentDisplayWeapon = NULL;
    this->DefaultWeaponClass = NULL;
    this->WeaponModDataAsset = NULL;
    this->SceneCaptureSpringArm->SetupAttachment(RootComponent);
    this->SceneCaptureComponent->SetupAttachment(SceneCaptureSpringArm);
}


void AWeaponWorkbenchBase::StartNewTemplateForWeaponClass(TSubclassOf<ASolsticeWeaponBase> WeaponClass, FSavedCharacterWeaponData WeaponData) {
}

void AWeaponWorkbenchBase::SetWeaponTemplateSkin(int32 NewTextureIndex) {
}

void AWeaponWorkbenchBase::SetWeaponTemplateColor(FLinearColor NewColor, bool Primary) {
}

void AWeaponWorkbenchBase::SetTemplatedIndex(int32 NewIndex) {
}

void AWeaponWorkbenchBase::SetSelectedTemplateName(const FString& NewSelectedTemplateName) {
}

void AWeaponWorkbenchBase::SetNewDisplayWeapon(const FCharacterWeaponData& NewWeaponData, bool bForceNewWeapon) {
}

void AWeaponWorkbenchBase::SaveWeaponVariation(TSubclassOf<ASolsticeWeaponBase> WeaponClass, const FString& SaveName, const FCharacterWeaponData& WeaponData) {
}

void AWeaponWorkbenchBase::SaveCurrentWeaponSetup(bool StartNewTemplate, const FString& NewTemplateName) {
}

void AWeaponWorkbenchBase::ResetView() {
}

void AWeaponWorkbenchBase::RequestTemplateDeletion(TSubclassOf<ASolsticeWeaponBase> WeaponClass, const FString& TemplateName) {
}

void AWeaponWorkbenchBase::RemoveWeaponUpgrade(FDataTableRowHandle UpgradeDataHandle) {
}

void AWeaponWorkbenchBase::RegisterNewDisplayWeapon(ASolsticeWeaponBase* NewWeapon) {
}

void AWeaponWorkbenchBase::LoadWeaponVariation(TSubclassOf<ASolsticeWeaponBase> WeaponClass, const FString& Name) {
}

void AWeaponWorkbenchBase::LoadDefaultWeaponVariation(TSubclassOf<ASolsticeWeaponBase> WeaponClass) {
}

void AWeaponWorkbenchBase::HandleStrategyViewChanged(const FStrategyViewConfiguration& CurrentView, const FStrategyViewConfiguration& OldView) {
}

void AWeaponWorkbenchBase::HandleCampaignTemplateDataUpdated() {
}

TArray<FSavedCharacterWeaponData> AWeaponWorkbenchBase::GetSavedWeaponVariations(TSubclassOf<ASolsticeWeaponBase> WeaponClass) const {
    return TArray<FSavedCharacterWeaponData>();
}

int32 AWeaponWorkbenchBase::GetCurrentTemplateSkinIndex() const {
    return 0;
}

float AWeaponWorkbenchBase::GetCurrentTemplateInventorySize() const {
    return 0.0f;
}

FLinearColor AWeaponWorkbenchBase::GetCurrentTemplateColor(bool Primary) const {
    return FLinearColor{};
}

void AWeaponWorkbenchBase::DeleteWeaponVariation(TSubclassOf<ASolsticeWeaponBase> WeaponClass, const FString& Name) {
}

bool AWeaponWorkbenchBase::CurrentWeaponHasBeenChanged() const {
    return false;
}

void AWeaponWorkbenchBase::AddWeaponUpgrade(FDataTableRowHandle UpgradeDataHandle) {
}


