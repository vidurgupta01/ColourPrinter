//
//  ColourPrinter.h
//  ColourPrinter
//
//  Created by Vidur Gupta on 5/30/15.
//  Copyright (c) 2015 Vidur Gupta. All rights reserved.
//

#ifndef __ColourPrinter__ColourPrinter__
#define __ColourPrinter__ColourPrinter__

#include <stdio.h>

#ifdef _WIN32
// Windows: To be implemented
#else

// Colours
#define END_COLOUR "\033[0m"
#define black "0;30"
#define dark_grey "1;30"
#define blue "0;34"
#define light_blue "1;34"
#define green "0;32"
#define light_green "1;32"
#define cyan "0;36"
#define light_cyan "1;36"
#define red "0;31"
#define light_red "1;31"
#define purple "0;35"
#define light_purple "1;35"
#define brown_orange "0;33"
#define yellow "1;33"
#define light_grey "0;37"
#define white "1;37"

// cPuts Macro Definition
#define cPuts(string, colour) printf("\033[%sm%s%s\n", colour, string, END_COLOUR);

#endif
#endif /* defined(__ColourPrinter__ColourPrinter__) */
