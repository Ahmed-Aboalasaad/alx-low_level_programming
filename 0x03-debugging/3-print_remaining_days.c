#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* Expected input -> every thing is valid except month-day-year combinations
* @month: month in number format
* @day: day of the year
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
	if (isLeap(year))
	{
		if (month >= 2 && day >= 60) /*  */
			day++;

		if (day == 61 || day == 62) /*  */
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);

		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
	}
	else /* not a leap year */
	{
		if (month == 2 && day >= 59) /* 29, 30, 31 of Feb. */
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}