#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BuffDataRow.h"
#include "BuffDescriptionRow.h"
#include "SolsticeAttributeModifier.h"
#include "Templates/SubclassOf.h"
#include "AttributeModifierInfo.generated.h"

class UDataTable;
class USolsticeBuffBase;

UCLASS(Blueprintable)
class UAttributeModifierInfo : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAttributeModifierInfo();

    UFUNCTION(BlueprintCallable)
    static void SetBuffDescriptionRowHandle(TSubclassOf<USolsticeBuffBase> BuffClass, UDataTable* DataTable, FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static void SetBuffDataRowHandle(TSubclassOf<USolsticeBuffBase> BuffClass, UDataTable* DataTable, FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUpperClamp(const FSolsticeAttributeModifier& Modifier, float& OutValue, bool& HasBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetStackingMultiplyBonus(const FSolsticeAttributeModifier& Modifier, float& OutValue, bool& HasBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetResistanceBonus(const FSolsticeAttributeModifier& Modifier, float& OutValue, bool& HasBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMultiplyBonus(const FSolsticeAttributeModifier& Modifier, float& OutValue, bool& HasBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetLowerClamp(const FSolsticeAttributeModifier& Modifier, float& OutValue, bool& HasBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetFlatBonus(const FSolsticeAttributeModifier& Modifier, float& OutValue, bool& HasBonus);
    
    UFUNCTION(BlueprintCallable)
    static void AddBuffDescriptionRow(UDataTable* DataTable, FName RowName, const FBuffDescriptionRow& Data);
    
    UFUNCTION(BlueprintCallable)
    static void AddBuffDataRow(UDataTable* DataTable, FName RowName, const FBuffDataRow& Data);
    
};

