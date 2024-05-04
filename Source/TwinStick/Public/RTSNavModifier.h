#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrefabricatorActorInterface.h"
#include "Templates/SubclassOf.h"
#include "RTSNavModifier.generated.h"

class UBillboardComponent;
class UBoxComponent;
class UNavAreaBase;
class UTextRenderComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ARTSNavModifier : public AActor, public IPrefabricatorActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TextRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavAreaBase> AreaClass;
    
    ARTSNavModifier(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShowVehicleBlockers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShowNavModifiers() const;
    
    UFUNCTION(BlueprintCallable)
    void SetNavAreaClass(TSubclassOf<UNavAreaBase> InAreaClass);
    

    // Fix for true pure virtual functions not being implemented
};

