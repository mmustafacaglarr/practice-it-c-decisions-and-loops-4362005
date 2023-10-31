#include <stdio.h>
#include <string.h>
int main()
{
	const int size = 10;
	int a[10] = {
		19, 42, 34, 1, 13, 18, 52, 12, 19, 45
	};
	int x;

	for( x=0; x<size; x++ )
	{
		(a[x] % 2 == 0) ? printf(" %.2d %.6s\n", a[x], "is even") : printf(" %.2d %.6s\n", a[x], "is odd");
	}
	puts(" calculation done!");

	return(0);
}
