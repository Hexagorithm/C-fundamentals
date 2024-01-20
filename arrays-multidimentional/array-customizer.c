#include <stdio.h>

int main() {
	printf("This program lets your customize an array!");
	int option;
	int array[2][3][5] = { { {1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}} , { {1,1,1,1,1,},{1,1,1,1,1},{1,1,1,1,1}}};
	int len1 = 2;
	int len2 = 3;
	int len3 = 5;
	int a;
	int b;
	int c;
	int value;
	while (1) {

		printf("Your array:\n");
		printf("{ \n");
		for (int x = 0; x < len1; x++) {
			printf("  { \n");
			for (int y = 0; y < len2; y++) {
				printf("    { \n");
				for (int z = 0; z < len2; z++) {
					printf("      %d\n",array[x][y][z]);
				}
				printf("    }\n");
			}
			printf("  }\n");
		}
		printf("}\n");

			printf("Options:\n");	
			printf("   0 Exit program\n");
			printf("   1 change a value\n");
			printf(":");
			scanf("\n%d",&option);
			if (option == 0) {
				break;	
			}
			else if (option == 1) {
				printf("  Please input the 0. index of the value.\n:");
				scanf("\n%d",&a);
				printf("    Please input the 1. index of the value.\n");
				scanf("\n%d",&b);
				printf("      Please input the 2. index of the value.\n");
				scanf("\n%d",&c);
				printf("Please input the value.\n");
				scanf("\n%d",&value);
				array[a][b][c] = value;	
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		
			}
			else {
				printf("Your option is not valid!\n");
			}

			
		}


	return 0;
}


