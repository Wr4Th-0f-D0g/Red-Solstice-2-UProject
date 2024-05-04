#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "AuthaerWidgetComponentManager.generated.h"

class AActor;
class UAuthaerWidgetComponent;

UCLASS(Blueprintable)
class AUTHAERWIDGETCOMPONENTPLUGIN_API UAuthaerWidgetComponentManager : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAuthaerWidgetComponent*> TrackedWidgetComponents;
    
    UAuthaerWidgetComponentManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<AActor>> GetClassesNotUsingAuthaerWidgetComponent() const;
    
};

