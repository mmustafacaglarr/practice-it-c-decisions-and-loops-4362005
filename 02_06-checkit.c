#include <stdio.h>

int main()
{
	const int size = 10;
	int score[size] = {
		19, 42, 34, 1, 13, 18, 52, 12, 19, 45
	};
	int x;

	for( x=0; x<size; x++ )
	{
		printf("Score value: %d\n",score[x]);
	}

	return(0);
}
