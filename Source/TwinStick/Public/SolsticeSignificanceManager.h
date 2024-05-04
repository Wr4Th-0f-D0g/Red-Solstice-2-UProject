#pragma once
#include "CoreMinimal.h"
#include "SignificanceManager.h"
#include "SolsticeSignificanceManager.generated.h"

class AFogOfWarManagerImpr;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeSignificanceManager : public USignificanceManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UParticleSystemComponent>> ManagedPSCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFogOfWarManagerImpr* FOWManager;
    
public:
    USolsticeSignificanceManager();

};

