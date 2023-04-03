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

	/* m is already initialized */
	while( m<32 )
	{
		printf("Monday is %d\n",m);
		m+=7;		/* remember to adjust m! */
	}

	return(0);
}
