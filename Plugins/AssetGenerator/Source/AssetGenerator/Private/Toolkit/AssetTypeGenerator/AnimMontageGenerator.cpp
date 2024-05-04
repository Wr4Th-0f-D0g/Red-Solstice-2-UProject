#include "Toolkit/AssetTypeGenerator/AnimMontageGenerator.h"
#include "Animation/AnimMontage.h"

UClass* UAnimMontageGenerator::GetAssetObjectClass() const {
	return UAnimMontage::StaticClass();
}

void UAnimMontageGenerator::PopulateSimpleAssetWithData(UObject* Asset) {
	Super::PopulateSimpleAssetWithData(Asset);

	UAnimMontage* Montage = CastChecked<UAnimMontage>(Asset);

	int MaxNotifyTrack = 0;

	for (const FAnimNotifyEvent& Notify : Montage->Notifies) {
		MaxNotifyTrack = FMath::Max(MaxNotifyTrack, Notify.TrackIndex);
	}

	if (MaxNotifyTrack > Montage->AnimNotifyTracks.Num() - 1) {
		Montage->AnimNotifyTracks.SetNum(MaxNotifyTrack + 1);
	}
}

bool UAnimMontageGenerator::IsSimpleAssetUpToDate(UObject* Asset) const {
	if (!Super::IsSimpleAssetUpToDate(Asset)) {
		return false;
	}

	UAnimMontage* Montage = CastChecked<UAnimMontage>(Asset);

	int MaxNotifyTrack = 0;

	for (const FAnimNotifyEvent& Notify : Montage->Notifies) {
		MaxNotifyTrack = FMath::Max(MaxNotifyTrack, Notify.TrackIndex);
	}

	if (MaxNotifyTrack > Montage->AnimNotifyTracks.Num() - 1) {
		return false;
	}

	return true;
}

FName UAnimMontageGenerator::GetAssetClass() {
	return UAnimMontage::StaticClass()->GetFName();
}
