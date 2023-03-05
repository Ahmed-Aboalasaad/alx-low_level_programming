#include <stdio.h>
#include "main.h"

/**
 * isLeap - decides whether a year is a leap year or not
 * @year: the year
 * Return: 0 or 1
*/
int isLeap(int year)
{
	int isLeap = 0;

	if (year % 4 == 0)
	{
		isLeap = 1;
		if (year % 100 == 0)
		{
			isLeap = 0;
			if (year % 400 == 0)
				isLeap = 1;
		}
	}
	return isLeap;
}

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
		/* for any day starting from 1st of March, increase the day by one
			because the convert_day() function doesn't consider leap years */
		if (month >= 3 && day >= 60)
			day++;

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else /* not a leap year */
	{
		if (month == 2 && day == 60) /* 29 of Feb. */
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
