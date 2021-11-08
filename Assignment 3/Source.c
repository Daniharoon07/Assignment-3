#include <stdio.h>
#include "Header.h"


char rock_paper_scissors(char player1 , char player2) 
{

	printf("Player1, enter ROCK, PAPER, or SCISSORS:\n");
	scanf_s("%s", player1,8);

	printf("Player2, enter ROCK, PAPER, or SCISSORS:\n");
	scanf_s("%s", player2,8);

	char ROCK[8];
	char PAPER[8];
	char SCISSORS[8];

	if (player1 == ROCK && player2 == SCISSORS) {
		printf("Player1");
		exit(0);
	}

	else if (player1 == ROCK && player2 == PAPER) {
		printf("Player2");
		exit(0);
		
	}
	
	else if (player1 == ROCK && player2 == ROCK) {
		printf("Draw");
		exit(0);

	}

	else if (player1 == PAPER && player2 == ROCK) {
		printf("Player1");
		exit(0);
	}

	else if (player1 == PAPER && player2 == SCISSORS) {
		printf("Player2");
		exit(0);
	}

	else if (player1 == PAPER && player2 == PAPER) {
		printf("Draw");
		exit(0);

	}

	else if (player1 == SCISSORS && player2 == PAPER) {
		printf("Player1");
		exit(0);
	}

	else if (player1 == SCISSORS && player2 == ROCK) {
		printf("Player2");
		exit(0);
	}
	
	else if (player1 == SCISSORS && player2 == SCISSORS) {
		printf("Draw");
		exit(0);

	}
	
	else {
		printf("Invalid");
		exit(0);
	}

	return(0);

}
int main() 
{
	// main function

	return(0);
}



