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

	printf( "The first Monday is %4d\n" , m );
	int number_of_mondays_in_a_month = 0;
	for(; m <= 31 ; m += 7 )
	{
		number_of_mondays_in_a_month++;
		printf("this date is a monday %2d\n" , m );
	}
	printf("This month has a %7d mondays \n", number_of_mondays_in_a_month);

	return(0);
}
