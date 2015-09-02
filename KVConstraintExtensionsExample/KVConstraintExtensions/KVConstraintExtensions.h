//  
//  KVConstraintExtensions.h
//  https://github.com/keshavvishwkarma/KVConstraintExtensionsMaster.git
//
//  Distributed under the MIT License.
//  
//  Copyright (c) 2015 Keshav Vishwkarma
//  
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to
//  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
//  of the Software, and to permit persons to whom the Software is furnished to do
//  so, subject to the following conditions:
//  
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
//


#ifndef KVConstraintExtensionsExample_KVConstraintExtensions_h
#define KVConstraintExtensionsExample_KVConstraintExtensions_h

#import "UIView+KVConstraintExtensions.h"
#import "UIViewController+KVConstraintExtensions.h"
#import "NSLayoutConstraint+KVConstraintExtensions.h"

#if DEBUG == 0
#define KVLog(...)
#elif DEBUG == 1
#define KVLog(...) NSLog(__VA_ARGS__)
#endif

#endif
