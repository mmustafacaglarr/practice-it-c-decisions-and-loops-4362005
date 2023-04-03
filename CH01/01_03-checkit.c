#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int t;
	const int trigger = 0;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	/* fetch the temperature in a 45 degree
	   range from -10 to 35 */
	t = rand() % 45 - 10;

	/* output the current temperature */
	printf("The temperature is %d degrees\n",t);

	/* decide whether to activate the
	   water heater */
	if( t > trigger )
		printf("Water heater inactive\n");
	else
		printf("Water heater active\n");

	return(0);
}
