#include<stdio.h>

// global variables
	char name[30];
	

void firstPart() {

	printf("Enter your name: \n");
	scanf("%s", name);
	printf("Welcome %s\n", name);
}

void secondPart() {

	// char pick[] = ();

	printf("");
	char choices[] = {'A', ',', 'B', '\0'};
	
	printf("Choices: \n");
	printf("%c", choices[0]);
	printf("%c", choices[1]);
	printf("%c", choices[2]);



}

int main() {

	firstPart();
	secondPart();

	return 0;
}
