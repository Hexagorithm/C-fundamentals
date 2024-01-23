#include <stdio.h>
#include <string.h>

int main() {
	printf("This program is usefull when 2 men want to compare the lengths of their... words\n");
	printf("Please input the 1. string:");
	char string1[20];
	fgets(string1,sizeof(string1),stdin);
	int len1 = strlen(string1);
	printf("Please input the 2. string:");
	char string2[20];
	fgets(string2, sizeof(string2),stdin);
	int len2 = strlen(string2);
	if (len1 > len2) {
		printf("%s is the longer word\n",string1);
	}
	else if (len1 == len2) {
		printf("You 2 gentlemen are worthy oponents!\n");
	}

	else {
		printf("%s is the longer word\n",string2);
	}
	return 0;
}
