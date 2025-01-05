/** C Program BoilerPlate :- This program is basically the boilerplate (or) the basic structure of the C Program
//-----------------------------

 C Programming language is a general purpose , block structure , procedural, case-sensitive, free flow , portable and high-level programming langugae

 C is considered as a Mid-Level Programming Language because it supports the features of both low-level and high-level languages
 The C Program is converted into assembly code, it supports pointer arithmetic (low-level), but it is machine in-dependent (a feature of high level)
 A Low-level language is specific to one machine, i.e., machine dependent. It is fast to run. But it is not easy to understand.
 A High-Level language is not specific to one machine, i.e., machine independent. It is easy to understand.

 Structure of the C Program :-
 -------------------------------
 	-------------------------
 	| Documentation Section |   // This Section is optional but it is useful when we want to know what this lines of codes in the file does
	-------------------------

	------------------------
	| Preprocessor Section |   // It is mandotary
	------------------------

	--------------------
	| Defition Section |    // It is Optional
	--------------------

	----------------------
	| Global Declaration |  // It is optional but often usable
	----------------------

	Function Section     // Main Function (mandotary) 

		main (){
			Declaration Part;
			Executable Part;
		}

	User-Defined Function    // Optional but is used to create a separate function has it's own tasks 
		<return_type> <function_name> (<Parameter n>){
			Block of codes ;
		}



// #include<stdio.h>
// #define pi 3.14 // It acts as a constant or final variable
// int a = 10; // Global Declaration / Global Variable
// void main(){
//     printf("Hello, World! \n");
//     printf("%f \n", pi);
//     printf("a = %d", a);
// }

*/

/*
(i) Documentation Section :- 
    It is used to convey the message of the program.
    It is of 2 types.
    a. Single Line Comment  - Starts with "//"
    b. Multi-line Comment - 

(ii) Pre-processor Section :-
    It directs the compiler to link a functions from the system library
    These directives are processed by the pre-processor before the actual compilation
    It is used to include header files, define macros and perform conditional compilation
    It begins with the '#' symbol

(iii) Definition Section :-
    All the symbolic constants are defined in this section
    Eg. #define PI 3.14

(iv) Global Declaration :-
    It contains variable declaration which can be accessed anywhere in the program

(v) Function Section :-
    It is necessary to have atleast one main function
    It has 2 parts.
        a. Declaration Part
        b. Executable Part
    The Declaration part declares all the variables used in the executable part

(vi) User Defined Function :-
    It contains the User defined functions which can be called by the main function
 */

// Write a c Program to find the area of the circle // Documentation Section

#include <stdio.h> // Pre-processor Section

#define PI 3.14     // Definition Section - It is a constant variable
float area, radius; // Global Declaration/variable - It can be accessed anywhere in the program.
void addition();    // We want to declare the sub-function here if we want to define the sub-function below the main function
void subtraction();

int main() // Main Function
{

    printf("Enter the radius : ");

    float area, radius; // Declaration Part
    scanf("%f", &radius);
    area = PI * radius * radius; // Execution Part
    printf("The area of the circle of the radius (%.1f) is : %.1f \n \n", radius, area);

    addition(); // Calling the addition() function
    subtraction(); // Calling the subtraction() function

    return 0;
}

// User Defined Function (or) Subprogram
void addition()
{
    short first_number, second_number, addition_result;

    printf("---------------------------------------------- Addition -----------------------------------------------\n");
    printf("Enter the first number : ");
    scanf("%hd", &first_number);

    printf("Enter the second nuber : ");
    scanf("%hd", &second_number);

    addition_result = first_number + second_number;

    printf("%hd + %hd = %hd \n", first_number, second_number, addition_result);
}

void subtraction()
{
	short first_number, second_number, subtraction_result;

	printf("-------------------------------------------- Subtraction ------------------------------------------\n");
	printf("Enter the first number : ");
	scanf("%hd", &first_number);

	printf("Enter the second number : ");
	scanf("%hd", & second_number);

	subtraction_result = first_number - second_number;

	printf("%hd - %hd = %hd \n", first_number, second_number, subtraction_result);
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

// Example :-
/*
This
is
a
multi
line
comment
*/
