/*
The MIT License (MIT)

Copyright (c) 2015 Lorhan Sohaky

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include <stdio.h>
#include <stdbool.h>
#include <Morse.h>

bool morse(char *text){
	if(text==NULL){
		return false;
	}
	unsigned int i;
	for(i=0; i<strlen(text); i++) {
		switch(text[i]) {
		case 'A':
			Beep (2000,100);Sleep(20);
			Beep (2000,500);
			break;
		case 'B':
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);
			break;
		case 'C':
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);
			break;
		case 'D':
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);
			break;
		case 'E':
			Beep (2000,100);
			break;
		case 'F':
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);
			break;
		case 'G':
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);
			break;
		case 'H':
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);
			break;
		case 'I':
			Beep (2000,100);Sleep(20);
			Beep (2000,100);
			break;
		case 'J':
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);
			break;
		case 'K':
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);
			break;
		case 'L':
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);
			break;
		case 'M':
			Beep (2000,500);Sleep(20);
			Beep (2000,500);
			break;
		case 'N':
			Beep (2000,500);Sleep(20);
			Beep (2000,100);
			break;
		case 'O':
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);
			break;
		case 'P':
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);
			break;
		case 'Q':
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);
			break;
		case 'R':
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);
			break;
		case 'S':
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);
			break;
		case 'T':
			Beep (2000,500);
			break;
		case 'U':
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);
			break;
		case 'V':
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);
			break;
		case 'W':
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);
			break;
		case 'X':
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);
			break;
		case 'Y':
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);
			break;
		case 'Z':
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);
			break;
		case '1':
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);
			break;
		case '2':
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);
			break;
		case '3':
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);
			break;
		case '4':
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);
			break;
		case '5':
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);
			break;
		case '6':
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);
			break;
		case '7':
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);
			break;
		case '8':
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);
			break;
		case '9':
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);
			break;
		case '0':
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);
			break;
		case '.':
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);
			break;
		case ',':
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);
			break;
		case '?':
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);
			break;
		case '/':
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);
			break;
		case '@':
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);
			break;
		case '!':
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);
			break;
		case ':':
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);
			break;
		case '"':
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);
			break;
		case '\'':
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);
			break;
		case '=':
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);
			break;
		case ';':
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);
			break;
		case '-':
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);
			break;
		case '(':
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);
			break;
		case ')':
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);
			break;
		case '_':
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);
			break;
		case '&':
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);
			break;
		case '$':
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);
			break;
		case '+':
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);Sleep(20);
			Beep (2000,500);Sleep(20);
			Beep (2000,100);
			break;
		default:
			Sleep(100);
		}
		Sleep(200);
	}
	return true;
}
