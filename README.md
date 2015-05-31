# ColourPrinter: The Easy, Cross-Platform ColourPrinter for Windows and UNIX OS's

Colour Printer is a cross-platform C library that lets you print text in colour!

## Installation

First add the ColourPrinter.h and ColourPrinter.m files in the directory your project is in. I'm currently assuming that those files are in the same directory as the project files.

In your C/C++/Objective-C program, add

```
#include "ColourPrinter.h"
```

###Example:

```
#include "ColourPrinter.h"

int main(int argc, const char * argv[]) {
    cPuts("Hello World", purple);
    return 0;
}
```

## Compatibility

I have tested this with Clang on Mac OS X 10.10 (included with XCode Dev Tools), MINGW C compiler for Windows 8.1, and GCC 4.8.2 on Ubuntu 14.04.
Visual C++ has not been tested, but it should work.

## FAQ

###I want to help, can I?
Absolutely, you can. Feel free to submit a pull request or issue. I will reply, usually by 24 hrs. Not all pull requests can be honoured, please do not be discouraged if it is rejected.

###Members working on this project

vidurgupta01 - Owner
