// Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
	int N;
	printf("Enter a number: ");
	scanf("%d",&N);
	
	if(N>0)
	printf("Positive");
	else if(N)
	printf("Negative");
	else
	printf("Zero");

return 0;
}

