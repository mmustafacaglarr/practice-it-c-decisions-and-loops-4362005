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

	return(0);
}
