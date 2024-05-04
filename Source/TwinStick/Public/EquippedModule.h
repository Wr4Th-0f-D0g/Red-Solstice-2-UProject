#pragma once
#include "CoreMinimal.h"
#include "ESuitSection.h"
#include "ModuleInfo.h"
#include "EquippedModule.generated.h"

class USolsticeBuffBase;

USTRUCT(BlueprintType)
struct FEquippedModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModuleInfo Module;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESuitSection Section;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USolsticeBuffBase> ModuleBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USolsticeBuffBase> GameplayBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USolsticeBuffBase> PreviewBuff;
    
    TWINSTICK_API FEquippedModule();
};

