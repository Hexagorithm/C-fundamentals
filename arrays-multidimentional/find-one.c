#include <stdio.h>

int main() {
	int len = 2;
	int arr[2][2][2] = { { {0,0}, {0,0} } , { {0,1}, {0,0} } }; // arrays can't be initialized with variable lengths- because C hates logic
	printf("We have an array: ");
	printf("{ ");
	for (int x = 0; x < len; x ++) {
		printf("{ ");
		for (int y = 0; y < len; y ++) {
			printf("{ ");
			for (int z = 0; z < len; z ++) {
				printf("%d, ",arr[x][y][z]);
			}

			printf(" },");
		}
		printf(" },");

	}
	printf(" }\n");
	return 0;
}
