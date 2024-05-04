#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MapElementInfo.h"
#include "MinimapElementInfo.h"
#include "MapElement.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SOLSTICEMINIMAP_API FMapElement : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ElementClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInBigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInMinimap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinimapElementInfo MinimapElementInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapElementInfo MapElementInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInDebugAllIcons;
    
    FMapElement();
};

