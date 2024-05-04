#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RevealFOW.h"
#include "FOW_Dummy.generated.h"

class URegisterToFOW;

UCLASS(Blueprintable)
class TWINSTICK_API AFOW_Dummy : public AActor, public IRevealFOW {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URegisterToFOW* RegisterToFOW;
    
    AFOW_Dummy(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

