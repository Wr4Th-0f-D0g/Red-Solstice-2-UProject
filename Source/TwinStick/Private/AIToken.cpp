#include "AIToken.h"

FAIToken::FAIToken() {
    this->TokenID = 0;
    this->CooldownTime = 0.00f;
    this->TokenState = ETokenState::Invalid;
    this->TokenType = EAITokenType::ETT_SpawnToken;
    this->bTokenValid = false;
}

