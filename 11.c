/* Write a program to take marks of 5 subjects from the user. Assume marks are given 
out of 100 and passing marks is 33. Now display whether the candidate passed the 
examination or failed.*/
#include<stdio.h>
int main()
{
	int c,R,dsa,java,python;
	printf("Enter five subject marks: ");
	scanf("%d%d%d%d%d",&c,&R,&dsa,&java,&python);
	
	if(c<33||R<33||dsa<33||java<33||python<33)
	printf("you are fail, hard luck");
	else if(c>100||R>100||dsa>100||java>100||python>100)
	printf("highest marks 100, passing parks 33/subject");
	else
	printf("you are pass, good luck");
return 0;
}

