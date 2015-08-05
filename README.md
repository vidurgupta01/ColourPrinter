# ColourPrinter: The Easy, Cross-Platform ColourPrinter for Windows and UNIX OS's

Colour Printer is a cross-platform C library that lets you print text in colour!

## Installation

First add the ColourPrinter.h file in the directory your project is in. I'm currently assuming that that file are in the same directory as the project files.

In your C/C++/Objective-C program, add

```c
#include "ColourPrinter.h"
```

## Supported colours:
- black
- dark_grey
- blue
- light_blue
- green
- light_green
- cyan
- light_cyan
- red
- light_red
- purple
- light_purple
- brown_orange
- yellow
- light_grey
- white

## Functions

### Available functions:
- `cPuts()`
- `cPuts_noline()`
- `cPrintf()`

#### `cPuts()`
```c
#define cPuts(string, colour) printf("\033[%sm%s%s\n", colour, string, END_COLOUR);
```
It is similar to the C function ```puts()```, found in ```stdio.h```. It prints out text to ```stdout``` that does not need to be formatted, and then it appends a new line.

#### `cPuts_noline()`
```c
#define cPuts_noline(string, colour) printf("\033[%sm%s%s", colour, string, END_COLOUR);
```
It is similar to the C function ```puts()```, found in ```stdio.h```. It prints out text to ```stdout``` that does not need to be formatted; however, it does not appends a new line.

#### `cPrintf()`
```c
#define cPrintf(colour, string, ...) printf("\033[%sm", colour);printf(string, __VA_ARGS__);puts(END_COLOUR);
```
It is similar to the C function ```printf()```, found in ```stdio.h```. It prints out formatted text to ```stdout```.

## Example:

```c
 #include "ColourPrinter.h"
 
 int main(int argc, const char * argv[]) {
     cPuts_noline("I am printing something with no new line!", purple);
     cPuts("\nNow we are in new line", yellow)
     cPrintf(blue, "This support formatted strings, like %d, and let's try %s", 5, "string");
     return 0;
 }
```

## Compatibility

I have tested this with Clang on Mac OS X 10.10 (included with XCode Dev Tools), MINGW C compiler for Windows 8.1, and GCC 4.8.2 on Ubuntu 14.04.
Visual C++ has not been tested, but it should work.

## FAQ

### I want to help, can I?
Absolutely, you can. Feel free to submit a pull request or issue. I will reply, usually by 24 hrs. Not all pull requests can be honoured, please do not be discouraged if it is rejected.

### Members working on this project

vidurgupta01 - Owner
