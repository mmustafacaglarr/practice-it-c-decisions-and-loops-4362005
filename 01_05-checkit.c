#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int sensor;
	const int min = 40;
	const int max = 60;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	/* sensor reports robot's path
	   range from 0 to 99 */
	sensor = rand() % 100;

	printf("Sensor reports: %d",sensor);
	/* guide the robot */
	if( sensor<min || sensor>max )
		printf(" - Robot off course!\n");
	else
		printf(" - Robot on course\n");

	return(0);
}
