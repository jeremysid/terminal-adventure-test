#include<stdio.h>
#include<string.h>
#include"functions.h"

int startFunc(void) {

firstPart();
secondPart();
}

int exitFunc(void) {

printf("Exit\n");
}

int main() {

	startFunc();
	return 0;
}

void firstPart() {

	printf("Welcome to Terminal Adventure(Stable)\n");
	printf("Enter your Name: ");
	scanf("%s", name);
	printf("Welcome %s\n", name);
}

void secondPart() {

	char introOne[] = {"Welcome Pick from these options: Start(1), Exit(2) \n"};
	int input[20];
	int start = 1;
	int exit = 2;

	printf("%s\n", introOne);
	printf("Type your option: ");
	scanf("%d", input);

	if (*input == start) {
		thirdPart();
	} else if (*input == exit) {
		exitFunc();
	} else { exitFunc(); }

}

void thirdPart() {

	monologue();	
}

void monologue() {

	char introTwo[] = {"Why do you exist?\n"};
    char options[] = {"pick from options: Stable(1), Unstable(2)\n"};
    int stable = 1;
    int unstable = 2;
	int input[10];
	
	printf("%s", introTwo);
	printf("%s", options);
	printf(">> ");
	scanf("%d", input);	
	
	if (*input == stable) {
		printf("To get Stronger\n");
		printf("???: I see well good LUCK \n");
		continuePromptStable();
	} else if (*input == unstable) {
		printf("Not Available\n");
		exitFunc();
	} else { exitFunc(); } 

}

void nothing() {

	printf("Why do you choose Nothing?\n");

}

void stablePath() {

	printf("Well then, enjoy \n");
	stablePathChoices();
}
void stablePathChoices() {

	stablePartOne();

}

void stablePartOne() {

	printf("Part One - Stable\n");
	
}


void continuePromptStable() {

	char continueIntro[] = {"Do you wish to Continue?\n"};
	char options[] = {"Options: Yes(1),No(2)\n"};
	int yes = 1;
	int no = 2;
	int input[10];

	printf("%s\n", continueIntro);
	printf("%s\n", options);
	printf(">> ");
	scanf("%d", input);

	if (yes == *input) {
		printf("Continue\n");
		stablePath();
	} else if (no ==*input) ( exitFunc() );
		else { exitFunc(); }
}

