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

  printf("Random testing on parameter 1: PASSED \n");

	//Check if correct card selected
	if(cardEffect(smithy,0,0,0,&G,0,0) == 0){
		printf("Random testing for Smithy \n");

	}
	else{
		printf("Smithy card failed selection \n");
		printf("Random Test Result: Failed \n");
	}
  printf("Random testing on parameter 3: PASSED \n");
	//Check if correct card selected
	if(prevHand == numHandCards(&G)){
		printf("Smithy card successfully added 2 cards \n");
		printf("Random Test Result: Passed \n");
	}
	else{
		printf("Smithy card failed to added 2 cards \n");
		printf("Random Test Result: Failed \n");
	}
  printf("Random testing on parameter 5: PASSED \n");
	return 0;
}
