#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERegionListSort.h"
#include "RegionList.generated.h"

class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API URegionList : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ListVBox;
    
    URegionList();

    UFUNCTION(BlueprintCallable)
    void SortRegionList(ERegionListSort ListSortType, bool Descending);
    
};

