#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettingsBackedByCVars.h"
#include "MonsterDeveloperSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class TWINSTICK_API UMonsterDeveloperSettings : public UDeveloperSettingsBackedByCVars {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GeneralMonsterDebugs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MonsterMeleeDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MonsterMeleeDoorPathCheck;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RootMotionJumpDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MonsterBurrowerDebug;
    
    UMonsterDeveloperSettings();

};

