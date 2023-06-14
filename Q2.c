#include <stdio.h>
#include <stdlib.h>
int main()
{
    double no1,no2;
    char op;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &no1, &no2);
    switch (op)
    {
        case '+':printf("%.1lf %c %.1lf = %.1lf",no1,op,no2,no1 + no2);break;
        case '-':printf("%.1lf %c %.1lf = %.1lf",no1,op,no2,no1 - no2);break;
        case '/':printf("%.1lf %c %.1lf = %.1lf",no1,op,no2,no1 / no2);break;
        case '*':printf("%.1lf %c %.1lf = %.1lf",no1,op,no2,no1 * no2);break;
        default:printf("Operator is not correct");
    }
}
