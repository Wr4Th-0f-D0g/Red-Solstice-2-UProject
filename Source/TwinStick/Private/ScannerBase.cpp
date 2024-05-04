#include "ScannerBase.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AScannerBase::AScannerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->ScannerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("ScannerOverlapBox"));
    this->ScannerEntrance = CreateDefaultSubobject<USceneComponent>(TEXT("ScannerEntrance"));
    this->ScannerExit = CreateDefaultSubobject<USceneComponent>(TEXT("ScannerExit"));
    this->bIsScannerOccupied = false;
    this->ScannerBox->SetupAttachment(RootComponent);
    this->ScannerEntrance->SetupAttachment(RootComponent);
    this->ScannerExit->SetupAttachment(RootComponent);
}

void AScannerBase::SetScannerOccupied(bool bNewOccupied) {
}

FVector AScannerBase::GetScannerExit() const {
    return FVector{};
}

FVector AScannerBase::GetScannerEntrance() const {
    return FVector{};
}


