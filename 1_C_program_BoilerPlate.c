// C Program BoilerPlate :- 
//-----------------------------


// #include<stdio.h>
// #define pi 3.14 // It acts as a constant or final variable
// int a = 10; // Global Declaration / Global Variable
// void main(){
//     printf("Hello, World! \n");
//     printf("%f \n", pi);
//     printf("a = %d", a);
// }

// Write a c Program to find the area of the circle // Documentation Section

#include<stdio.h> // Pre-processor Section

#define pi 3.14 // Definition Section - It is a constant
float area, radius; // Global Declaration/variable - It can be accessed anywhere in the program.
void addition(); // We want to declare the sub-function here if we want to define below the main function

void main() // Main Function
{
    
    printf("Enter the radius : ");

    float area, radius; // Declaration Part
    scanf("%f", &radius);
    area = pi * radius * radius; // Execution Part
    printf("The area of the circle of the radius (%f) is : %f \n \n", radius, area);

    addition(); // Calling the function
}

// User Defined Function (or) Subprogram
void addition()
{
    short first_number, second_number, addition_result;

    printf("Enter the first number : ");
    scanf("%hd", &first_number);
    
    printf("Enter the second nuber : ");
    scanf("%hd", &second_number);

    addition_result = first_number + second_number;

    printf("%hd + %hd = %hd", first_number, second_number, addition_result);
}

/*
Comments :- 
--------------
    The Comments can be used to explain the code and make it more readable. It is also be used to prevent code 
execution when testing alternative codes. It is of 2 types. They are :- 
        (a) Single Libe Comment
        (b) Multi-line Comment

(a) Single Line Comment :- 
-----------------------------
    It starts with2 forward slashes (//). Any text between (//) and the end of the line is ignored by the compiler
(will not be executed). 
    Example :-  //This is a Single Line Comment

(b) Multi-Line Comment :- 
---------------------------
    As the name defines it is used to comment in multiple lines.
*/
 
 //Example :- 
/*
This
is
a
multi
line
comment
*/
