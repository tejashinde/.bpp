#include "date.h"
#include <stdio.h>
#include <string.h>

int main()
{	
	int day, month, year;
	printf("\nEnter a valid date : (DD MM YYYY)");
	scanf("%d %d %d",&day , &month , &year);
	


	//1st Program
	printf("\n\n\n----------------------------------------------------------------------------\n");	
	printf("1st Program : (To check whether the year is a leap year or not.)");	
	isLeapYear(year);
	


	//2nd Program
	printf("\n\n\n----------------------------------------------------------------------------\n");	
	printf("2nd Program : (To check whether the date is valid or not.)");
	if(checkDate(day , month , year) == 0)
		printf("\nInvalid Date");	
	else
		printf("\nValid Date");
	


	//3rd Program
	printf("\n\n\n----------------------------------------------------------------------------\n");	
	printf("3rd Program : (To calculate the Julian day.)");
	printf("\nThe julian day IS -> %d", julianDate(day , month , year));



	//4th Program
	printf("\n\n\n----------------------------------------------------------------------------\n");	
	printf("4th Program : (To print the day number of the week.)");
	printf("\nDay number of the week : %d",dayOfWeek(day , month , year));



	//5th Program
	printf("\n\n\n----------------------------------------------------------------------------\n");	
	printf("5th Program : (To print the day of the week.)");
	printf("\nDay : %s",dayOfWeekString(day , month , year));



	//6th Program
	printf("\n\n\n----------------------------------------------------------------------------\n");	
	printf("6th Program : (To convert date into string.)");
	printf("\n%s",dateInString(day , month , year));



	//Bonus Program
	printf("\n\n\n----------------------------------------------------------------------------\n");	
	printf("Bonus Program : (To print long format of date.)\n");
	dateToString(day , month , year);
	printf("\n\n\n\n");
}
