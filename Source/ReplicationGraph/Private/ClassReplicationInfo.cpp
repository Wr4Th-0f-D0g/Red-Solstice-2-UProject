#include "ClassReplicationInfo.h"

FClassReplicationInfo::FClassReplicationInfo() {
    this->DistancePriorityScale = 0.00f;
    this->StarvationPriorityScale = 0.00f;
    this->AccumulatedNetPriorityBias = 0.00f;
    this->ReplicationPeriodFrame = 0;
    this->FastPath_ReplicationPeriodFrame = 0;
    this->ActorChannelFrameTimeout = 0;
    this->CullDistance = 0.00f;
    this->CullDistanceSquared = 0.00f;
}

