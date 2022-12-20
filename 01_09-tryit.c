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

	/* report the results*/
	printf("You have chosen %c\n",meal);

	return(0);
}
