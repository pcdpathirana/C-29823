#include <stdio.h>
#include <stdlib.h>
int main()
{
    int no;
    printf("Enter a Number:- ");
    scanf("%d",&no);
    switch (no%2)
    {
        case 0:printf("%d is an even number",no);break;
        case 1:printf("%d is an odd number",no);break;
        default:printf("%d is not a valid number",no);
    }
}
