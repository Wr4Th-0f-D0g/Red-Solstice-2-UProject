#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SolsticeOnlineSubsystem.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeOnlineSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    USolsticeOnlineSubsystem();

    UFUNCTION(BlueprintCallable)
    bool InitFilterText();
    
    UFUNCTION(BlueprintCallable)
    int32 FilterText(const FUniqueNetIdRepl& NetId, UPARAM(Ref) FString& TextToFilter, bool bLegalOnly);
    
};

