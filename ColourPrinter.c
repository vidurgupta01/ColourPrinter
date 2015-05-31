//
//  ColourPrinter.c
//  ColourPrinter
//
//  Created by Vidur Gupta on 5/30/15.
//  Copyright (c) 2015 Vidur Gupta. All rights reserved.
//

#include "ColourPrinter.h"

void colourPrintMac(char *string, char *colour) {
    // This preprocessor directive checks if the macro END_COLOUR is defined. When compiled with Windows, this macro is useless, and therefore we do not need to define it for Windows. We are simply ensuring that there is no exceptions when compiling on the Windows platform.
#ifdef END_COLOUR
    printf("\033[%sm%s%s", colour, string, END_COLOUR);
#endif
}

void colourPrintWin(char *string, char *colour) {
    /* Coming soon */
}