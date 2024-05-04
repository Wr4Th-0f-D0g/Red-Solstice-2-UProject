#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LoadingScreenWidgetChangedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "SolsticeLoadingScreenManager.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeLoadingScreenManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingScreenWidgetChangedDelegate OnLoadingScreenWidgetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> LoadingScreenWidgetClass;
    
public:
    USolsticeLoadingScreenManager();

    UFUNCTION(BlueprintCallable)
    void SetLoadingScreenContentWidget(TSubclassOf<UUserWidget> NewWidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UUserWidget> GetLoadingScreenContentWidget() const;
    
};

