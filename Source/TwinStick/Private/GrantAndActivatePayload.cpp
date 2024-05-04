#include "GrantAndActivatePayload.h"

FGrantAndActivatePayload::FGrantAndActivatePayload() {
    this->OptionalPayload = NULL;
    this->OptionalPayload2 = NULL;
    this->OptionalFloat = 0.00f;
    this->bActivateFromClient = false;
    this->bValidPayload = false;
}

