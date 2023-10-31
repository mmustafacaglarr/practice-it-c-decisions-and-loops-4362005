#include <stdio.h>

int main()
{
	char meal;

	/* present the menu */
	puts("Meal Type (Choose One)");
	puts("A - Non-Restrictive");
	puts("B - Low Carb");
	puts("C - Low Fat");
	puts("D - Vegan");
	puts("E - Vegetarian");
	puts("F - Other");
	printf("Choice: ");
	scanf("%c",&meal);

	/* process their choice */
	switch ( meal )
	{
	case 'A':
	case 'a':
		printf( " A - Non-Restrictive\n " );
		break;
	case 'B':
	case 'b':
		printf( " B - Low Carb\n " );
		break;
	case 'C':
	case 'c':
		printf( " C - Low Fat\n " );
		break;
	case 'D':
	case 'd':
		printf( " D - Vegan\n " );
		break;
	case 'E':
	case 'e':
		printf( " E - Vegetarian\n " );
		break;
	case 'F':
	case 'f':
		printf( " F - Other\n " );
		break;
	default:
		printf( " F - Other, you did not say any option from us\n " );
		break;
	}

	/* report the results*/
	printf( " You have chosen %c\n " , meal );

	return(0);
}
