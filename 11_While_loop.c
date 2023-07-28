#include<stdio.h>

void main()
{
    printf("--------------- While Loop ----------------- \n");
    char alphabet = 'a';

    printf("Alphabets from a to z are :- \n");

    while(alphabet <= 'z')
    {
        printf("%c ", alphabet);
        alphabet ++;
    }
}