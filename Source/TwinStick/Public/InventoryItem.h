#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EInventoryItemType.h"
#include "EItemDescriptionType.h"
#include "Templates/SubclassOf.h"
#include "InventoryItem.generated.h"

class AActor;
class AInventoryPickup;
class APawn;
class UInventoryItem;
class UTexture2D;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UInventoryItem : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemUsed, UInventoryItem*, Item);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemDropped, AInventoryPickup*, Pickup, UInventoryItem*, Item);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemUsed ItemUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemDropped ItemDropped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumStackSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumStackForUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConsumeOnUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryPickup> DroppedActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUseDisallowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UseDisallowedMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeployTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBeingDeployed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NameColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ToolTipText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TooltipColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DescriptionColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemDescriptionType ItemDescriptionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FLinearColor> ItemDescriptionTypeColorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ItemDescriptionTypeColor;
    
    UInventoryItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    AActor* SpawnActor(TSubclassOf<AActor> Class, const FTransform& Transform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, APawn* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void SetUseDisallowed(bool bNewDisallowed);
    
    UFUNCTION(BlueprintCallable)
    void SetItemDescriptionType(EItemDescriptionType EffectType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreviewItemUse(AActor* Actor, FVector mouseAtFlootHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemUseCompleted(AActor* Actor, FVector mouseAtFlootHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndPreviewItemUse(AActor* Actor, FVector mouseAtFlootHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUseItem(FString& Message);
    
};

