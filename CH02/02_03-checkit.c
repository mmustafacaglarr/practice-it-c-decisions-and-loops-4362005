#include <stdio.h>

int main()
{
	int h;
	float t;

	h = 1;			/* initialize h */
	t = 0.0;
	while( h < 1000 )	 /* loop while true */
	{
		t += 1.0/(float)h;
		h++;		/* trigger */
	}
	printf("The sum of the harmonic series is %.4f\n",t);

	return(0);
}
