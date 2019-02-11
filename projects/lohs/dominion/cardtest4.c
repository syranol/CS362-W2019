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
	printf("Card: Adventurer Unit Testing \n"); 

	int prevDiscardCount;
	prevDiscardCount = G.discardCount[0];
	int prevHand;
	prevHand = numHandCards(&G);




	//Check if number of cards in hand changed
	if(prevHand != numHandCards(&G)){
		printf("Adventuer card successfully added  and discarded the adventuer card \n");
		printf("Unit Test Result: Passed \n");
	}
	else{
		printf("Adventuer card failed to added 2 cards \n");
		printf("Unit Test Result: Failed \n");
	}

	//Check if a card is discarded
	if(prevDiscardCount + 1 == G.discardCount[0]){
		printf("Correct number of card was discarded \n");
		printf("Unit Test Result: Passed \n");
	}
	else{
		printf("Adventuer card failed to discard card\n");
		printf("Unit Test Result: Failed \n");
	}

	//Check if correct card selected
	if(cardEffect(adventurer,0,0,0,&G,0,0) == 0){
		printf("Adventurer card successfully selected \n");
		printf("Unit Test Result: Passed \n");
	}
	else{
		printf("Adventurer card failed selection \n");
		printf("Unit Test Result: Failed \n");
	}
	return 0;
}