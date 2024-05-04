#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BondSkillObject.generated.h"

class ASolsticeCharacterBase;

UCLASS(Blueprintable)
class TWINSTICK_API UBondSkillObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASolsticeCharacterBase*> AffectedMarines;
    
public:
    UBondSkillObject();

    UFUNCTION(BlueprintCallable)
    void StopBond();
    
    UFUNCTION(BlueprintCallable)
    void SetAffectedMarines(UPARAM(Ref) TArray<ASolsticeCharacterBase*>& MarinesArray);
    
};

