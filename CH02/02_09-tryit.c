#include <stdio.h>

int main()
{
	int x;
	char a;

	puts("Grid example");

	for ( x = 0 ; x <= 9 ; x++)
	{
		for (a = 'A'; a <= 'J'; a++)
		{
			printf("%d %c\t", x, a);
		}
		
		printf("\n");
	}
	

	return(0);
}
