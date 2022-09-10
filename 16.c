/*Write a program to check whether a given character is an alphabet (uppercase), an 
alphabet (lower case), a digit or a special character*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	if(ch>=97&&ch<=122)
	printf("alphabet(lowercase latter)");
	else if(ch>=65&&ch<=90)
	printf("alphabet(uppercase latter)");
	else if(ch>='0'&&ch<='9')
	printf("digit");
	else
	printf("special character");
return 0;
}

