#include<stdio.h>
#include<string.h>
// global variables
	char name[30];

// Functions
void firstPart();
void secondPart();
void thirdPart();


void firstPart() {
	
	printf("Welcome to Terminal Adventure\n");
	printf("Enter your name: ");
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

	if(valueOne == 0)
		thirdPart();
	if(valueTwo == 0)
		printf("Exit");


}

void thirdPart() {
	
	printf("Nothing Yet \n");		
	
}

int main() {

	firstPart();
	secondPart();

	return 0;
}
