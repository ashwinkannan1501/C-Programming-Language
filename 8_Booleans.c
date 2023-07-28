/*
Booleans :-
--------------
    Very often in programming, you will need a datatype that can only have one of these 2 values like
        (A) YES / NO
        (B) ON / OFF
        (C) TRUE / FALSE

    For this, C has a 'bool' datatype, which is known as 'booleans'. Booleans represents values that are either 
'true'/'false'.

Boolean Variables :- 
----------------------
    In C, the 'bool' datatype is not a built-in datatype like 'int' (or) 'char'. You must import the 
'#include<stdbool.h>' header file to use it.

    A boolean variable is declared with the 'bool' keyword and can only take the values either 'true' / 'false'
*/
#include <stdio.h>
#include <stdbool.h>

void main()
{
    printf("---------------- Booleans ------------------ \n");
    bool isProgrammingFun = true, isFishTasty = false;

    /*
    Before trying to print the boolean values, you should know that the boolean values are returned as integers (i.e)
        '1' -> true, '0' -> false
    Therefore, you must use the '%d' format specifier to print a boolean value.
    */

    printf("Is Programming Fun = %d \n", isProgrammingFun);
    printf("Is Fish Tasty = %d \n", isFishTasty);

    // However it is more common to return a boolean value by comparing values and variables

    // Real Word example
    printf("----------------- Real World Example -------------------- \n");
    // Check if the person is eligible to vote or not
    short age, gender;
    char name[20];

    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);

    printf("Enter 1 -> Male. \n Enter 2 -> Female\n Choose :- ");
    scanf("%hd", &gender);

    switch (gender)
    {
    case 1:
        printf("Enter your age Mr.%s : ", name);
        scanf("%hd", &age);
        if (age >= 18)
        {
            printf("Since Your age is 18 and above. You are eligible to vote Mr.%s", name);
        }
        else
        {
            printf("Since Your age is below 18. You are not able to vote Mr.%s", name);
        }
        break;

    case 2:
        printf("Enter your age Ms/Mrs.%s : ", name);
        scanf("%hd", &age);
        if (age >= 18)
        {
            printf("Since Your age is 18 and above. You are eligible to vote Ms/Mrs.%s", name);
        }
        else
        {
            printf("Since Your age is below 18. You are not able to vote Ms/Mrs.%s", name);
        }
        break;
    
    default:
        printf("Incorrect Option. Please Choose either '1' or '2'");
    }
    
}