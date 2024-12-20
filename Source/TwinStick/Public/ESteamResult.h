#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.generated.h"

UENUM(BlueprintType)
enum class ESteamResult : uint8 {
    Unknown,
    OK,
    Fail,
    NoConnection,
    InvalidPassword = 5,
    LoggedInElsewhere,
    InvalidProtocolVer,
    InvalidParam,
    FileNotFound,
    Busy,
    InvalidState,
    InvalidName,
    InvalidEmail,
    DuplicateName,
    AccessDenied,
    Timeout,
    Banned,
    AccountNotFound,
    InvalidSteamID,
    ServiceUnavailable,
    NotLoggedOn,
    Pending,
    EncryptionFailure,
    InsufficientPrivilege,
    LimitExceeded,
    Revoked,
    Expired,
    AlreadyRedeemed,
    DuplicateRequest,
    AlreadyOwned,
    IPNotFound,
    PersistFailed,
    LockingFailed,
    LogonSessionReplaced,
    ConnectFailed,
    HandshakeFailed,
    IOFailure,
    RemoteDisconnect,
    ShoppingCartNotFound,
    Blocked,
    Ignored,
    NoMatch,
    AccountDisabled,
    ServiceReadOnly,
    AccountNotFeatured,
    AdministratorOK,
    ContentVersion,
    TryAnotherCM,
    PasswordRequiredToKickSession,
    AlreadyLoggedInElsewhere,
    Suspended,
    Cancelled,
    DataCorruption,
    DiskFull,
    RemoteCallFailed,
    PasswordUnset,
    ExternalAccountUnlinked,
    PSNTicketInvalid,
    ExternalAccountAlreadyLinked,
    RemoteFileConflict,
    IllegalPassword,
    SameAsPreviousValue,
    AccountLogonDenied,
    CannotUseOldPassword,
    InvalidLoginAuthCode,
    AccountLogonDeniedNoMail,
    HardwareNotCapableOfIPT,
    IPTInitError,
    ParentalControlRestricted,
    FacebookQueryError,
    ExpiredLoginAuthCode,
    IPLoginRestrictionFailed,
    AccountLockedDown,
    AccountLogonDeniedVerifiedEmailRequired,
    NoMatchingURL,
    BadResponse,
    RequirePasswordReEntry,
    ValueOutOfRange,
    UnexpectedError,
    Disabled,
    InvalidCEGSubmission,
    RestrictedDevice,
    RegionLocked,
    RateLimitExceeded,
    AccountLoginDeniedNeedTwoFactor,
    ItemDeleted,
    AccountLoginDeniedThrottle,
    TwoFactorCodeMismatch,
    TwoFactorActivationCodeMismatch,
    AccountAssociatedToMultiplePartners,
    NotModified,
    NoMobileDevice,
    TimeNotSynced,
    SmsCodeFailed,
    AccountLimitExceeded,
    AccountActivityLimitExceeded,
    PhoneActivityLimitExceeded,
    RefundToWallet,
    EmailSendFailure,
    NotSettled,
    NeedCaptcha,
    GSLTDenied,
    GSOwnerDenied,
    InvalidItemType,
    IPBanned,
    GSLTExpired,
};

