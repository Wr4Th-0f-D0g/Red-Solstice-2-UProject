#pragma once
#include "CoreMinimal.h"
#include "StrategyMenuBase.h"
#include "Templates/SubclassOf.h"
#include "WorkbenchBottomPanel.generated.h"

class ASolsticeWeaponBase;
class UWeaponModData;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UWorkbenchBottomPanel : public UStrategyMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponModData* WeaponModData;
    
    UWorkbenchBottomPanel();

    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<ASolsticeWeaponBase>> GetAllEquippableWeaponClasses();
    
};

