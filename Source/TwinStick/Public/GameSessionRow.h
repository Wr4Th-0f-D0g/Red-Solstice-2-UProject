#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "GameSessionRow.generated.h"

class UGameSessionList;
class USolsticeSession_SearchResult;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UGameSessionRow : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameSessionList* GameListWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USolsticeSession_SearchResult* SearchResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingMS;
    
public:
    UGameSessionRow();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRow();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAddedAnimation(float StartingBuffer);
    
    UFUNCTION(BlueprintCallable)
    void JoinSession();
    
};

