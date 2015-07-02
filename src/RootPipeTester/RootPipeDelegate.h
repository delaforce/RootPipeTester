//
//  RootPipeDelegate.h
//  RootPipeTester
//
//  Created by Takashi Yoshi on 11.04.2015.
//  Copyright 2015 Takashi Yoshi.
//  
//  
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//  
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//  
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#include <unistd.h>
#import <Cocoa/Cocoa.h>
#import "RootPipeTest.h"
#import "RPTDAPlugIn.h"

@interface RootPipeDelegate : NSObject {
    IBOutlet NSWindow *mainWindow;
	IBOutlet NSButton *startButton;
    IBOutlet NSTextView *textOutput;
	
	RootPipeTest *_rpTest;
}

- (IBAction)startTest:(NSButton *)sender;
- (void)initiateAutomatedTesting;

@end
