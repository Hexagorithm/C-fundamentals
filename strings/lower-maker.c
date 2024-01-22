#include <stdio.h>
#include <ctype.h>

int main() {
	char word[20];
	int len = 20;
	printf("Please input the word you want to upper:");
	scanf("%s",word);
	for (int i = 0; i < 20; i++) {
		word[i]	= tolower(word[i]);
	}
	printf("Your string: %s\n",word);
	return 0;
}
