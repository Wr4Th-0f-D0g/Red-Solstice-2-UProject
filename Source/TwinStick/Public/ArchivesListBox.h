#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ArchivesListBox.generated.h"

class UVerticalBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UArchivesListBox : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* SortingBox;
    
    UArchivesListBox();

    UFUNCTION(BlueprintCallable)
    void SortButtonsAlphabetically();
    
    UFUNCTION(BlueprintCallable)
    void AddChildToSortingBox(UWidget* NewChild);
    
};

