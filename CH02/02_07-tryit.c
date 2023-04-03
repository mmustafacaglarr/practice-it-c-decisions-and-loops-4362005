#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int m;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	/* fetch a random starting date
	   range 1 to 7 */
	m = rand() % 7 + 1;

	printf("The first Monday is %d\n",m);

	return(0);
}
