//
//  IOAudioLib.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOAudioLib_h
#define IOAudioLib_h

#ifndef _IOAUDIOLIB_H
#define _IOAUDIOLIB_H

#include <IOKit/audio/IOAudioTypes.h>

#if 0

#ifdef __cplusplus
extern "C" {
#endif
    
    /*!
     * @function IOAudioIsOutput
     * @abstract Determines if the audio stream is an output stream
     * @param service
     * @param out
     * @result kern_return_t
     */
    kern_return_t IOAudioIsOutput(io_service_t service, int *out);
    
    /*!
     * @function IOAudioFlush
     * @abstract Indicate the position at which the audio stream can be stopped.
     * @param connect the audio stream
     * @param end the position
     * @result kern_return_t
     */
    kern_return_t IOAudioFlush(io_connect_t connect, IOAudioStreamPosition *end);
    
    /*!
     * @function IOAudioSetErase
     * @abstract Set autoerase flag, returns old value
     * @param connect the audio stream
     * @param erase true to turn off, false otherwise
     * @param oldVal previous value
     * @result kern_return_t
     */
    kern_return_t IOAudioSetErase(io_connect_t connect, int erase, int *oldVal);
    
#ifdef __cplusplus
}
#endif

#endif /* 0 */

#endif /* ! _IOAUDIOLIB_H */


#endif /* IOAudioLib_h */
