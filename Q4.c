#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char l;
    printf("Enter a Letter:- ");
    scanf("%c",&l);
    switch (l)
    {
        case 'a':printf("%c is a vowel",l);break;
        case 'e':printf("%c is a vowel",l);break;
        case 'i':printf("%c is a vowel",l);break;
        case 'o':printf("%c is a vowel",l);break;
        case 'u':printf("%c is a vowel",l);break;
        default:printf("%c is not a vowel",l);
    }
}
