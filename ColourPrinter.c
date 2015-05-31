//
//  ColourPrinter.c
//  ColourPrinter
//
//  Created by Vidur Gupta on 5/30/15.
//  Copyright (c) 2015 Vidur Gupta. All rights reserved.
//

#include "ColourPrinter.h"

void colourPrint(char *string, char *colour) {
#ifdef _WIN32
    
#else
    printf("\033[%sm%s%s", colour, string, END_COLOUR);
#endif
}