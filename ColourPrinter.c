//
//  ColourPrinter.c
//  ColourPrinter
//
//  Created by Vidur Gupta on 5/30/15.
//  Copyright (c) 2015 Vidur Gupta. All rights reserved.
//

#include "ColourPrinter.h"

void colourPrintMac(char *string, char *colour) {
#ifndef _WIN32
    printf("\033[%sm%s%s", colour, string, END_COLOUR);
#endif
}

void colourPrintWin(char *string, char *colour) {
    /* Coming soon */
}