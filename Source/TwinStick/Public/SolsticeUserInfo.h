#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ESolsticeUserAvailability.h"
#include "ESolsticeUserInitializationState.h"
#include "ESolsticeUserOnlineContext.h"
#include "ESolsticeUserPrivilege.h"
#include "ESolsticeUserPrivilegeResult.h"
#include "SolsticeUserInfo.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeUserInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrimaryControllerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlatformUserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeGuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeUserInitializationState InitializationState;
    
    USolsticeUserInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESolsticeUserAvailability GetPrivilegeAvailability(ESolsticeUserPrivilege Privilege) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetNickname() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetNetId(ESolsticeUserOnlineContext Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESolsticeUserPrivilegeResult GetCachedPrivilegeResult(ESolsticeUserPrivilege Privilege, ESolsticeUserOnlineContext Context) const;
    
};

