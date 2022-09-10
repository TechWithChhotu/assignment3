// Write a program to check whether roots of a given quadratic equation are real & 
//distinct, real & equal or imaginary roots
#include<stdio.h>
int main(){
    int D,a,b,c;
    printf("Enter value of a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);
    D = (b * b) - 4 * a * c;
    if(D>0)
        printf("Roots are real & distinct");
    if(D==0)
        printf("Roots are real & equal");
    else
        printf("imaginary roots");
}