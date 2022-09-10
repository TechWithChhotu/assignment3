// Write a program to check whether a given number is an even number or an odd number without using % operator.
#include<stdio.h>
int main()
{
	int N;
	printf("Enter a number to check even or odd: ");
	scanf("%d",&N);
	
	if(N&1)
	printf("Entred number is odd");
	else
	printf("Entred number is Even");
return 0;
}

