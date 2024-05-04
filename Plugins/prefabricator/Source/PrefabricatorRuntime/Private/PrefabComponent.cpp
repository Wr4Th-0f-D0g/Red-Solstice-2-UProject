#include "PrefabComponent.h"

UPrefabComponent::UPrefabComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOverrideStaticCollection = false;
    this->bStaticCollectionOverrideValue = false;
}

void UPrefabComponent::LoadAsset(TSoftObjectPtr<UPrefabricatorAsset> Asset) {
}

bool UPrefabComponent::IsForcedStaticCollection() const {
    return false;
}

TSoftObjectPtr<UPrefabricatorAssetCollection> UPrefabComponent::GetPrefabCollection() const {
    return NULL;
}

UPrefabricatorAssetInterface* UPrefabComponent::GetPrefabAssetInterface() const {
    return NULL;
}


