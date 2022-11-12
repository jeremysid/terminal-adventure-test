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

void firstPart() {
	
	printf("Welcome to Terminal Adventure\n");
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

	if(valueOne == 0)
		thirdPart();
	if(valueTwo == 0)
		printf("Farewell, %s", name);


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

	if(valueThree == 0)
		printf("Stable");
	if(valueFour == 0)
		printf("Unstable");
	if(valueFive == 0)
		nothing();

}

void nothing() {

	printf("Why do you choose Nothing?\n");

}

int main() {

	firstPart();
	secondPart();

	return 0;
}
