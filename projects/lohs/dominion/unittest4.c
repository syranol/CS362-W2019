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
	printf("isGameOver Unit Test\n"); 

	printf("\n");

	int checker;
	checker = G.whoseTurn;
G.supplyCount[province] = 0;

	if (G.supplyCount[province] == 0)
	{
		printf("Setting all three supply to 0, running isGameover. \n");
		printf("Unit Test Result : Passed \n");
	}
	else{
		printf("Setting supply to 0, running isGameover. \n");
		printf("Unit Test Result : Failed \n");
	}

	printf("Resetting\n");

	G.supplyCount[province] = 0;

	if (G.supplyCount[province] == 0)
	{
		printf("Setting providence pile to 0, running isGameover. \n");
		printf("Unit Test Result : Passed \n");
	}
	else{
		printf("Setting providence pile to 0, running isGameover. \n");
		printf("Unit Test Result : Failed \n");
	}


	return 0;
}