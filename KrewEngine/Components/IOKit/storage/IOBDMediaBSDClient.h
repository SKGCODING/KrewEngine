I//
//  IOBDMediaBSDClient.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Header_h
#define Header_h

#ifndef _IOBDMEDIABSDCLIENT_H
#define _IOBDMEDIABSDCLIENT_H

#include <sys/ioctl.h>
#include <sys/types.h>

#include <IOKit/storage/IOBDTypes.h>

/*
 * Definitions
 *
 * ioctl                        description
 * ---------------------------- ------------------------------------------------
 * DKIOCBDREADSTRUCTURE         see IOBDMedia::readStructure()    in IOBDMedia.h
 *
 * DKIOCBDREADDISCINFO          see IOBDMedia::readDiscInfo()     in IOBDMedia.h
 * DKIOCBDREADTRACKINFO         see IOBDMedia::readTrackInfo()    in IOBDMedia.h
 *
 * DKIOCBDREPORTKEY             see IOBDMedia::reportKey()        in IOBDMedia.h
 * DKIOCBDSENDKEY               see IOBDMedia::sendKey()          in IOBDMedia.h
 *
 * DKIOCBDGETSPEED              see IOBDMedia::getSpeed()         in IOBDMedia.h
 * DKIOCBDSETSPEED              see IOBDMedia::setSpeed()         in IOBDMedia.h
 *
 *         in /System/Library/Frameworks/Kernel.framework/Headers/IOKit/storage/
 */

typedef struct
{
    uint8_t  format;
    
    uint8_t  reserved0008[3];                      /* reserved, clear to zero */
    
    uint32_t address;
    uint8_t  grantID;
    uint8_t  layer;
    
    uint8_t  reserved0080[4];                      /* reserved, clear to zero */
    
    uint16_t bufferLength;
    void *   buffer;
} dk_bd_read_structure_t;

typedef struct
{
    uint8_t  format;
    uint8_t  keyClass;
    uint8_t  blockCount;
    
    uint8_t  reserved0024[1];                         /* reserved, clear to zero */
    
    uint32_t address;
    uint8_t  grantID;
    
    uint8_t  reserved0072[5];                      /* reserved, clear to zero */
    
    uint16_t bufferLength;
    void *   buffer;
} dk_bd_report_key_t;

typedef struct
{
    uint8_t  format;
    uint8_t  keyClass;
    
    uint8_t  reserved0016[6];                      /* reserved, clear to zero */
    
    uint8_t  grantID;
    
    uint8_t  reserved0072[5];                      /* reserved, clear to zero */
    
    uint16_t bufferLength;
    void *   buffer;
} dk_bd_send_key_t;

typedef struct
{
    uint8_t  reserved0000[14];                     /* reserved, clear to zero */
    
    uint16_t bufferLength;                         /* actual length on return */
    void *   buffer;
} dk_bd_read_disc_info_t;

typedef struct
{
    uint8_t  reserved0000[4];                      /* reserved, clear to zero */
    
    uint32_t address;
    uint8_t  addressType;
    
    uint8_t  reserved0072[5];                      /* reserved, clear to zero */
    
    uint16_t bufferLength;                         /* actual length on return */
    void *   buffer;
} dk_bd_read_track_info_t;

#define DKIOCBDREADSTRUCTURE   _IOW('d', 160, dk_bd_read_structure_t)
#define DKIOCBDREPORTKEY       _IOW('d', 161, dk_bd_report_key_t)
#define DKIOCBDSENDKEY         _IOW('d', 162, dk_bd_send_key_t)

#define DKIOCBDGETSPEED        _IOR('d', 163, uint16_t)
#define DKIOCBDSETSPEED        _IOW('d', 163, uint16_t)

#define DKIOCBDREADDISCINFO    _IOWR('d', 164, dk_bd_read_disc_info_t)
#define DKIOCBDREADTRACKINFO   _IOWR('d', 165, dk_bd_read_track_info_t)

#define DKIOCBDSPLITTRACK      _IOW('d', 166, uint32_t)

#endif /* !_IOBDMEDIABSDCLIENT_H */

#endif /* Header_h */
