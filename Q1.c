#include <stdio.h>
#include <stdlib.h>
int main()
{
    int no;
    printf("Enter a Number:- ");
    scanf("%d",&no);
    if (no%2==0)
        printf("%d is an even number",no);
    else
        printf("%d is an odd number",no);
}
