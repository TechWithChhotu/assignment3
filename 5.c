// Write a program to check whether a given number is a three-digit number or not
#include<stdio.h>
int main()
{
	int n,d;
	printf("Enter a number: ");
	scanf("%d",&n);
	d=n/100;
	if(d>=1&&d<=99)
	printf("Three digit number");
	else
	printf("Not three digit number");
return 0;
}

