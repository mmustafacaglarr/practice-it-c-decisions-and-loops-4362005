#include <stdio.h>

int main()
{
	int a,b;

	a = b = 0;
	while( b<10 )
	{
		printf("%d : %d\n",a,b);
		a--;
		b++;
	}

	return(0);
}
