//
//  ftbbox.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 05/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef ftbbox_h
#define ftbbox_h

#ifndef FTBBOX_H_
#define FTBBOX_H_


#include <ft2build.h>
#include FT_FREETYPE_H

#ifdef FREETYPE_H
#error "freetype.h of FreeType 1 has been loaded!"
#error "Please fix the directory search order for header files"
#error "so that freetype.h of FreeType 2 is found first."
#endif


FT_BEGIN_HEADER


/*************************************************************************/
/*                                                                       */
/* <Section>                                                             */
/*    outline_processing                                                 */
/*                                                                       */
/*************************************************************************/


/*************************************************************************/
/*                                                                       */
/* <Function>                                                            */
/*    FT_Outline_Get_BBox                                                */
/*                                                                       */
/* <Description>                                                         */
/*    Compute the exact bounding box of an outline.  This is slower      */
/*    than computing the control box.  However, it uses an advanced      */
/*    algorithm that returns _very_ quickly when the two boxes           */
/*    coincide.  Otherwise, the outline Bezier arcs are traversed to     */
/*    extract their extrema.                                             */
/*                                                                       */
/* <Input>                                                               */
/*    outline :: A pointer to the source outline.                        */
/*                                                                       */
/* <Output>                                                              */
/*    abbox   :: The outline's exact bounding box.                       */
/*                                                                       */
/* <Return>                                                              */
/*    FreeType error code.  0~means success.                             */
/*                                                                       */
/* <Note>                                                                */
/*    If the font is tricky and the glyph has been loaded with           */
/*    @FT_LOAD_NO_SCALE, the resulting BBox is meaningless.  To get      */
/*    reasonable values for the BBox it is necessary to load the glyph   */
/*    at a large ppem value (so that the hinting instructions can        */
/*    properly shift and scale the subglyphs), then extracting the BBox, */
/*    which can be eventually converted back to font units.              */
/*                                                                       */
FT_EXPORT( FT_Error )
FT_Outline_Get_BBox( FT_Outline*  outline,
                    FT_BBox     *abbox );

/* */


FT_END_HEADER

#endif /* FTBBOX_H_ */

#endif /* ftbbox_h */
