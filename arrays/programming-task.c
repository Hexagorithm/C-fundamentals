#include <stdio.h>

double gradeDoubleList[] = {};
int length = 0;
double grade;

int main() {
	int option;
	printf("This program calucates your average based on your individual grades!\n");
	while (1) {
		printf("\n\n");
		printf("Options:\n");
		printf("	0 exit program\n");
		printf("	1 print average of your currently inputted grades\n");
		printf("	2 input another grade\n");
		printf("	3 delete a grade\n");
		printf("\n");
		printf(":");
		
		scanf("\n%d"&option);
	
		printf("\n\n\n\n\n\n\n\n\n");
		if (option == 0) {
			break;	
		}
		else if (option == 1) {
			DO SOMETING	
		}
		else if (option == 2) {
			DO SOMETHING	
		}
		else if (option == 3) {
			DO SOMETHING	
		}
		else {
			DO SOMETHING
		}


	}
	return 0;
}

void inputInvalid() {
	printf("Your input is invalid!\n");
}

void addGrade() {
	printf("You have selected to add a grade!\n");
	printf("Please input a double format representation of grade!\n:");
	scanf("\n%lf",&grade);
	gradeDoubleList[length] = grade;
	length++;
	printf("Grade succesfully added!");
}
