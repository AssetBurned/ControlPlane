//
//	AudioOutputRule.h
//	ControlPlane
//
//	Created by David Jennes on 24/09/11.
//	Copyright 2011. All rights reserved.
//

#import <Plugins/Rules.h>

@interface AudioOutputRule : Rule<RuleProtocol> {
	NSNumber *m_output;
}

@end
