#include <stdio.h>

// the char datatype with size of 1 byte
// its format specifier is %c
// its datatype keyword is 'char'
// char variables are actually stored as numbers, (encoded by ASCII)
// ASCII = ASCII-CONTROL-CHARACTERS(0-31,127) + ASCII-PRINTABLE-CHARACTERS(32-126) + EXTENDED-ASCII-CHARACTERS(128-255)
// printables are the alphabet boys 
int main() { 
	char character = 'a';
	printf("Here is my character decoded from ascii table: %c\n", character);
	printf("HEre is the same character coded in decimal: %d\n", character);
	return 0;
}
