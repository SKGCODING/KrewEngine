//
//  Fonts.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 19/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Fonts_h
#define Fonts_h

#ifndef __ATSTYPES__
#include <ATS/ATSTypes.h>
#endif




#include <AvailabilityMacros.h>

#if PRAGMA_ONCE
#pragma once
#endif

#pragma pack(push, 2)

struct FontRec {
    SInt16              fontType;               /*font type*/
    SInt16              firstChar;              /*ASCII code of first character*/
    SInt16              lastChar;               /*ASCII code of last character*/
    SInt16              widMax;                 /*maximum character width*/
    SInt16              kernMax;                /*negative of maximum character kern*/
    SInt16              nDescent;               /*negative of descent*/
    SInt16              fRectWidth;             /*width of font rectangle*/
    SInt16              fRectHeight;            /*height of font rectangle*/
    UInt16              owTLoc;                 /*offset to offset/width table*/
    SInt16              ascent;                 /*ascent*/
    SInt16              descent;                /*descent*/
    SInt16              leading;                /*leading*/
    SInt16              rowWords;               /*row width of bit image / 2 */
};
typedef struct FontRec                  FontRec;
typedef FontRec *                       FontRecPtr;
typedef FontRecPtr *                    FontRecHdl;
struct FMInput {
    short               family;
    short               size;
    Style               face;
    Boolean             needBits;
    short               device;
    Point               numer;
    Point               denom;
};
typedef struct FMInput                  FMInput;
struct FamRec {
    SInt16              ffFlags;                /*flags for family*/
    SInt16              ffFamID;                /*family ID number*/
    SInt16              ffFirstChar;            /*ASCII code of 1st character*/
    SInt16              ffLastChar;             /*ASCII code of last character*/
    SInt16              ffAscent;               /*maximum ascent for 1pt font*/
    SInt16              ffDescent;              /*maximum descent for 1pt font*/
    SInt16              ffLeading;              /*maximum leading for 1pt font*/
    SInt16              ffWidMax;               /*maximum widMax for 1pt font*/
    SInt32              ffWTabOff;              /*offset to width table*/
    SInt32              ffKernOff;              /*offset to kerning table*/
    SInt32              ffStylOff;              /*offset to style mapping table*/
    SInt16              ffProperty[9];          /*style property info*/
    SInt16              ffIntl[2];              /*for international use*/
    SInt16              ffVersion;              /*version number*/
};
typedef struct FamRec                   FamRec;
struct AsscEntry {
    SInt16              fontSize;
    SInt16              fontStyle;
    SInt16              fontID;
};
typedef struct AsscEntry                AsscEntry;
struct FontAssoc {
    SInt16              numAssoc;
};
typedef struct FontAssoc                FontAssoc;
struct StyleTable {
    SInt16              fontClass;
    SInt32              offset;
    SInt32              reserved;
    char                indexes[48];
};
typedef struct StyleTable               StyleTable;
struct NameTable {
    SInt16              stringCount;
    Str255              baseFontName;
};
typedef struct NameTable                NameTable;
struct KernPair {
    char                kernFirst;              /*1st character of kerned pair*/
    char                kernSecond;             /*2nd character of kerned pair*/
    SInt16              kernWidth;              /*kerning in 1pt fixed format*/
};
typedef struct KernPair                 KernPair;
struct KernEntry {
    SInt16              kernStyle;              /*style the entry applies to*/
    SInt16              kernLength;             /*length of this entry*/
};
typedef struct KernEntry                KernEntry;
struct KernTable {
    SInt16              numKerns;
};
typedef struct KernTable                KernTable;

#pragma pack(pop)

#endif /* Fonts_h */
