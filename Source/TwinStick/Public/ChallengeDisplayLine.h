#pragma once
#include "CoreMinimal.h"
#include "ChallengeDisplayLine.generated.h"

USTRUCT(BlueprintType)
struct FChallengeDisplayLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BodyLine;
    
    TWINSTICK_API FChallengeDisplayLine();
};

