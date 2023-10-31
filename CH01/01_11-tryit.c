#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int card;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	/* grab a random card, 13 to a suit */
	card = rand() % 13;		/* range is 0 to 12 */

	printf("You drew card %d\n",card);
	switch (card)
	{
	case 0:
		puts("Ace");
		break;
	case 10:
		puts("Jack");
		break;
	case 11:
		puts("Queen");
		break;
	case 12:
		puts("King");
		break;
	default:
		card+=1;
		printf( " %d\n", card );
		break;
	}


	return(0);
}
