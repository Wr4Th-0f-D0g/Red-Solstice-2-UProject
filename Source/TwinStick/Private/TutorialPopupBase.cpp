#include "TutorialPopupBase.h"

UTutorialPopupBase::UTutorialPopupBase() {
    this->PopupDataTable = NULL;
    this->ShowTargetWidget = NULL;
    this->MainOverlay = NULL;
    this->MainCanvas = NULL;
    this->RetainerCanvas = NULL;
    this->BorderImageCanvas = NULL;
    this->BorderImage = NULL;
    this->RetainerAlphaCover = NULL;
    this->DisplayRetainerBox = NULL;
    this->ShowAnimXSpeed = 8.00f;
    this->ShowAnimYSpeed = 5.00f;
    this->ShowAnimOpacitySpeed = 5.00f;
    this->TargetingAnimSpeed = 10.00f;
}

FText UTutorialPopupBase::GetFormattedBodyText() const {
    return FText::GetEmpty();
}


