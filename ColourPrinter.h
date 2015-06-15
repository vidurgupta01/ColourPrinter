//
//  ColourPrinter.h
//  ColourPrinter
//
//  Created by Vidur Gupta on 5/30/15.
//  Copyright (c) 2015 Vidur Gupta. All rights reserved.
//

#ifndef __ColourPrinter__ColourPrinter__
#define __ColourPrinter__ColourPrinter__

#include <stdio.h> /* printf(), puts(), fputs(), vfprintf() */

#ifdef _WIN32

#include <windows.h> /* STD_OUTPUT_HANDLE, GetStdHandle(), SetConsoleTextAttribute(), HANDLE */
#include <stdarg.h> /* va_list, va_start(), va_end() */

// Colours
#define black 0
#define dark_grey 8
#define blue 9
#define light_blue 115
#define green 2
#define light_green 138
#define cyan 3
#define light_cyan 155
#define red 4
#define light_red 116
#define purple 5
#define light_purple 21
#define brown_orange 6
#define yellow 14
#define light_grey 24
#define white 7

// Functions
void cPuts(char *string, unsigned char colour) {
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, colour);
	puts(string);
	SetConsoleTextAttribute(hConsole, white);
}

void cPuts_noline(char *string, unsigned char colour) {
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, colour);
	fputs(string, stdout);
	SetConsoleTextAttribute(hConsole, white);
}

void cPrintf(unsigned char colour, char *string, ...) {
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, colour);
	va_list args;
	va_start(args, string);
	vfprintf(stdout, string, args);
	va_end(args);
	SetConsoleTextAttribute(hConsole, white);
}
#else

// Colours
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

// Macro Definitions
#define cPuts(string, colour) printf("\033[%sm%s\033[0m\n", colour, string);
#define cPuts_noline(string, colour) printf("\033[%sm%s\033[0m", colour, string);
#define cPrintf(colour, string, ...) printf("\033[" colour "m" string "\033[0m", __VA_ARGS__);

#endif
#endif /* defined(__ColourPrinter__ColourPrinter__) */
