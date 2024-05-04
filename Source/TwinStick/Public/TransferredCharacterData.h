#pragma once
#include "CoreMinimal.h"
#include "CharacterData.h"
#include "ETransferredCharacterType.h"
#include "TransferredCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FTransferredCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FCharacterData CharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasValidData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ETransferredCharacterType TransferredCharacterType;
    
    TWINSTICK_API FTransferredCharacterData();
};

