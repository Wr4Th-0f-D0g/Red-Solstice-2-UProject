#include "SolsticeSizeBox.h"
#include "Components/SlateWrapperTypes.h"

USolsticeSizeBox::USolsticeSizeBox() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->WidthOverride = 0.00f;
    this->HeightOverride = 0.00f;
    this->MinDesiredWidth = 0.00f;
    this->MinDesiredHeight = 0.00f;
    this->MaxDesiredWidth = 0.00f;
    this->MaxDesiredHeight = 0.00f;
    this->MinAspectRatio = 1.00f;
    this->MaxAspectRatio = 1.00f;
    this->bOverride_WidthOverride = false;
    this->bOverride_HeightOverride = false;
    this->bOverride_MinDesiredWidth = false;
    this->bOverride_MinDesiredHeight = false;
    this->bOverride_MaxDesiredWidth = false;
    this->bOverride_MaxDesiredHeight = false;
    this->bOverride_MinAspectRatio = false;
    this->bOverride_MaxAspectRatio = false;
}

void USolsticeSizeBox::SetWidthOverride(float InWidthOverride) {
}

void USolsticeSizeBox::SetMinDesiredWidth(float InMinDesiredWidth) {
}

void USolsticeSizeBox::SetMinDesiredHeight(float InMinDesiredHeight) {
}

void USolsticeSizeBox::SetMinAspectRatio(float InMinAspectRatio) {
}

void USolsticeSizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth) {
}

void USolsticeSizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight) {
}

void USolsticeSizeBox::SetMaxAspectRatio(float InMaxAspectRatio) {
}

void USolsticeSizeBox::SetHeightOverride(float InHeightOverride) {
}

void USolsticeSizeBox::ClearWidthOverride() {
}

void USolsticeSizeBox::ClearMinDesiredWidth() {
}

void USolsticeSizeBox::ClearMinDesiredHeight() {
}

void USolsticeSizeBox::ClearMinAspectRatio() {
}

void USolsticeSizeBox::ClearMaxDesiredWidth() {
}

void USolsticeSizeBox::ClearMaxDesiredHeight() {
}

void USolsticeSizeBox::ClearMaxAspectRatio() {
}

void USolsticeSizeBox::ClearHeightOverride() {
}


