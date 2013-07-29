//
//	 ______    ______    ______    
//	/\  __ \  /\  ___\  /\  ___\   
//	\ \  __<  \ \  __\_ \ \  __\_ 
//	 \ \_____\ \ \_____\ \ \_____\ 
//	  \/_____/  \/_____/  \/_____/ 
//
//	Copyright (c) 2012 BEE creators
//	http://www.whatsbug.com
//
//	Permission is hereby granted, free of charge, to any person obtaining a
//	copy of this software and associated documentation files (the "Software"),
//	to deal in the Software without restriction, including without limitation
//	the rights to use, copy, modify, merge, publish, distribute, sublicense,
//	and/or sell copies of the Software, and to permit persons to whom the
//	Software is furnished to do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in
//	all copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//	IN THE SOFTWARE.
//
//
//  Bee_UIGridCell.h
//

#if (TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR)

#import "Bee_Precompile.h"
#import "Bee_UISignal.h"

#pragma mark -

@class BeeUIGridCell;

@interface NSObject(BeeUILayout)

+ (CGSize)sizeInBound:(CGSize)bound forData:(NSObject *)data;
- (CGSize)sizeInBound:(CGSize)bound;
- (void)layoutInBound:(CGSize)bound forCell:(BeeUIGridCell *)cell;

@end

#pragma mark -

@interface BeeUIGridCell : UIView
{
	BOOL		_selected;
	id			_cellData;
	NSObject *	_cellLayout;
}

@property (nonatomic, retain) id				cellData;
@property (nonatomic, assign) NSObject *		cellLayout;

@property (nonatomic, readonly) NSArray *		childCells;
@property (nonatomic, readonly) BeeUIGridCell *	superCell;

@property (nonatomic, assign) BOOL				selected;

- (void)layoutSubcells;

- (void)dataWillChange;
- (void)dataDidChanged;

- (void)layoutWillBegin;
- (void)layoutDidFinish;

- (void)stateWillChange;
- (void)stateDidChanged;

@end

#endif	// #if (TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR)