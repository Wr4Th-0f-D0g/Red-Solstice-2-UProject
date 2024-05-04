#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharacterEquipment.h"
#include "EquipmentPayload.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class TWINSTICK_API UEquipmentPayload : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterEquipment Equipment;
    
    UEquipmentPayload();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetEquipmentIcon() const;
    
};

