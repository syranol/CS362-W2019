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
	printf("Card: Village Unit Testing \n"); 

	int beforeHand;
	beforeHand = numHandCards(&G);
	
	//Check if correct card selected
	if(cardEffect(village, 0, 0, 0, &G, 0, 0) == 0 ){
		printf("Village card successfully selected \n");
		printf("Unit Test Result: Passed \n");
	}
	else{
		printf("Village card failed selection \n");
		printf("Unit Test Result: Failed \n");
	}
	//Check if number of cards in hand is right
	if(numHandCards(&G) == beforeHand)
	{
		printf("Number of Cards in hand is correct\n");
		printf("Unit Test Result: Passed \n");
	}
	else{
		printf("PNumber of cards in hand is wrong \n");
		printf("Unit Test Result: Failed \n");
	}
	//Check if number of actions changed
	if(G.numActions == G.numActions + 1)
	{
		printf("Number of actions avaialble is correct\n");
		printf("Unit Test Result: Passed \n");
	}
	else{
		printf("Number pf actions avaialble is incorrect \n");
		printf("Unit Test Result: Failed \n");
	}
	
	return 0;
}