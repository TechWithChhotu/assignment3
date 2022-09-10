/*Write a program which takes the cost price and selling price of a product from the 
user. Now calculate and print profit or loss percentage*/
#include<stdio.h>
int main()
{
	int cp,sp,result;
	printf("Enter cost price of a product: ");
	scanf("%d",&cp);
	printf("Enter selling price of a product: ");
	scanf("%d",&sp);
	
	if(cp>sp){
		printf("Loss ");
		result=(cp-sp);
	}
	else{
		printf("Profit ");
		result=(sp-cp);	
	}
	result=result*100/cp;
	printf("%d ",result);
return 0;
}

