#include<stdio.h>
#include<string.h>
// global variables
	char name[30];
	

void firstPart() {

	printf("Enter your name: \n");
	scanf("%s", name);
	printf("Welcome %s\n", name);
}

void secondPart() {

	char choices[] = {'A', ',', 'B', '\0'};
	char choiceOne[] = "Start";
	char choiceTwo[] = "Exit";

	printf("Choices: \n");
	printf("%s", choiceOne);
	printf("%c", choices[1]);
	printf("%s\n", choiceTwo);

	char userChoice[10];

	scanf("%s\n", &userChoice);

	int resOne = strncmp(choiceOne, userChoice, 10);
	int resTwo = strncmp(choiceTwo, userChoice, 10);

	if (resOne == 0) {
		printf("Start");
	}
	
	if (resTwo == 0) {
		printf("Exit");
	}
}

int main() {

	firstPart();
	secondPart();

	return 0;
}
