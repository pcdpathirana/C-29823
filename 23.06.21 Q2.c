#include<stdio.h>
#include<stdlib.h>
int main()
{
int counter=1,marks,total=0,avg;
for(counter=1;counter<=10;counter++)
    {
    printf("Enter %d marks:- ",counter);
    scanf("%d",&marks);
    total+=marks;
    }
avg=total/10;
printf("Total is %d and Average is %d\n",total,avg);
if(avg>50)
    {
    printf("You are Pass");
    }
    else
    {
        printf("You are Fail");
    }
return 0;
}
