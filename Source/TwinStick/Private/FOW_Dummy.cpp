#include "FOW_Dummy.h"
#include "RegisterToFOW.h"

AFOW_Dummy::AFOW_Dummy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RegisterToFOW = CreateDefaultSubobject<URegisterToFOW>(TEXT("RegisterToFOW"));
}


