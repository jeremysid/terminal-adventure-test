#include<stdio.h>
#include<string.h>
#include"functions.h"

int startFunc(void) {

firstPart();
secondPart();
}

int exitFunc(void) {

printf("Exit \n");
}

int main() {

	startFunc();
	return 0;
}

void firstPart() {

	printf("Welcome to Terminal Adventure\n");
	printf("Enter your Name: ");
	scanf("%s", name);
	printf("Welcome %s\n", name);
}

void secondPart() {

	char introOne[] = {"Welcome, Pick from these options: "};
	char optionOne[] = {"Start(1)"};
	char optionTwo[] = {"Exit(2)\n"};
	int choice[20];

	printf("%s\n", introOne);
	printf("%s\n", optionOne);
	printf("%s\n", optionTwo);
	printf("Type your Choice\n");
	printf(">> ");
	scanf("%d", choice);

	switch(*choice) {
	  case 1:
		  thirdPart();
		  break;
	  case 2:
		  exitFunc();
		  break;
	default:
		  exitFunc();

	}


}

void thirdPart() {

	char introTwo[] = {"Why do you exist?\n"};
    char optionText[] = {"Pick from these options:\n"};
	char optionOne[] = {"Stable(1) = To get Stronger\n"};
	char optionTwo[] = {"Unstable(2) = To get by\n"};
	int choice[10];
	
	printf("%s", introTwo);
	printf("%s", optionText);
	printf("%s", optionOne);
	printf("%s", optionTwo);
	printf(">> ");
	scanf("%d", choice);	
	
	switch(*choice) {
		case 1:
			printf("To get Stronger\n");
			printf("???: hm interesting \n");
			continuePromptStable();
			break;
		case 2:
			printf("To get by \n");
			printf("???: well that's boring \n");
			continuePromptUnstable();
			break;
	    default:
			exitFunc(); 
	}
}

void continuePromptStable() {

	char continueIntro[] = {"Do you wish to Continue?\n"};
	char optionText[] = {"Options:"};
	char optionOne[] = {"Yes(1) "};
	char optionTwo[] = {"No(2) \n"};
	int choice[10];

	printf("%s\n", continueIntro);
	printf("%s\n", optionText);
	printf("%s\n", optionOne);
	printf("%s\n", optionTwo);
	printf(">> ");
	scanf("%d", choice);

	switch(*choice) {
		case 1:
			printf("Continue\n");
			stablePath();
			break;
		case 2:
			exitFunc();
			break;
		default:
			exitFunc();
	}

}

void continuePromptUnstable() {

	char continueIntro[] = {"Do you wish to Continue?\n"};
	char optionText[] = {"Options:"};
	char optionOne[] = {"Yes(1) "};
	char optionTwo[] = {"No(2) \n"};
	int choice[10];

	printf("%s\n", continueIntro);
	printf("%s\n", optionText);
	printf("%s\n", optionOne);
	printf("%s\n", optionTwo);
	printf(">> ");
	scanf("%d", choice);

	switch(*choice) {
		case 1:
			printf("Continue\n");
			unstablePath();
			break;
		case 2:
			exitFunc();
			break;
		default:
			exitFunc();

	}

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

void unstablePath() {

	printf("How long will you last? \n");
	unstablePathChoices();
}

void unstablePathChoices() {

	printf("Unstable Path Choices \n");
}


