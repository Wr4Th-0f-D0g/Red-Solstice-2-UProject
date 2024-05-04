#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ArchivesListButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UArchivesListButton : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EntryName;
    
    UArchivesListButton();

};

