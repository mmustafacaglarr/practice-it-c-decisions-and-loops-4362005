#include <stdio.h>

int main()
{
	int h;
	static int LOOP_LİMİT = 10;
	float total;

	h = 1;
	while( h <= LOOP_LİMİT )
	{
		total = 1.0/h +total;
		printf( "%2.d\n", h++ );
	}

	printf("The total is %f\n",total);
	return(0);
}
