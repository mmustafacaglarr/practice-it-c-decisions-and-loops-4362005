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
	switch( meal )
	{
		case 'A':
			puts("You choose: Non-Restrictive");
			break;
		case 'B':
			puts("You choose: Low Carb");
			break;
		case 'C':
			puts("You choose: Low Fat");
			break;
		case 'D':
			puts("You choose: Vegan");
			break;
		case 'E':
			puts("You choose: Vegetarian");
			break;
		default:
			puts("You choose: Other");
	}

	return(0);
}
