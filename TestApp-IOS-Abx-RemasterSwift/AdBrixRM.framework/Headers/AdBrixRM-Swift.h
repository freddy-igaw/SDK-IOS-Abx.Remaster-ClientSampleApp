// Generated by Apple Swift version 4.1 (swiftlang-902.0.48 clang-902.0.37.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import ObjectiveC;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AdBrixRM",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC8AdBrixRM15AdBrixBase64Key")
@interface AdBrixBase64Key : NSObject
+ (AdBrixBase64Key * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (NSString * _Nonnull)getSuperkey SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getTrackingSuperkey SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC8AdBrixRM12AdBrixConfig")
@interface AdBrixConfig : NSObject
+ (AdBrixConfig * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8AdBrixRM13AdBrixPrivate")
@interface AdBrixPrivate : NSObject
/// @discussion Objective-C 기반 프로젝트에서 본 함수를 호툴하여 싱글톤 인스턴스 객체를 획득한다
/// @author igaworks
+ (AdBrixPrivate * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (NSString * _Nonnull)getAppleAdvertisingIdentifierStr SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getAppleAdvertisingTrackingEnable SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC8AdBrixRM14AdBrixPurchase")
@interface AdBrixPurchase : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

enum AdBrixLogLevel : NSInteger;
enum AdBrixEventUploadTimeInterval : NSInteger;
enum AdBrixEventUploadCountInterval : NSInteger;
@class AdBrixRmCommerceProductCategoryModel;
@class AdBrixRmCommerceProductModel;
enum AdBrixSharingChannel : NSInteger;
enum AdBrixCurrencyType : NSInteger;
enum AdbrixPaymentMethod : NSInteger;
@class AdBrixRmCommerceProductAttrModel;
enum AdBrixGenderType : NSInteger;

/// 클라이언트가 함수 호출, 변수 참조하는 클래스
SWIFT_CLASS("_TtC8AdBrixRM8AdBrixRM")
@interface AdBrixRM : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull AdBrixDateFormat;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
/// @discussion Objective-C 기반 프로젝트에서 본 함수를 호툴하여 싱글톤 인스턴스 객체를 획득한다
/// @author igaworks
+ (AdBrixRM * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
/// @discussion 앱 실행시 AppDelegate에서 최초 앱키, 해시키 등의 정보를 입력한다 - 디바이스id는 임의로 생성된다
/// @author igaworks
- (void)initAdBrixWithAppKey:(NSString * _Nonnull)appKey SWIFT_METHOD_FAMILY(none);
/// @discussion 앱 실행시 AppDelegate에서 최초 앱키, 해시키, 디바이스id 등의 정보를 입력한다
/// @author igaworks
- (void)initAdBrixWithAppKey:(NSString * _Nonnull)appKey deviceId:(NSString * _Nonnull)deviceId SWIFT_METHOD_FAMILY(none);
/// @discussion 노출 로그 레벨을 설정한다
/// @author igaworks
- (void)setLogLevel:(enum AdBrixLogLevel)logLevel;
/// 이벤트 전송 주기를 설정한다
- (void)setEventUploadTimeInterval:(enum AdBrixEventUploadTimeInterval)intervalTime;
/// 회당 전송할 이벤트 데이터 수를 설정한다
- (void)setEventUploadCountInterval:(enum AdBrixEventUploadCountInterval)cnt;
/// 광고 Identifier 값을 설정한다
- (void)setAppleAdvertisingIdentifier:(NSString * _Nonnull)appleAdvertisingIdentifier :(BOOL)isAppleAdvertisingTrackingEnabled;
/// 로그인 - 본 함수로 라이브옵스, 커머스 공동 사용가능
- (void)loginWithUserId:(NSString * _Nonnull)userId;
/// 로그인 - 본 함수로 라이브옵스, 커머스 공동 사용가능
- (void)loginWithUserId:(NSString * _Nonnull)userId eventDateStr:(NSString * _Nonnull)eventDateStr;
/// 이벤트
- (void)eventWithEventName:(NSString * _Nonnull)eventName;
/// 이벤트
- (void)eventWithEventName:(NSString * _Nonnull)eventName eventDateStr:(NSString * _Nonnull)eventDateStr;
- (void)eventWithEventName:(NSString * _Nonnull)eventName value:(NSDictionary<NSString *, id> * _Nonnull)value;
/// 이벤트
- (void)eventWithEventName:(NSString * _Nonnull)eventName value:(NSDictionary<NSString *, id> * _Nonnull)value eventDateStr:(NSString * _Nonnull)eventDateStr;
- (void)commerceViewHome;
/// purchase 홈화면 열기
- (void)commerceViewHomeWithEventDateStr:(NSString * _Nonnull)eventDateStr;
/// purchase 카테고리(기획전) 진입
- (void)commerceCategoryViewWithCategory:(AdBrixRmCommerceProductCategoryModel * _Nonnull)category;
/// purchase 카테고리(기획전) 진입
- (void)commerceCategoryViewWithCategory:(AdBrixRmCommerceProductCategoryModel * _Nonnull)category eventDateStr:(NSString * _Nonnull)eventDateStr;
/// purchase 상품 상세보기
- (void)commerceProductViewWithProductInfo:(AdBrixRmCommerceProductModel * _Nonnull)productInfo;
/// purchase 상품 상세보기
- (void)commerceProductViewWithProductInfo:(AdBrixRmCommerceProductModel * _Nonnull)productInfo eventDateStr:(NSString * _Nonnull)eventDateStr;
/// purchase 장바구니 담기
- (void)commerceAddToCartWithProductInfo:(NSArray<AdBrixRmCommerceProductModel *> * _Nonnull)productInfo;
/// purchase 장바구니 담기
- (void)commerceAddToCartWithProductInfo:(NSArray<AdBrixRmCommerceProductModel *> * _Nonnull)productInfo eventDateStr:(NSString * _Nonnull)eventDateStr;
/// purchase 위시리스트(관심상품) 추가
- (void)commerceAddToWishListWithProductInfo:(AdBrixRmCommerceProductModel * _Nonnull)productInfo;
/// purchase 위시리스트(관심상품) 추가
- (void)commerceAddToWishListWithProductInfo:(AdBrixRmCommerceProductModel * _Nonnull)productInfo eventDateStr:(NSString * _Nonnull)eventDateStr;
/// purchase 주문 내역 검토
- (void)commerceReviewOrderWithOrderId:(NSString * _Nonnull)orderId productInfo:(NSArray<AdBrixRmCommerceProductModel *> * _Nonnull)productInfo discount:(double)discount deliveryCharge:(double)deliveryCharge;
/// purchase 주문 내역 검토
- (void)commerceReviewOrderWithOrderId:(NSString * _Nonnull)orderId productInfo:(NSArray<AdBrixRmCommerceProductModel *> * _Nonnull)productInfo discount:(double)discount deliveryCharge:(double)deliveryCharge eventDateStr:(NSString * _Nonnull)eventDateStr;
/// purchase 상품 결제
- (void)commercePurchaseWithOrderId:(NSString * _Nonnull)orderId productInfo:(NSArray<AdBrixRmCommerceProductModel *> * _Nonnull)productInfo discount:(double)discount deliveryCharge:(double)deliveryCharge paymentMethod:(NSString * _Nonnull)paymentMethod;
- (void)commercePurchaseWithOrderId:(NSString * _Nonnull)orderId productInfo:(NSArray<AdBrixRmCommerceProductModel *> * _Nonnull)productInfo discount:(double)discount deliveryCharge:(double)deliveryCharge paymentMethod:(NSString * _Nonnull)paymentMethod eventDateStr:(NSString * _Nonnull)eventDateStr;
/// purchase 주문 취소(환불)
- (void)commerceRefundWithOrderId:(NSString * _Nonnull)orderId productInfo:(NSArray<AdBrixRmCommerceProductModel *> * _Nonnull)productInfo penaltyCharge:(double)penaltyCharge;
- (void)commerceRefundWithOrderId:(NSString * _Nonnull)orderId productInfo:(NSArray<AdBrixRmCommerceProductModel *> * _Nonnull)productInfo penaltyCharge:(double)penaltyCharge eventDateStr:(NSString * _Nonnull)eventDateStr;
/// purchase 상품 검색
- (void)commerceSearchWithProductInfo:(NSArray<AdBrixRmCommerceProductModel *> * _Nonnull)productInfo keyword:(NSString * _Nonnull)keyword;
/// purchase 상품 검색
- (void)commerceSearchWithProductInfo:(NSArray<AdBrixRmCommerceProductModel *> * _Nonnull)productInfo keyword:(NSString * _Nonnull)keyword eventDateStr:(NSString * _Nonnull)eventDateStr;
/// purchase 상품 공유
- (void)commerceShareWithChannel:(enum AdBrixSharingChannel)channel productInfo:(AdBrixRmCommerceProductModel * _Nonnull)productInfo;
/// purchase 상품 공유
- (void)commerceShareWithChannel:(enum AdBrixSharingChannel)channel productInfo:(AdBrixRmCommerceProductModel * _Nonnull)productInfo eventDateStr:(NSString * _Nonnull)eventDateStr;
/// purchase 통화 타입을 반환한다
- (NSString * _Nonnull)getCurrencyString:(enum AdBrixCurrencyType)currency SWIFT_WARN_UNUSED_RESULT;
/// purchase 공유 채널 타입을 반환한다
- (NSString * _Nonnull)getSharingChannel:(enum AdBrixSharingChannel)channel SWIFT_WARN_UNUSED_RESULT;
/// purchase 결제 방법 타입을 반환한다
- (NSString * _Nonnull)getPaymentMethod:(enum AdbrixPaymentMethod)method SWIFT_WARN_UNUSED_RESULT;
/// purchase Category 모델을 생성한다
- (AdBrixRmCommerceProductCategoryModel * _Nonnull)createCommerceProductCategoryDataWithCategory:(NSString * _Nonnull)category SWIFT_WARN_UNUSED_RESULT;
/// purchase Category 모델을 생성한다
- (AdBrixRmCommerceProductCategoryModel * _Nonnull)createCommerceProductCategoryDataWithCategory:(NSString * _Nonnull)category category2:(NSString * _Nonnull)category2 SWIFT_WARN_UNUSED_RESULT;
/// purchase Category 모델을 생성한다
- (AdBrixRmCommerceProductCategoryModel * _Nonnull)createCommerceProductCategoryDataWithCategory:(NSString * _Nonnull)category category2:(NSString * _Nonnull)category2 category3:(NSString * _Nonnull)category3 SWIFT_WARN_UNUSED_RESULT;
/// purchase Category 모델을 생성한다
- (AdBrixRmCommerceProductCategoryModel * _Nonnull)createCommerceProductCategoryDataWithCategory:(NSString * _Nonnull)category category2:(NSString * _Nonnull)category2 category3:(NSString * _Nonnull)category3 category4:(NSString * _Nonnull)category4 SWIFT_WARN_UNUSED_RESULT;
/// purchase Category 모델을 생성한다
- (AdBrixRmCommerceProductCategoryModel * _Nonnull)createCommerceProductCategoryDataWithCategory:(NSString * _Nonnull)category category2:(NSString * _Nonnull)category2 category3:(NSString * _Nonnull)category3 category4:(NSString * _Nonnull)category4 category5:(NSString * _Nonnull)category5 SWIFT_WARN_UNUSED_RESULT;
/// purchase Product 모델을 생성한다
- (AdBrixRmCommerceProductModel * _Nonnull)createCommerceProductDataWithProductId:(NSString * _Nonnull)productId productName:(NSString * _Nonnull)productName price:(double)price quantity:(NSInteger)quantity discount:(double)discount currencyString:(NSString * _Nullable)currencyString category:(AdBrixRmCommerceProductCategoryModel * _Nullable)category extraAttrsMap:(AdBrixRmCommerceProductAttrModel * _Nullable)extraAttrsMap SWIFT_WARN_UNUSED_RESULT;
/// purchase Product의 어트리뷰트 모델을 생성한다
- (AdBrixRmCommerceProductAttrModel * _Nonnull)createCommerceProductAttrDataWithDictionary:(NSDictionary<NSString *, NSString *> * _Nullable)dictionary SWIFT_WARN_UNUSED_RESULT;
- (void)deepLinkOpenWithUrl:(NSURL * _Nonnull)url;
- (void)deepLinkOpenWithUrl:(NSURL * _Nonnull)url eventDateStr:(NSString * _Nonnull)eventDateStr;
/// 사용자의 GPS 위치를 설정한다
- (void)setLocationWithLatitude:(double)latitude longitude:(double)longitude;
/// <ul>
///   <li>
///     API 명칭 : setAge API, setGender API
///   </li>
///   <li>
///     애드브릭스 리포트 내 확인 : Demographic & Device - 연령 / 성별
///   </li>
///   <li>
///     목적 : 유저정보 분석(User Info)는 유저의 나이와 성별 정보를 분석할 수 있습니다.
///   </li>
///   <li>
///     특징 : 연령 및 성별 외 디바이스 모델, 통신사, 안드로이드 OS, 언어, 국가 등의 정보는 IGAW 공통 연동을 통해서 기본 제공 됩니다.
///   </li>
/// </ul>
/// 유저 나이
/// setAge API를 호출하여 유저 나이를 입력합니다. 유저 나이는 1~99까지의 정수를 입력합니다.
- (void)setAgeWithInt:(NSInteger)int_;
/// <ul>
///   <li>
///     API 명칭 : setAge API, setGender API
///   </li>
///   <li>
///     애드브릭스 리포트 내 확인 : Demographic & Device - 연령 / 성별
///   </li>
///   <li>
///     목적 : 유저정보 분석(User Info)는 유저의 나이와 성별 정보를 분석할 수 있습니다.
///   </li>
///   <li>
///     특징 : 연령 및 성별 외 디바이스 모델, 통신사, 안드로이드 OS, 언어, 국가 등의 정보는 IGAW 공통 연동을 통해서 기본 제공 됩니다.
///   </li>
/// </ul>
/// 유저 성별
/// setGender API를 호출하여 유저 성별을 입력합니다. 유저 성별은 AdBrixRM.AdBrixGender 에 정의된 Gender enum 값을 사용합니다.
- (void)setGenderWithAdBrixGenderType:(enum AdBrixGenderType)adBrixGenderType;
/// <ul>
///   <li>
///     API 명칭 : setUserProperties API
///   </li>
/// </ul>
/// 유저 구분(프로퍼티)값을 임의의 원하는 정보로 설정
- (void)setUserPropertiesWithDictionary:(NSDictionary<NSString *, id> * _Nonnull)dictionary;
/// <ul>
///   <li>
///     API 명칭 : getUserProperties API
///   </li>
/// </ul>
/// 유저 구분(프로퍼티)값을 반환한다
- (NSDictionary<NSString *, id> * _Nonnull)getUserProperties SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, AdBrixLogLevel) {
  AdBrixLogLevelNONE = 0,
  AdBrixLogLevelTRACE = 1,
  AdBrixLogLevelDEBUG = 2,
  AdBrixLogLevelINFO = 3,
  AdBrixLogLevelWARNING = 4,
  AdBrixLogLevelERROR = 5,
};

/// 이벤트 전송 갯수를 설정 enum값
typedef SWIFT_ENUM(NSInteger, AdBrixEventUploadCountInterval) {
  AdBrixEventUploadCountIntervalMIN = 10,
  AdBrixEventUploadCountIntervalNormal = 30,
  AdBrixEventUploadCountIntervalMAX = 1000,
};

/// 이벤트 전송 주기를 설정 enum값
typedef SWIFT_ENUM(NSInteger, AdBrixEventUploadTimeInterval) {
  AdBrixEventUploadTimeIntervalMIN = 30,
  AdBrixEventUploadTimeIntervalNORMAL = 60,
  AdBrixEventUploadTimeIntervalMAX = 120,
};

/// 유저 프로퍼티 기본 키 enum
typedef SWIFT_ENUM(NSInteger, AdBrixUserPropKey) {
  AdBrixUserPropKeyAGE = 0,
  AdBrixUserPropKeyGENDER = 1,
};

/// 커머스 공유 채널
typedef SWIFT_ENUM(NSInteger, AdBrixSharingChannel) {
  AdBrixSharingChannelAdBrixSharingFacebook = 1,
  AdBrixSharingChannelAdBrixSharingKakaoTalk = 2,
  AdBrixSharingChannelAdBrixSharingKakaoStory = 3,
  AdBrixSharingChannelAdBrixSharingLine = 4,
  AdBrixSharingChannelAdBrixSharingWhatsApp = 5,
  AdBrixSharingChannelAdBrixSharingQQ = 6,
  AdBrixSharingChannelAdBrixSharingWeChat = 7,
  AdBrixSharingChannelAdBrixSharingSMS = 8,
  AdBrixSharingChannelAdBrixSharingEmail = 9,
  AdBrixSharingChannelAdBrixSharingCopyUrl = 10,
  AdBrixSharingChannelAdBrixSharingETC = 11,
};

/// 유저 프로퍼티 성별
typedef SWIFT_ENUM(NSInteger, AdBrixGenderType) {
  AdBrixGenderTypeMale = 2,
  AdBrixGenderTypeFemale = 1,
};

/// 커머스 결제 통화
typedef SWIFT_ENUM(NSInteger, AdBrixCurrencyType) {
  AdBrixCurrencyTypeKRW = 1,
  AdBrixCurrencyTypeUSD = 2,
  AdBrixCurrencyTypeJPY = 3,
  AdBrixCurrencyTypeEUR = 4,
  AdBrixCurrencyTypeGBP = 5,
  AdBrixCurrencyTypeCNY = 6,
  AdBrixCurrencyTypeTWD = 7,
  AdBrixCurrencyTypeHKD = 8,
  AdBrixCurrencyTypeIDR = 9,
  AdBrixCurrencyTypeINR = 10,
  AdBrixCurrencyTypeRUB = 11,
  AdBrixCurrencyTypeTHB = 12,
  AdBrixCurrencyTypeVND = 13,
  AdBrixCurrencyTypeMYR = 14,
};

/// 커머스 결제 수단
typedef SWIFT_ENUM(NSInteger, AdbrixPaymentMethod) {
  AdbrixPaymentMethodCreditCard = 1,
  AdbrixPaymentMethodBankTransfer = 2,
  AdbrixPaymentMethodMobilePayment = 3,
  AdbrixPaymentMethodETC = 4,
};

/// 커머스 코호트
typedef SWIFT_ENUM(NSInteger, AdBrixCustomCohortType) {
  AdBrixCustomCohortTypeAdBrixCustomCohort_1 = 1,
  AdBrixCustomCohortTypeAdBrixCustomCohort_2 = 2,
  AdBrixCustomCohortTypeAdBrixCustomCohort_3 = 3,
};


/// 본 모델은 AdBrix가 설정한다
SWIFT_CLASS("_TtC8AdBrixRM32AdBrixRmCommerceProductAttrModel")
@interface AdBrixRmCommerceProductAttrModel : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8AdBrixRM36AdBrixRmCommerceProductCategoryModel")
@interface AdBrixRmCommerceProductCategoryModel : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8AdBrixRM28AdBrixRmCommerceProductModel")
@interface AdBrixRmCommerceProductModel : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8AdBrixRM16AdBrixUserConfig")
@interface AdBrixUserConfig : NSObject
+ (AdBrixUserConfig * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
