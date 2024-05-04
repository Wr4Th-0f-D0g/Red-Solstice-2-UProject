#pragma once
#include "CoreMinimal.h"
#include "ESuitSection.h"
#include "SavedModule.generated.h"

USTRUCT(BlueprintType)
struct FSavedModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName ModuleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ESuitSection Section;
    
    TWINSTICK_API FSavedModule();
};

