#include "main.h"

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