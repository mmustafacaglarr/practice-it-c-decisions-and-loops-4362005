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
	for( m = rand() % 7 + 1; m<32; m+=7 )
		printf("Monday is %d\n",m);

	return(0);
}
