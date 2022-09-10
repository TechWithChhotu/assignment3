// Write a program which takes the month number as an input and display number of days in that month
#include<stdio.h>

int main()
{
    int month_no;
    printf("Enter month number: ");
    scanf("%d",&month_no);
    if(month_no==1)
        printf("January 31 days");
    else if(month_no==2)
        printf("February 28/29 days");
    else if(month_no==3)
        printf("March 31 days");
    else if(month_no==4)
        printf("April 30 days");
    else if(month_no==5)
        printf("May 31 days");
    else if(month_no==6)
        printf("June 30 days");
    else if(month_no==7)
        printf("July 31 days");
    else if(month_no==8)
        printf("August 31 days");
    else if(month_no==9)
        printf("September 30 days");
    else if(month_no==10)
        printf("October 31 days");
    else if(month_no==11)
        printf("November 30 days");
    else if(month_no==12)
        printf("December 31 days");
    return 0;
}


