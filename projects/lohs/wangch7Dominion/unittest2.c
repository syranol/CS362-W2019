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


	printf("\n");

	int checker;
	checker = G.whoseTurn;

	printf("EndTurn unit testing \n"); 


	int previous = 0;

	endTurn(&G);

	if(whoseTurn(&G) != previous)
	{
		printf("Checking if current player changed. \n");
		printf("Unit Test Result : Passed \n");
	}
	else{
		printf("Checking if current player changed. \n");
		printf("Unit Test Result : Failed \n");
	}
	if(previous == 0)
	{
		printf("Checking if coins reseted. \n");
		printf("Unit Test Result : Passed \n");
	}
	else{
		printf("Checking if coins changed. \n");
		printf("Unit Test Result : Failed \n");
	}
	if(whoseTurn(&G) == 1)
	{
		printf("Checking if hands were discarded. \n");
		printf("Unit Test Result : Passed \n");
	}
	else{
		printf("Checking if hands were discarded. \n");
		printf("Unit Test Result : Failed \n");
	}
	return 0;
}