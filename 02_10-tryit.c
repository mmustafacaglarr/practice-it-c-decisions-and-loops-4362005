#include <stdio.h>

int main()
{
	const int size = 10;
	int score[10] = {
		19, 42, 34, 1, 13, 18, 52, 12, 19, 45
	};
	int a,b,temp;

	/* outer loop to the next-to-last element */
	for( a=0; a<size-1; a++ )
	{
		/* bubble sort here */
	}

	/* output the sorted list */
	for( a=0; a<size; a++ )
		printf("%d\n",score[a]);

	return(0);
}
