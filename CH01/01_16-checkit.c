#include <stdio.h>

int main()
{
	const int size = 10;
	int a[10] = {
		19, 42, 34, 1, 13, 18, 52, 12, 19, 45
	};
	int x;

	for( x=0; x<size; x++ )
	{
		printf("%d is %s\n",
				a[x],
				a[x] % 2 ? "odd" : "even"
				);
	}


	return(0);
}
