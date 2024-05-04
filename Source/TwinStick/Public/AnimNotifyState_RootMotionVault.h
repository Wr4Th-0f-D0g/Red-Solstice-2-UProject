#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Templates/SubclassOf.h"
#include "AnimNotifyState_RootMotionVault.generated.h"

class AMonsterCharacterBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class TWINSTICK_API UAnimNotifyState_RootMotionVault : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTickVault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMonsterCharacterBase> MonsterClass;
    
    UAnimNotifyState_RootMotionVault();

};

