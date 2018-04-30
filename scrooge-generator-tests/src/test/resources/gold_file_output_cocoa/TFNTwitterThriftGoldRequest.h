/**
 * Generated by Scrooge
 *   version: ?
 *   rev: ?
 *   built at: ?
 */
#import <TFNTwitterThriftGold/TFNTwitterThriftGoldRecursive.h>
#import <TFNTwitterThriftGold/TFNTwitterThriftGoldRequest.h>

@import ApacheThrift.TBase;

@interface TFNTwitterThriftGoldRequest : NSObject <TBase, NSCoding>

@property (nonatomic, copy) NSArray * aList;
@property (nonatomic, readonly) BOOL aListIsSet;

@property (nonatomic, copy) NSSet * aSet;
@property (nonatomic, readonly) BOOL aSetIsSet;

@property (nonatomic, copy) NSDictionary * aMap;
@property (nonatomic, readonly) BOOL aMapIsSet;

@property (nonatomic) TFNTwitterThriftGoldRequest* aRequest;
@property (nonatomic, readonly) BOOL aRequestIsSet;

@property (nonatomic, copy) NSArray * subRequests;
@property (nonatomic, readonly) BOOL subRequestsIsSet;

@property (nonatomic, copy) NSString * hasDefault;
@property (nonatomic, readonly) BOOL hasDefaultIsSet;

@property (nonatomic) int64_t noComment;
@property (nonatomic, readonly) BOOL noCommentIsSet;

@property (nonatomic) int64_t doubleSlashComment;
@property (nonatomic, readonly) BOOL doubleSlashCommentIsSet;

@property (nonatomic) int64_t hashtagComment;
@property (nonatomic, readonly) BOOL hashtagCommentIsSet;

@property (nonatomic) int64_t singleAsteriskComment;
@property (nonatomic, readonly) BOOL singleAsteriskCommentIsSet;

@property (nonatomic) int64_t docStringComment;
@property (nonatomic, readonly) BOOL docStringCommentIsSet;

@property (nonatomic) TFNTwitterThriftGoldRecursive* recRequest;
@property (nonatomic, readonly) BOOL recRequestIsSet;

@property (nonatomic, copy) NSString * requiredField;
@property (nonatomic, readonly) BOOL requiredFieldIsSet;

@property (nonatomic) int64_t constructionRequiredField;
@property (nonatomic, readonly) BOOL constructionRequiredFieldIsSet;


- (instancetype)initWithAList:(NSArray *)aList aSet:(NSSet *)aSet aMap:(NSDictionary *)aMap subRequests:(NSArray *)subRequests hasDefault:(NSString *)hasDefault requiredField:(NSString *)requiredField constructionRequiredField:(int64_t)constructionRequiredField;
+ (instancetype)instanceWithAList:(NSArray *)aList aSet:(NSSet *)aSet aMap:(NSDictionary *)aMap subRequests:(NSArray *)subRequests hasDefault:(NSString *)hasDefault requiredField:(NSString *)requiredField constructionRequiredField:(int64_t)constructionRequiredField error:(NSError **)error;
- (void)read:(id<TProtocol>)inProtocol;
- (void)write:(id<TProtocol>)outProtocol;

@end
