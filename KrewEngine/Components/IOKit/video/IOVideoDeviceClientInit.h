//
//  IOVideoDeviceClientInit.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOVideoDeviceClientInt_h
#define IOVideoDeviceClientInt_h

ifndef __IOVIDEODEVICECLIENTINIT_H
#define __IOVIDEODEVICECLIENTINIT_H

#include <IOKit/IOService.h>

class IOVideoDeviceUserClientInit : public IOService
{
    OSDeclareDefaultStructors(IOVideoDeviceUserClientInit);
    
public:
    virtual bool    start(IOService* provider) ;
    virtual bool    MergeDictionaryIntoProvider(IOService* provider, OSDictionary* mergeDicttionary);
    virtual bool    MergeDictionaryIntoDictionary(OSDictionary* sourceDictionary, OSDictionary* targetDictionary);
};

#endif

#endif /* IOVideoDeviceClientInt_h */
