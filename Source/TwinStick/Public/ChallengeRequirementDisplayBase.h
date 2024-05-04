#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ChallengeDisplayLine.h"
#include "PlayerStat.h"
#include "ChallengeRequirementDisplayBase.generated.h"

class UGameplayTagDescriptions;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TWINSTICK_API UChallengeRequirementDisplayBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayTagDescriptions* TagDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GreaterThanOrEqualTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LessThanOrEqualTo;
    
    UChallengeRequirementDisplayBase();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CreateChallengeLines(TArray<FPlayerStat> DeploymentStats, TArray<FChallengeDisplayLine>& OutLines) const;
    
};

