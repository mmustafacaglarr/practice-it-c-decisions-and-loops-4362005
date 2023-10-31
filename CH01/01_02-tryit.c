#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int t;
	int trigger_temperature_degree = 0;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	/* fetch the temperature in a 45 degree
	   range from -10 to 35 */
	t = rand() % 45 - 10;

	/* output the current temperature */
	printf("The temperature is %d degrees\n",t);

	/*if temperature is bigger than 0, then heater starts to work. Else, it does not.*/
	if (t > trigger_temperature_degree)
	{
		printf("The water heater is inactive.\n");
	}
	else
	{
		printf("The water heater is active.\n");
	}
	
	return(0);
}
