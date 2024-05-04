#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ECharacterType.h"
#include "ESolsticeTeam.h"
#include "QueryTest_FavourEnemyType.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UQueryTest_FavourEnemyType : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterType, float> CharacterTypeValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESolsticeTeam, float> TeamValues;
    
    UQueryTest_FavourEnemyType();

};

