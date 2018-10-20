#include "date.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void isLeapYear(int year)
{
	if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
		printf("\nThe year is a leap year");
	else
		printf("\nThe year is not a leap year");
}

int checkDate(int day, int month , int year)
{
	switch(month)
	{
		case 12:
			if(day > 31)
				return 0;
			break;			
		case 11:
			if(day > 30)
				return 0;
			break;
		case 10:
			if(day > 31)
				return 0;
			break;
		case 9:
			if(day > 30)
				return 0;
			break;
		case 8:
			if(day > 31)
				return 0;
			break;
		case 7:
			if(day > 31)
				return 0;
			break;
		case 6:
			if(day > 30)
				return 0;
			break;
		case 5:
			if(day > 31)
				return 0;
			break;
		case 4:
			if(day > 30)
				return 0;
			break;
		case 3:
			if(day > 31)
				return 0;
			break;
		case 2:
			if(year % 400 == 0 || ((year % 4 == 0) && (year % 100 != 0)))
				if(day > 29)
					return 0;
			else if(day > 28)
				return 0;
			break;
		case 1:
			if(day > 31)
				return 0;
			break;
	}
}

int julianDate(int day, int month, int year)
{
        int julian;
	julian = day;
	month -= 1;

	switch(month)
	{
		case 11 : julian += 30;
		case 10 : julian += 31;
		case 9 : julian += 30;
		case 8 : julian += 31;
		case 7 : julian += 31;
		case 6 : julian += 30;
		case 5 : julian += 31;
		case 4 : julian += 30;
		case 3 : julian += 31;
		case 2 :
			if(year % 4 == 0)
				julian += 29;
			else
				julian += 28;
		case 1 : julian += 31;	
	}
	
	return(julian);	
}

int dayOfWeek(int day , int month , int year)
{
	int julian = julianDate(day,month,year);
	int fours = (year - 1) / 4;
	int hundreds = (year - 1)/100;
	int fourHundreds = (year - 1) / 400;

	return((year + julian + fours - hundreds + fourHundreds) % 7);
}

char * dayOfWeekString(int day , int month , int year)
{
	switch(dayOfWeek(day,month,year))
	{
		case 0:
			return "Saturday";
			break;
		case 1:
			return "Sunday";
			break;
		case 2:
			return "Monday";
			break;
		case 3:
			return "Tuesday";
			break;
		case 4:
			return "Wednesday";
			break;
		case 5:
			return "Thursday";
			break;
		case 6:
			return "Friday";
			break; 
	}
}

void dateToString(int day , int month , int year)
{

	switch(month)
	{
		case 1 : 
			printf("%d January %d ,Day of week is '%s'",day,year,dayOfWeekString(day,month,year));
		break;
		case 2 : 
			printf("%d February %d ,Day of week is '%s'",day,year,dayOfWeekString(day,month,year));
		break;
		case 3 : 
			printf("%d March %d ,Day of week is '%s'",day,year,dayOfWeekString(day,month,year));
		break;
		case 4 : 
			printf("%d April %d ,Day of week is '%s'",day,year,dayOfWeekString(day,month,year));
		break;
		case 5 : 
			printf("%d May %d ,Day of week is '%s'",day,year,dayOfWeekString(day,month,year));
		break;
		case 6 : 
			printf("%d June %d ,Day of week is '%s'",day,year,dayOfWeekString(day,month,year));
		break;
		case 7 : 
			printf("%d July %d ,Day of week is '%s'",day,year,dayOfWeekString(day,month,year));
		break;
		case 8 : 
			printf("%d August %d ,Day of week is '%s'",day,year,dayOfWeekString(day,month,year));
		break;
		case 9 : 
			printf("%d September %d ,Day of week is '%s'",day,year,dayOfWeekString(day,month,year));
		break;
		case 10 : 
			printf("%d October %d ,Day of week is '%s'",day,year,dayOfWeekString(day,month,year));
		break;
		case 11 : 
			printf("%d November %d ,Day of week is '%s'",day,year,dayOfWeekString(day,month,year));
		break;
		case 12 : 
			printf("%d December %d ,Day of week is '%s'",day,year,dayOfWeekString(day,month,year));
		break;	
	}
}

char * dateInString(int day , int month , int year)
{
	char *res = malloc(sizeof(char) * 10);
	sprintf(res,"%d-%d-%d",day,month,year);
	//printf("\n%s",res);
	return (res);
}





