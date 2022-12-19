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
void unstablePath();
void unstablePathChoices();
void continuePromptStable();
void continuePromptUnstable();

int startFunc(void) {

firstPart();
secondPart();
};

int exitFunc(void) {

printf("Exit\n");
};

// Main
int main() {

	startFunc();
	return 0;
}

void firstPart() {

	printf("Welcome to Terminal Adventure\n");
	printf("Enter your Alias: ");
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
    
    if (*input == 1) (
        thirdPart()
    );
    if (*input == 2) {
        exitFunc();
    } 
    
}

void thirdPart() {

	monologue();	
}

void monologue() {

	char introTwo[] = {"Why do you exist?\n"};
    char options[] = {"pick from options: Stable(1), Unstable(2)\n"};
    int stable = 1;
    int unstable = 2;
    int nothng = 3;
	int input[10];

	printf("%s", introTwo);
	printf("%s", options);
	printf(">> "); 
	scanf("%d", input);	

    if (stable == *input) {
        // printf("To Improve\n");
        // continuePromptStable();
        printf("Not Available\n");
        exitFunc();
    }
    if (unstable == *input) {
        printf("To be Alive? \n");
        printf("???: Interesting \n");
        continuePromptUnstable();
    }
    if (nothng == *input) {
        nothing();
    }
    
}

void nothing() {

	printf("Why do you choose Nothing?\n");

}

void unstablePath() {

	printf("How long will you last? \n");
	unstablePathChoices();
}

void unstablePathChoices() {

	printf("Unstable Path Choices\n");
}

void continuePromptUnstable() {

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
		unstablePath();
	} 
	if (no ==*input) ( exitFunc() );

}
