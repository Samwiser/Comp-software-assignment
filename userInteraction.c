#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "crossfireOperations.h"


//This function returns the board size provided as input by the user
int getBoardSize(){
	int boardSize = 7;
	return boardSize;
}

int getNumPlayers(int NumberPlayers){
	while(NumberPlayers<1 || NumberPlayers>6)	//while loop which only ends when there are 2 or more players and less than or equal to 6 
	{
		printf("enter number of players(max 6): ");
		scanf("%d", &NumberPlayers);	//takes amount of players and stores it in variable
	}
	getAbilities(NumberPlayers);
	return NumberPlayers;
}

//THis function takes as input the size of the board and the pointers
// to the integers representing the row and the column of the slot that
// the user want to retrieve
void getDesiredElement(int boardSize, int * row, int * col){
	puts("Please enter the column and the Row of the desired slot \n");
	printf("Note that size of the board is %d\n", boardSize);

		//it will cycle asking the user to insert the row
		//until the value of the desired row is >= 0 or < of the
		// size of the board
		do {
			printf("Row: ");
			scanf("%d", row);
			printf("%d\n", *row);
			if(row < 0 && *row >= boardSize)
				printf("Error: Incorrect row dimension\n");
		} while(*row < 0 && *row >= boardSize);

		//it will cycle asking the user to insert the column
		//until the value of the desired row is >= 0 or < of the
		// size of the board
		do {
			printf("Column: ");
			scanf("%d", col);
			printf("%d\n", *col);
			if(*col < 0 && *col >= boardSize)
				printf("Error: Incorrect column dimension\n");
		} while(*col < 0 && *col >= boardSize);
}
