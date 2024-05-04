#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasicDynamicMulticastDelegateDelegate.h"
#include "EAttribute.h"
#include "EDifficulty.h"
#include "SolsticeAttributeData.h"
#include "Templates/SubclassOf.h"
#include "BestiaryShowcaseBase.generated.h"

class UAttributeComponent;
class UDataTable;
class USolsticeBuffBase;

UCLASS(Blueprintable)
class TWINSTICK_API ABestiaryShowcaseBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttributeComponent* AttributeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> DifficultyBuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> PlayerCountBuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDifficulty, USolsticeBuffBase*> DifficultyBuffMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, USolsticeBuffBase*> PlayerCountBuffMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BuffSimulatedDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeBuffBase* StrollBuff;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate OnStrolBuffStackChanged;
    
    ABestiaryShowcaseBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStrolBuffStack(int32 NewStackSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDifficultyModifiedAttributeValue(int32 PlayerCount, EDifficulty InDifficulty, EAttribute InAttribute, FSolsticeAttributeData InAttributeData, TSubclassOf<USolsticeBuffBase> ExtraBuff);
    
};

