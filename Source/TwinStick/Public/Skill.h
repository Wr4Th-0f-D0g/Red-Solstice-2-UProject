#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AbilityBase.h"
#include "ESkillSlot.h"
#include "Templates/SubclassOf.h"
#include "Skill.generated.h"

class AActor;
class USkill;
class UTexture2D;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API USkill : public UAbilityBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkillLevelChanged, int32, NewLevel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkillDamagedChanged, bool, Damaged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMaximumSkillLevelChanged, int32, NewMax);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableUseOnTrain;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillLevelChanged OnSkillLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaximumSkillLevelChanged OnMaximumSkillLevelChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillSlot SkillSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MaximumLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle LevelDownCooldownHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverLevelUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SkillDamaged, meta=(AllowPrivateAccess=true))
    bool bSkillDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillDamagedChanged OnSkillDamagedChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DamagedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DamagedDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DamagedIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamagedNameKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamagedDescriptionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPassiveSkill;
    
    USkill(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCachedDescriptions();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSkillPreview();
    
    UFUNCTION(BlueprintCallable)
    void SetSkillDamaged(bool NewDamaged);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetLevelServer(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLevel(int32 Value, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerLevelUp();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerLevelDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkillRemoved(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkillAdded(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SkillDamaged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLevelChanged(int32 NewLevel);
    
    UFUNCTION(BlueprintCallable)
    void LevelUp();
    
    UFUNCTION(BlueprintCallable)
    void LevelDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSkillPreview();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkill* GetSkillCDO(TSubclassOf<USkill> Skill);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLevelUp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLevelDown();
    
};

