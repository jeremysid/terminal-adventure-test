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

	char introOne[] = {"Welcome Pick from these options: Start, Exit \n"};
	char start[] = {"Start"};
	char exit[] = {"Exit"};
	char input[20];
	int valueOne;
	int valueTwo;

	printf("%s\n", introOne);
	printf("Type your option: ");
	scanf("%s", input);

	valueOne = strcmp(start, input);
	valueTwo = strcmp(exit, input);

	if(valueOne == 0)
		printf("Start");
	if(valueTwo == 0)
		printf("Exit");


}
int main() {

	firstPart();
	secondPart();

	return 0;
}
