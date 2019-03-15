#include "dominion.h"
#include <stdio.h>
#include "rngs.h"
#include <stdlib.h>
#include "dominion_helpers.h"

int main()
{

	//Set cards 
	int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse, sea_hag, tribute, smithy};
		//Establish game
	struct gameState G;

	//Start game
	initializeGame(2, k, 1, &G);
	printf("WhoseTurn unit testing \n"); 

	printf("\n");

	int checker;
	checker = G.whoseTurn;


	if (whoseTurn(&G) == checker)
	{
		printf("Checking current turn for players. \n");
		printf("Unit Test Result : Passed \n");
	}
	else{
		printf("Checking current turn for players. \n");
		printf("Unit Test Result : Failed \n");
	}
	return 0;
}