#include <stdio.h>

int main()
{
	int x;
	char a;

	puts("Grid example");
	for( x=0; x<10; x++ )
	{
		for( a='A'; a<='J'; a++ )
		{
			printf("%d%c  ",x,a);
		}
		putchar('\n');
	}

	return(0);
}
