/*
ASCII Values :-
-------------------
    The full form of ASCII is "American Standard Code for Information Interchange". 
    
    It is a character encoding scheme which is used for electronics communications.

    Each character (or) special character is represented by some ASCII code and each ASCII code occupies 7 bits in 
memory.

    In C programming language, a character variable doesn't contain a character value itself rather than the ASCII 
value of the character variable.

    The ASCII values represents the character variables in numbers, and each character variables is assigned with
some numbers which range from 0 to 127.

    For Example, The ASCII value of 'A' is 65. So, 65 will be stored in the character variable rather than 'A'.
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char password[20];
    printf("----------------------- ASCII VALUES ------------------ \n");
    printf("Enter password with alphabets, numbers and special characters :- ");
    scanf("%s", password);

    for (int index = 0; index < strlen(password); index++)
    {
            printf("The ASCII value of character '%c' is :- %d \n", password[index], password[index]);
    }

    // printf("String Text is :- %s \n", password);
    // printf("ASCII value is :- ");
    // for (int index = 0; index < strlen(password); index++)
    // {
    //         printf("%d ", password[index]);
    // }
    // printf("\n");
    
}