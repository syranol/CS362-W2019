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
	printf("Card: Smithy Unit Testing \n"); 


	int prevHand;
	prevHand = numHandCards(&G);


	//Check if correct card selected
	if(cardEffect(smithy,0,0,0,&G,0,0) == 0){
		printf("Smithy card successfully selected \n");
		printf("Unit Test Result: Passed \n");
	}
	else{
		printf("Smithy card failed selection \n");
		printf("Unit Test Result: Failed \n");
	}

	//Check if correct card selected
	if(prevHand == numHandCards(&G)){
		printf("Smithy card successfully added 2 cards \n");
		printf("Unit Test Result: Passed \n");
	}
	else{
		printf("Smithy card failed to added 2 cards \n");
		printf("Unit Test Result: Failed \n");
	}

	return 0;
}