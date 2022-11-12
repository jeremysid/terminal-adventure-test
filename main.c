#include<stdio.h>
#include<string.h>
// global variables
	char name[30];
	char compChoice(char search);

void firstPart() {

	printf("Enter your name: \n");
	scanf("%s", name);
	printf("Welcome %s\n", name);
}

void secondPart() {

  char choice[10];
  
  do {
	  printf("Choices: Start, Exit \n");
	  printf("Enter Choice: ");
	  scanf("%s", choice);
		
	 } while (choice == "Start");
        for (choice == "Exit"; ;){
		  printf("Exit\n");
		  break;
	   };

}

int main() {

	firstPart();
	secondPart();

	return 0;
}
