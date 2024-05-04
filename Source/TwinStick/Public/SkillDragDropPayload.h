#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESkillSlot.h"
#include "Templates/SubclassOf.h"
#include "SkillDragDropPayload.generated.h"

class USkill;

UCLASS(Blueprintable)
class TWINSTICK_API USkillDragDropPayload : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillSlot SlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkill> SkillType;
    
    USkillDragDropPayload();

};

