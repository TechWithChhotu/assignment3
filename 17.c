/*Write a program which takes the length of the sides of a triangle as an input. Display 
whether the triangle is valid or not. */
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter three sides of a triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<b+c||c>a+b||b<c+a)
	printf("triangle is valid");
	else
	printf("triangle is not valid");
return 0;
}

