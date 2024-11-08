#include <stdio.h>

void main()
{
    printf("------------------- Break / Continue Statement --------------- \n");

    printf("Alphabets from a to z break in 'x' and continue in i :-  \n");

    for(char alphabet = 'a'; alphabet <= 'z'; alphabet ++)
    {
        if (alphabet == 'i')
        {
            continue;
        }
        if (alphabet == 'x')
        {
            break;
        }
        printf("%c ", alphabet);
    }
}