#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ECharacterType.h"
#include "ESolsticeHeroClass.h"
#include "ESuitModuleType.h"
#include "ESuitSection.h"
#include "ModuleActionRequestedDelegate.h"
#include "ModuleInfo.h"
#include "ModulesPanel.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UModulesPanel : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ModulesDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESuitModuleType ModuleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeHeroClass MarineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterType MarineCharType;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModuleActionRequested RequestEquipAction;
    
    UModulesPanel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FModuleInfo> GetModulesForSection(ESuitSection Section) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FModuleInfo> GetClassModulesOfType(ESuitModuleType InModuleType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FModuleInfo> GetAllModulesForClass() const;
    
};

