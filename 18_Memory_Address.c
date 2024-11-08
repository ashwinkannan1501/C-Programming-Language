/*
Memory Address :- 
----------------------
    When a variable is created in C, a memory address is assigned to that variable. When we assign a value to a 
variable, it is stored in the memory address.

    The memory address is the location of where the variable is stored on the computer.

    To access it, use the refernce operator (&) and the result represents where the variable is stored.

    The memory address is in hexadecimal form.
*/
#include <stdio.h>
#include <stdbool.h>

void main()
{
    int integer = 1000;
    float floating = 123.6;
    bool boolean = false;
    char character = 'a';
    char string[7] = "Ashwin";

    printf("Integer Value :- %d \n", integer);
    printf("Memory Address (Hexadecimal form) :- %p \n", &integer);
    printf("Memory Address (Integer form) :- %d \n \n", &integer);

    printf("Floating Point Value :- %f \n", floating);
    printf("Memory Address (Hexadecimal form) :- %p \n", &floating);
    printf("Memory Address (Integer form) :- %d \n \n", &floating);

    printf("Boolean Value :- %d \n", boolean);
    printf("Memory Address (Hexadecimal form) :- %p \n", &boolean);
    printf("Memory Address (Integer form) :- %d \n \n", &boolean);

    printf("Character Value :- %c \n", character);
    printf("Memory Address (Hexadecimal form) :- %p \n", &character);
    printf("Memory Address (Integer form) :- %d \n \n", &character);

    printf("String Value :- %s \n", string);
    printf("Memory Address (Hexadecimal form) :- %p \n", &string);
    printf("Memory Address (Integer form) :- %d \n \n", &string);
}