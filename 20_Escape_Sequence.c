/*
Escape Sequences in C :- 
---------------------------
    An escape sequence is the sequence of characters that doesn't represents itself when used inside the string 
literals (or) character
    It is composed of 2 (or) more characters starting with backslash (\).
*/
#include <stdio.h>
#include <unistd.h>

void main()
{
    printf("Alert\a \n"); // 1) '\a' - Alert / Alarm / Beep
    printf("Backspace\b"); // 2) '\b' - Backspace

    printf("Student Report\n");
    printf("---------------\n");

    printf("Name: John Doe\n");
    printf("ID: 123456\n");
    printf("GPA: 3.5\n");

    printf("\f"); // 3) '\f' - form feed sequence

    printf("Course Schedule\n");
    printf("----------------\n");

    printf("Course 1: Intro to Programming\n"); // 3) '\n' - New Line
    printf("Course 2: Calculus I\n");
    printf("Course 3: English Composition\n");

    printf("Hi\nHello\nHow are you\n\n");

    // 4) '\r' - Carraiage Returns - It will put the cursor at the begining of the and it will overwrite it.
    printf("This is AshwinKannan \rThis is  Kannan \n");

    printf("This is Ashwin Kannan \t This is Kannan \n"); // 5) '\t' - Horizontal Tab Space 

    // 6) '\v' - Vertical Tab Space - This is not same as '\n'.
    printf("This is Ashwin Kannan \v This is Kannan \n"); 

    printf("Backslash : \\ \n"); // 7) '\\'- Backslash

    printf("Single Quote :- \'This is the text within the single quote\' \n"); // 8) (\') - Single Quote.

    printf("Double Quote :- \"This is the text within the double quote\" \n"); // 9) (\") - Double Quote.

    printf("Question Mark :- \? \n"); // 10) '\?' - Question Mark

    printf("Null:- \0"); // 11) '\0' - Null Character
        
}
