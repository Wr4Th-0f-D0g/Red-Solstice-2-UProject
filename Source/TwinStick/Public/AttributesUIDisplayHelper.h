#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AttributeDisplayContainer.h"
#include "SolsticeAttributeModifier.h"
#include "AttributesUIDisplayHelper.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TWINSTICK_API UAttributesUIDisplayHelper : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PositiveStyleCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NegativeStyleCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NormalStyleCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HighlightStyleCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AttributesDescriptionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MinValueSimpleTextKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaxValueSimpleTextKey;
    
    UAttributesUIDisplayHelper();

    UFUNCTION(BlueprintCallable)
    TArray<FAttributeDisplayContainer> FormatAttributeModifiersForDisplay(const TArray<FSolsticeAttributeModifier> InModifiers);
    
};

