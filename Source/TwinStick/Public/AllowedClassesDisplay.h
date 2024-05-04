#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "Blueprint/UserWidget.h"
#include "ESolsticeHeroClass.h"
#include "AllowedClassesDisplay.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TWINSTICK_API UAllowedClassesDisplay : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo TitleFontInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor TitleFontColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ClassIconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESolsticeHeroClass, FSlateBrush> ClassBrushes;
    
    UAllowedClassesDisplay();

    UFUNCTION(BlueprintCallable)
    void SetTitleText(FText NewTitleText);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowedClasses(int32 InAllowedClasses);
    
};

