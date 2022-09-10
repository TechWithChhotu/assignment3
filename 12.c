//Write a program to check whether a given alphabet is in uppercase or lowercase
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a Alphabet: ");
	scanf("%c",&ch);
	if(ch>96)
	printf("lowercase alphabet");
	else
	printf("uppercase alphabet");
return 0;
}

