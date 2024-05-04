#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SolsticeSaveGameInfo.h"
#include "SolsticeSaveLibrary.generated.h"

UCLASS(Blueprintable)
class USolsticeSaveLibrary : public UObject {
    GENERATED_BODY()
public:
    USolsticeSaveLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSaveInfoValid(const FSolsticeSaveGameInfo& SaveGameInfo);
    
};

