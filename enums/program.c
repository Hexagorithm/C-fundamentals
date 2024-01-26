#include <stdio.h>

enum daysofweek {
	monday = 0,
	tuesday = 1,
	wednesday = 2,
	thursday = 3,
	friday = 4,
	saturday = 5,
	sunday = 6
}days;

int main() {
	printf("Enums don't really have a unique purpose or function.\n");
	printf("ENums are used in order to declare constants, variables we know they won\'t change.\n");
	printf("friday is the %d day of the week(starting from 0)!\n",friday);
	return 0;
}

