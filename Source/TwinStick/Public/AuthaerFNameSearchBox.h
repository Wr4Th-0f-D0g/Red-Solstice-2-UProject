#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Blueprint/UserWidget.h"
#include "AuthaerFNameSearchBox.generated.h"

class UButton;
class UComboBoxString;
class UDataTable;
class UEditableTextBox;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UAuthaerFNameSearchBox : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ClearButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* SelectionBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* SearchBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AllOptions;
    
    UAuthaerFNameSearchBox();

    UFUNCTION(BlueprintCallable)
    void SetListNames(const TArray<FName>& InNames);
    
    UFUNCTION(BlueprintCallable)
    void SetFromDatatable(UDataTable* InTable);
    
    UFUNCTION(BlueprintCallable)
    void HandleSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void HandleSearchTextChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSelectedOption() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSearch();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllListNames();
    
    UFUNCTION(BlueprintCallable)
    void AddListNames(const TArray<FName>& InNames);
    
    UFUNCTION(BlueprintCallable)
    void AddDatatable(UDataTable* InTable);
    
};

