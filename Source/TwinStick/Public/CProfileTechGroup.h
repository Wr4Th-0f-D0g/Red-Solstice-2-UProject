#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SkillGridHelper.h"
#include "CProfileTechGroup.generated.h"

class UTechTreeData;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UCProfileTechGroup : public UUserWidget {
    GENERATED_BODY()
public:
    UCProfileTechGroup();

    UFUNCTION(BlueprintCallable)
    void PopulateMapForGrid(TArray<FSkillGridHelper>& SkillGrid, UTechTreeData* TechTreeData);
    
};

