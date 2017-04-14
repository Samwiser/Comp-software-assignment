#include <stdio.h>
#include "crossfireOperations2.h"

int main()
{
	playerInformation();		

	createBoard(BOARD_SIZE);	
	
	playerINslots(BOARD_SIZE);	
	
	while(NumberPlayers >1)	
	{
		playersGO();			
	}	
	return 0;
}

char *findSlotType(enum slotType type)
{
	switch (type)			
	{
		case Level_Ground:
			return "Level Ground";
		case Hill:
			return "Hill";
		case City:
			return "City";
	}
	return 0;
}