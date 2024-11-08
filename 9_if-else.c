#include <stdio.h>

void main()
{
    printf("--------------- If - Else Statements ------------------ \n");

    // Real World Example :-
    /* Write a C program to input marks of five subjects C, C++, Python, Java and JavaScript.
    Calculate percentage and grade according to following: */

    short c, cpp, python, java, javascipt;

    printf("Enter C Mark :- ");
    scanf("%hd", &c);
    printf("Enter C++ Mark :- ");
    scanf("%hd", &cpp);
    printf("Enter Python Mark :-");
    scanf("%hd", &python);
    printf("Enter Java Mark :- ");
    scanf("%hd", &java);
    printf("Enter JavaScipt Mark :- ");
    scanf("%hd", &javascipt);

    short percentage = (short)(c + cpp + python + java + javascipt) / 5;

    if (c < 50 || cpp < 50 || python < 50 || java < 50 || javascipt < 50)
    {
        printf("Grade : F -> Fail \n");
    }
    else
    {
        if (percentage >= 90 && percentage <= 100)
        {
            printf("Grade : O \n");
        }
        else if (percentage >= 80 && percentage <= 89)
        {
            printf("Grade : A+ \n");
        }
        else if (percentage >= 70 && percentage <= 79)
        {
            printf("Grade : A \n");
        }
        else if (percentage >= 60 && percentage <= 69)
        {
            printf("Grade : B+ \n");
        }
        else if (percentage >= 50 && percentage <= 59)
        {
            printf("Grade : B \n");
        }
        else
        {
            printf("Please enter the number range between 0 to 100 \n");
        }
    }

    // Ternary Operator
    printf("----------------- Ternary Operator / Short hand if statements -------------------------- \n");
    int age = 20;

    /*
    SYNTAX :-
    ----------
       ---------------------------------- 
       | (condition) ? <True> : <False> |
       ----------------------------------
    */
    (age >= 18) ? printf("You are eligible to vote \n") : printf("You are not eligible to vote \n");
}