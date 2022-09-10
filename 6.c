// Write a program to print greater between two numbers. Print one number of both are 
// the same.
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    if(a>b){
        printf("%d(a) is grater",a);
    }
    else if(a<b)
        printf("%d(b) is grater",b);
    else
        printf("both are equal");
}