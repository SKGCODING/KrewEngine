//
//  IOReturn.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOReturn_h
#define IOReturn_h

#ifndef __IOKIT_IORETURN_H
#define __IOKIT_IORETURN_H

#ifdef __cplusplus
extern "C" {
#endif
    
#include <mach/error.h>
    
    typedef    kern_return_t        IOReturn;
    
#ifndef sys_iokit
#define sys_iokit                         err_system(0x38)
#endif /* sys_iokit */
#define sub_iokit_common                  err_sub(0)
#define sub_iokit_usb                     err_sub(1)
#define sub_iokit_firewire                err_sub(2)
#define sub_iokit_block_storage           err_sub(4)
#define sub_iokit_graphics                err_sub(5)
#define sub_iokit_networking              err_sub(6)
#define sub_iokit_bluetooth               err_sub(8)
#define sub_iokit_pmu                     err_sub(9)
#define sub_iokit_acpi                    err_sub(10)
#define sub_iokit_smbus                   err_sub(11)
#define sub_iokit_ahci                    err_sub(12)
#define sub_iokit_powermanagement         err_sub(13)
#define sub_iokit_hidsystem               err_sub(14)
#define sub_iokit_scsi                    err_sub(16)
#define sub_iokit_usbaudio                err_sub(17)
    //#define sub_iokit_pccard                err_sub(21)
#define sub_iokit_thunderbolt             err_sub(29)
#define sub_iokit_graphics_acceleration      err_sub(30)
#define sub_iokit_keystore                err_sub(31)
#define sub_iokit_platform                err_sub(0x2A)
#define sub_iokit_audio_video             err_sub(0x45)
#define sub_iokit_cec                     err_sub(0x46)
#define sub_iokit_baseband                err_sub(0x80)
#define sub_iokit_HDA                     err_sub(0xFE)
#define sub_iokit_hsic                    err_sub(0x147)
#define sub_iokit_sdio                    err_sub(0x174)
#define sub_iokit_wlan                    err_sub(0x208)
#define sub_iokit_appleembeddedsleepwakehandler  err_sub(0x209)
    
#define sub_iokit_vendor_specific         err_sub(-2)
#define sub_iokit_reserved                err_sub(-1)
    
#define    iokit_common_err(return)          (sys_iokit|sub_iokit_common|return)
#define    iokit_family_err(sub,return)      (sys_iokit|sub|return)
#define iokit_vendor_specific_err(return) (sys_iokit|sub_iokit_vendor_specific|return)
    
#define kIOReturnSuccess         KERN_SUCCESS            // OK
#define kIOReturnError           iokit_common_err(0x2bc) // general error
#define kIOReturnNoMemory        iokit_common_err(0x2bd) // can't allocate memory
#define kIOReturnNoResources     iokit_common_err(0x2be) // resource shortage
#define kIOReturnIPCError        iokit_common_err(0x2bf) // error during IPC
#define kIOReturnNoDevice        iokit_common_err(0x2c0) // no such device
#define kIOReturnNotPrivileged   iokit_common_err(0x2c1) // privilege violation
#define kIOReturnBadArgument     iokit_common_err(0x2c2) // invalid argument
#define kIOReturnLockedRead      iokit_common_err(0x2c3) // device read locked
#define kIOReturnLockedWrite     iokit_common_err(0x2c4) // device write locked
#define kIOReturnExclusiveAccess iokit_common_err(0x2c5) // exclusive access and
    //   device already open
#define kIOReturnBadMessageID    iokit_common_err(0x2c6) // sent/received messages
    //   had different msg_id
#define kIOReturnUnsupported     iokit_common_err(0x2c7) // unsupported function
#define kIOReturnVMError         iokit_common_err(0x2c8) // misc. VM failure
#define kIOReturnInternalError   iokit_common_err(0x2c9) // internal error
#define kIOReturnIOError         iokit_common_err(0x2ca) // General I/O error
    //#define kIOReturn???Error      iokit_common_err(0x2cb) // ???
#define kIOReturnCannotLock      iokit_common_err(0x2cc) // can't acquire lock
#define kIOReturnNotOpen         iokit_common_err(0x2cd) // device not open
#define kIOReturnNotReadable     iokit_common_err(0x2ce) // read not supported
#define kIOReturnNotWritable     iokit_common_err(0x2cf) // write not supported
#define kIOReturnNotAligned      iokit_common_err(0x2d0) // alignment error
#define kIOReturnBadMedia        iokit_common_err(0x2d1) // Media Error
#define kIOReturnStillOpen       iokit_common_err(0x2d2) // device(s) still open
#define kIOReturnRLDError        iokit_common_err(0x2d3) // rld failure
#define kIOReturnDMAError        iokit_common_err(0x2d4) // DMA failure
#define kIOReturnBusy            iokit_common_err(0x2d5) // Device Busy
#define kIOReturnTimeout         iokit_common_err(0x2d6) // I/O Timeout
#define kIOReturnOffline         iokit_common_err(0x2d7) // device offline
#define kIOReturnNotReady        iokit_common_err(0x2d8) // not ready
#define kIOReturnNotAttached     iokit_common_err(0x2d9) // device not attached
#define kIOReturnNoChannels      iokit_common_err(0x2da) // no DMA channels left
#define kIOReturnNoSpace         iokit_common_err(0x2db) // no space for data
    //#define kIOReturn???Error      iokit_common_err(0x2dc) // ???
#define kIOReturnPortExists      iokit_common_err(0x2dd) // port already exists
#define kIOReturnCannotWire      iokit_common_err(0x2de) // can't wire down
    //   physical memory
#define kIOReturnNoInterrupt     iokit_common_err(0x2df) // no interrupt attached
#define kIOReturnNoFrames        iokit_common_err(0x2e0) // no DMA frames enqueued
#define kIOReturnMessageTooLarge iokit_common_err(0x2e1) // oversized msg received
    //   on interrupt port
#define kIOReturnNotPermitted    iokit_common_err(0x2e2) // not permitted
#define kIOReturnNoPower         iokit_common_err(0x2e3) // no power to device
#define kIOReturnNoMedia         iokit_common_err(0x2e4) // media not present
#define kIOReturnUnformattedMedia iokit_common_err(0x2e5)// media not formatted
#define kIOReturnUnsupportedMode iokit_common_err(0x2e6) // no such mode
#define kIOReturnUnderrun        iokit_common_err(0x2e7) // data underrun
#define kIOReturnOverrun         iokit_common_err(0x2e8) // data overrun
#define kIOReturnDeviceError     iokit_common_err(0x2e9) // the device is not working properly!
#define kIOReturnNoCompletion     iokit_common_err(0x2ea) // a completion routine is required
#define kIOReturnAborted     iokit_common_err(0x2eb) // operation aborted
#define kIOReturnNoBandwidth     iokit_common_err(0x2ec) // bus bandwidth would be exceeded
#define kIOReturnNotResponding     iokit_common_err(0x2ed) // device not responding
#define kIOReturnIsoTooOld     iokit_common_err(0x2ee) // isochronous I/O request for distant past!
#define kIOReturnIsoTooNew     iokit_common_err(0x2ef) // isochronous I/O request for distant future
#define kIOReturnNotFound        iokit_common_err(0x2f0) // data was not found
#define kIOReturnInvalid         iokit_common_err(0x1)   // should never be seen
    
#ifdef __cplusplus
}
#endif

#endif /* ! __IOKIT_IORETURN_H */


#endif /* IOReturn_h */
