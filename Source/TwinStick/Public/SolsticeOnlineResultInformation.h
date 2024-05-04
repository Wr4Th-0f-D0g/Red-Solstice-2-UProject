#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SolsticeOnlineResultInformation.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeOnlineResultInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasSuccessful;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ErrorTag;
    
    TWINSTICK_API FSolsticeOnlineResultInformation();
};

