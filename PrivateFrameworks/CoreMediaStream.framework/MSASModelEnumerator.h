/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface MSASModelEnumerator : NSEnumerator  {
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_stmt;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _stepBlock;

}

@property struct sqlite3 { }* db;
@property struct sqlite3_stmt { }* stmt;
@property(copy) id stepBlock;

+ (id)enumeratorWithDatabase:(struct sqlite3 { }*)arg1 query:(id)arg2 stepBlock:(id)arg3;

- (void)setDb:(struct sqlite3 { }*)arg1;
- (void)setStepBlock:(id)arg1;
- (void)setStmt:(struct sqlite3_stmt { }*)arg1;
- (id)stepBlock;
- (struct sqlite3_stmt { }*)stmt;
- (id)initWithDatabase:(struct sqlite3 { }*)arg1 query:(id)arg2 stepBlock:(id)arg3;
- (struct sqlite3 { }*)db;
- (id)init;
- (id)nextObject;
- (void)dealloc;
- (void).cxx_destruct;

@end