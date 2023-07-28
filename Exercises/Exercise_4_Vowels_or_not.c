/*
Write a program to find the given character is  vowels or not
using switch case. aeiou
*/
#include<stdio.h>

void main()
{
    printf("--------------- Vowels or Not --------------- \n");

    char alphabet;
    printf("Enter the alphabet :- ");
    scanf("%c", &alphabet);

    // char vowels[12] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    // for (int index = 0; index < 10; index ++)
    // {
    //     if (alphabet == vowels[index])
    //     {
    //         printf("The alphabet '%c' is a vowel \n", alphabet);
    //         break;
    //     }
    //     else if (alphabet != vowels[index])
    //     {
    //         printf("The alphabet '%c' is not a vowel \n", alphabet);
    //     }
        
    // }

    switch (alphabet)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("The alphabet '%c' is a vowel \n", alphabet);
        break;
    
    default:
        printf("The alphabet '%c' is not a vowel \n", alphabet);
        break;
    }
    
   
    
}