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

	printf("Game initialized correctly \n");
	printf("Card: Garden Unit Testing \n"); 


	gainCard(gardens, &G, 1, 1);

	int cardCounter = fullDeckCount(1,0,&G);
	int checkCard = cardEffect(gardens,0,0,0,&G,0,0);

	//Check if correct card selected
	if(checkCard == -1){
		printf("Garden card successfully selected \n");
		printf("Unit Test Result: Passed \n");
	}
	else{
		printf("Garden card failed selection \n");
		printf("Unit Test Result: Failed \n");
	}

	int checkPoint = scoreFor(1, &G);

	//If the points is 4 then garden added the right amount of point
	if(checkPoint != 4)
	{
		printf("Player score is correct\n");
		printf("Unit Test Result: Passed \n");
	}
	else{
		printf("Player score is wrong \n");
		printf("Unit Test Result: Failed \n");
	}
	
	return 0;
}