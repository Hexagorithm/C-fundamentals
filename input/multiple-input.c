#include <stdio.h>

int main() {
	int int1;
	int int2;
	printf("With syntax '<int1>|<int2>', please input 2 integer values!\n$");
	scanf("%d|%d", &int1, &int2);
	printf("Value 1: %d\nValue 2: %d\n", int1, int2);
	return 0;
}
