#include <stdio.h>

int main()
{
	for (int a, b = 0 ; b < 10 ; a-- , b++ )
		printf("%2d : %d\n", a, b);
	return(0);
}
