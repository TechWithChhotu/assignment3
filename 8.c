// Write a program to check whether a given year is a leap year or not
#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year: ");
	scanf("%d",&year);
	
	if(year%4)
	printf("Not leap year");
	else
	printf("leap year");

return 0;
}

