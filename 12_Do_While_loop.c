#include <stdio.h>

void main()
{
    printf("------------------ Do While Loop ------------------ \n");

    char alphabet = 'a';

    printf("Alphabets from a to z are :- \n");
    do
    {
        printf("%c ", alphabet);
        alphabet ++;
    } while(alphabet <= 'z');
}