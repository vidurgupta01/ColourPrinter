//
//  test.c
//  ColourPrinter
//
//  Created by Vidur Gupta on 5/24/15.
//  Copyright (c) 2015 Vidur Gupta. All rights reserved.
//

#include "ColourPrinter.h"

int main(int argc, const char * argv[]) {
    cPuts_noline("I am printing something with no new line!", purple);
    cPuts("\nNow we are in new line", yellow)
    cPrintf(blue, "This support formatted strings, like %d, and let's try %s", 5, "string");
    return 0;
}
