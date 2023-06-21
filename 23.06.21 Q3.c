#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,fact=1;
printf("Enter the number:- ");
scanf("%d",&n);
while(n)
{
    if(n<0)
    {
        printf("invalid input");
    }
    else if(n==0)
    {
        printf("Factorial is 1");
    }
    else
    {
    fact=fact*n;
    n--;
    }
}
printf("Factorial is %d",fact);
}
