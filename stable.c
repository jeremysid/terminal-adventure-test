#include<stdio.h>
#include<string.h>

// global variables
char name[30];

// Functions
void firstPart();
void secondPart();
void thirdPart();
void monologue();
void nothing();
void stablePath();
void stablePathChoices();
void unstablePath();
void unstablePathChoices();
void continuePromptStable();
void continuePromptUnstable();
void stablePartOne();

int startFunc(void) {

firstPart();
secondPart();
}

int exitFunc(void) {

printf("Exit");
}

void firstPart() {

	printf("Welcome to Terminal Adventure(Stable)\n");
	printf("Enter your Alias: ");
	scanf("%s", name);
	printf("Welcome %s\n", name);
}

void secondPart() {

	char introOne[] = {"Welcome Pick from these options: Start(S), Exit(E) \n"};
	char start[] = {"S"};
	char exit[] = {"E"};
	char input[20];
	int valueOne;
	int valueTwo;

	printf("%s\n", introOne);
	printf("Type your option: ");
	scanf("%s", input);

	valueOne = strcmp(start, input);
	valueTwo = strcmp(exit, input);

	if(valueOne == 0) {
		thirdPart();
	}
	if(valueTwo == 0) {
		printf("Farewell, %s", name);
	}

}

void thirdPart() {

	monologue();	
}

void monologue() {

	char introTwo[] = {"Why do you exist?\n"};
	char options[] = {"pick from options: Stable(S), Unstable(U)\n"};
	char stable[] = {"S"};
	char unstable[] = {"U"};
	char misc[] = {"N"};
	char input[10];
	int valueThree;
	int valueFour;
	int valueFive;

	printf("%s", introTwo);
	printf("%s", options);
	scanf("%s", input);	


	valueThree = strcmp(stable, input);
	valueFour = strcmp(unstable, input);
	valueFive = strcmp(misc, input);

	switch (valueThree) {

		case 0:
			printf("To Improve\n");
			continuePromptStable();
			break;
	}
	switch (valueFour) {

		case 0:
			// printf("To Die "); 
			// continuePromptUnstable();
			exitFunc();
			break;
	}
	switch (valueFive) {

		case 0:
			nothing();
	}

/*	if(valueThree == 0)
		printf("To Improve\n"); continuePromptStable(); stablePath();
	if(valueFour == 0)
		printf("To Die "); continuePromptUnstable(); unstablePath();
	if(valueFive == 0)
		nothing();
*/
}

void nothing() {

	printf("Why do you choose Nothing?\n");

}

void stablePath() {

	printf("Well then, Good Luck %s\n", name);
	stablePathChoices();
}
void stablePathChoices() {

	stablePartOne(); 
}

void stablePartOne() {

	printf("Part One - Stable");
	
}

void unstablePath() {

	printf("Don't Continue %s\n", name);
	unstablePathChoices();
}

void unstablePathChoices() {

	printf("Unstable Path Choices");
}

void continuePromptStable() {

	char continueIntro[] = {"Do you wish to Continue?\n"};
	char options[] = {"Options: Yes(Y),No(N)"};
	char yes[] = {"Y"};
	char no[] = {"N"};
	char input[10];
	int valueSix;
	int valueSeven;

	printf("%s\n", continueIntro);
	printf("%s\n", options);
	scanf("%s", input);

	valueSix = strcmp(input, yes);
	valueSeven = strcmp(input, no);

	switch (valueSix) {

		case 0:
			printf("Contine\n");
			stablePath();
	}
/*	switch (valueSeven) {
case 0:
	exitFunc();
}
*/
/*	if(valueSix == 0)
	printf("Continue\n"); */
	if(valueSeven == 0)
		exitFunc();


}

void continuePromptUnstable() {

	char continueIntro[] = {"Do you wish to Continue?\n"};
	char options[] = {"Options: Yes(Y),No(N)"};
	char yes[] = {"Y"};
	char no[] = {"N"};
	char input[10];
	int valueSix;
	int valueSeven;

	printf("%s\n", continueIntro);
	printf("%s\n", options);
	scanf("%s", input);

	valueSix = strcmp(input, yes);
	valueSeven = strcmp(input, no);

	switch (valueSix) {

	case 0:
		printf("Contine\n");
		unstablePath();
		break;
	}
	switch (valueSeven) {

	case 0:
		exitFunc();
		break;
	}

/*	if(valueSix == 0)
	printf("Continue\n");
if(valueSeven == 0)
	exitFunc();
*/	
}

int main() {

	startFunc();
	return 0;
}
