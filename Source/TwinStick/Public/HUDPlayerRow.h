#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "HUDPlayerRow.generated.h"

class ASolsticePlayerState;
class UBorder;
class UImage;
class UProgressBar;
class USizeBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UHUDPlayerRow : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASolsticePlayerState> PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ClassIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SquadMemberName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* HealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* EnergyBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* PrimaryAmmoBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* SecondaryAmmoBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* PingBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* PingSizebox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PlayerNameNormalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PlayerNameDeadColor;
    
    UHUDPlayerRow();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerStateContext(ASolsticePlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticePlayerState* GetPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetPlayerIconColor() const;
    
};

