/*
Data Types in C :-
--------------------
	A data type specifies the type of the data that a variable can store such as integer, floating point, character , etc.,

Categories :-
-------------	
	There are 4 different categories of data types in C.
	(I) Basic Data Types : int, float, double, char, boolean
	(II) Derived Data Types : array, pointer, structure, Union
	(III) Enumeration Data Types : enum
	(IV) Void Data Type : void
*/
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>
#include <string.h>

// Declaring a structure representing a Person
struct Person 
{
	
	char first_name[50];
	char last_name[50];
	short age;
	char designation[200];
	char company[50];
};

// Declaring a union data type represeing a 'Person'
union People
{
	char first_name[50];
	char last_name[50];
	short age;
};

// Define an enumeration
enum TrafficLights 
{
	RED,
	YELLOW,
	GREEN
};

void main()
{
    printf("---------------------- Data Types ---------------------------\n");

    /*
     (I) Basic Data Types :-
     --------------------------
     	The Basic Data Types are integer, float and character based data types. 
	C language supports both signed and unsigned literals

    (i) Integer DataType :- 
    ---------------------
        A integer is a whole number that can be a positive, negative, or zero. It is classified into the following types:-

       -----------------------------------------------------------------------------------------
       | Data Type 	           Memory 	    Range 	                       Format Specifier    |
       -----------------------------------------------------------------------------------------
       | short int               2 	        -32768 to 32767 	            %hd
       ------------------------------------------------------------------------------------------
       | unsigned short int 	 2 	        0 to 65535 	                    %hu
       ------------------------------------------------------------------------------------------
       | unsigned int 	        4 	        0 to 4294967295 	            %u
       -------------------------------------------------------------------------------------------
       | int 	                4 	        -2147483648 to 2147483647   	%d
       --------------------------------------------------------------------------------------------
       | long int 	            4 	        -2147483648 to 2147483647 	    %ld
       -------------------------------------------------------------------------------------------
       | unsigned long int 	    4 	        0 to 4294967295 	            %lu
       --------------------------------------------------------------------------------------------
       | long long int 	        8 	        -9223372036854775808 to         %lld
                                            9223372036854775807 	
       --------------------------------------------------------------------------------------------
       | unsigned long long int 8 	        0 to 18446744073709551615   %llu
       --------------------------------------------------------------------------------------------
    */


   // 1) Integer Data Type :-
   printf("-------------------------------------- Integer Data Type ------------------------------------ \n");
    short short_data_type = -32768;
    unsigned short unsigned_short_data_type = 655;
    int int_data_type = 25639785;
    unsigned int unsigned_int_data_type = 2563;
    long long_data_type = 569841;
    unsigned long unsigned_long_data_type = 2563984;
    long long long_long_int_data_type = 45636989542;
    unsigned long long unsigned_long_long_data_type = 45698723;

    printf("The value of short data type = %hd \n", short_data_type);
    printf("The size of short data type = %ld bytes \n", sizeof short_data_type);

    printf("The value of Unsigned Short Data Type = %hu \n", unsigned_short_data_type);
    printf("The size of Unsigned Short Data Type = %lu  bytes \n ", sizeof unsigned_short_data_type);

    printf("The value of int data type = %d \n", int_data_type);
    printf("The size of Integer Data Type = %lu bytes \n ", sizeof int_data_type);

    printf("The value of Unsigned Int data type = %u \n", unsigned_int_data_type);
    printf("The size of Unsigned Integer Data Type = %lu  bytes \n ", sizeof unsigned_int_data_type);

    printf("The value of long data type = %ld \n", long_data_type);
    printf("The size of long Data Type = %lu bytes \n ", sizeof long_data_type);

    printf("The value of Usigned Long Data Type = %lu \n", unsigned_long_data_type);
    printf("The size of Unsigned Long Data Type = %lu bytes \n ", sizeof unsigned_long_data_type);

    printf("The value of long long int data type = %lld \n", long_long_int_data_type);
    printf("The size of Long Long Int Data Type = %lu bytes \n ", sizeof long_long_int_data_type);

    printf("The value of unsigned long long int data type = %llu \n", unsigned_long_long_data_type);
    printf("The size of Unsigned long long Data Type = %lu bytes \n ", sizeof unsigned_long_long_data_type);

    /*
    2) Character Datatype :- 
    -----------------------
        The character datatype holds only one character (letters, numbers, etc.,) of data. It must be enclosed with
    single quotes (''). Ex :- 'A', '4', '$'. It is of 2 types :-

    --------------------------------------------------------------------------
    | Data Type 	            Memory 	    Range 	        Format Specifier
    |---------------------------------------------------------------------------
    | char or signed char 	    1 	        -128 to 127 	%c
    |----------------------------------------------------------------------------
    | unsigned char 	        1 	        0 to 255 	    %c
    |-----------------------------------------------------------------------------

    */

    // Character Data Type
    printf("--------------------------------------- Character Data Type ----------------------------------- \n");
    char char_data_type = '4';
    unsigned char unsigned_char_data_type = 'P';
    printf("The Value of char data type = %c \n", char_data_type);
    printf("The value of unsigned char data type = %c \n", unsigned_char_data_type);


    /*
     3) Floating Point Data Type :- 
     ---------------------------------
     	It is of 3 types :-

    --------------------------------------------------------------------------
    | Data Type   	Memory 	    Range 	                    Format Specifier
    |--------------------------------------------------------------------------
    | float 	    4 	        3.4E-38 to 3.4E+38 	        %f
    |----------------------------------------------------------------------------
    | double 	    8 	        1.7E-308 to 1.7E+308 	    %lf
    |----------------------------------------------------------------------------
    | long double 	12 	        3.4E-4932 to 1.1E+4932 	    %lf
    |------------------------------------------------------------------------------
    */

    // 3) Float Data Type
    printf("---------------------- Float Data Type ---------------------------- \n");
    float float_data_type = 25.3695;
    double double_data_type = -5263.752639;
    printf("The value of float data type = %f \n", float_data_type);
    printf("The size of float data type : %ld \n", sizeof float_data_type);

    printf("The value of double data type = %lf \n", double_data_type);
    printf("The size of double data type : %f \n", double_data_type);

    
    /*
	
    (II) Derived Data Type :- 
    -----------------------------
    	The Derived data types includes arrays, pointers , structures and Unions.
	These data types are useful to handle the heterogeneous data's, directly modify the memory and build complicated data structures

    (i) Arrays :-
  ----------------
	An array, which is a derived data type, lets you to store a sequence of fixed size elements of same type.
  	It provides a mechanism for joining multiple targets of the same data under the same name
	
	SYNTAX :-
	----------
	-----------------------------------------------------------
	| datatype array_name[n] = {value1, value2, ..., valuen}; |
	-----------------------------------------------------------
				0    1	  2     3   -> index	
	For Understanding  :- ['c', '$', 'A', '45'] -> Array items


	The index is used to accss an element of array	
	The size of an array is fixed at declaration time, and cannot be changed during the execution time
	The array components are placed in adjacent memory locations
     */

    printf("------------------ Array ---------------------------- \n");

    char vowels[5]; // Declares an integer array with the size of an element
    // Assigning values to the array elements
    vowels[0] = 'A';
    vowels[1] = 'E';
    vowels[2] = 'I';
    vowels[3] = 'O';
    vowels[4] = 'U';

    //Display the values stored in array
    printf("The elements stored in the array is : ");
    for (int index = 0; index < 5; index += 1)
    {
	printf("%c, ", vowels[index]);
    }
    printf("\n");

    /*
	
     (ii) Pointers : 
     -----------------
     	A Pointer is a derived data type that keeps track of another data type's memory address 
	When a pointer is declared, the data type it refers to it's stated first, and then the variable name is preceeded by an '*' symbol.
	The pointers are commonly used in function pointers , data structures, and dynamic memory allocation
	*/

    printf("-------------- Pointers ---------------- \n");
    double PI = 3.14153678;
    double *pointer = &PI;

    printf("PI = %lf \n", PI);
    printf("size of PI Variable : %ld \n", sizeof PI);
    printf("Pointer Variable : %p \n", pointer);
    printf("The Value of the Pointer Variable which points to it ? is : %f \n", *pointer);

    /*
     Structure Data Type :-
     -----------------------
     	A Structure is a derived data type that enables the creation of composite data types by allowing the grouping of many data types under a single name
	It gives you the ability to create you own unique data structures by fusing together variables of various sorts.
	1) A Structure's members or fields are used to refer to each variable within it.
	2) Any data type, including different structures, can be a member of structure.
	3) A Structure's member can be accessed by dot ('.') operator
    */	

    printf("-------------- Structures ----------------- \n");

    // Declaring a variable of type 'struct', called 'Person'
    struct Person first_person, second_person;
    // Explanation : 
    // 'struct'  - keyword for defining that is a structure data type's variable.
    // 'Person' - name of the structure , which needs to match the Strcuture details which is declared outside of the main function
    // 'first_person , second_person' - Member or fields of 'Person' structure

    // Assigning values to structure members
    strcpy(first_person.first_name, "Ashwin"); 
    strcpy(first_person.last_name, "Kannan");
    first_person.age = 24;
    strcpy(first_person.designation, "Devops Engineer");
    strcpy(first_person.company, "Jio");

    strcpy(second_person.first_name, "Kannan");
    strcpy(second_person.last_name, "Arumugam");
    second_person.age = 45;
    strcpy(second_person.designation, "Clothing Business");
    strcpy(second_person.company, "Ashwin Textiles");

    // Accessing the structure members
    printf("First Name : %s \n", first_person.first_name);
    printf("Last Name : %s \n", first_person.last_name);
    printf("Age : %d \n", first_person.age);
    printf("Designation : %s \n", first_person.designation);
    printf("Comapny : %s \n", first_person.company);
    printf("\n");

    printf("First Name : %s \n", second_person.first_name);
    printf("Last Name : %s \n", second_person.last_name);
    printf("Age : %d \n", second_person.age);
    printf("Designation : %s \n", second_person.designation);
    printf("Comapny : %s \n", second_person.company);

    // To-know that the structure data type carries the same memory location across all key's or not? -  Ans : No
    printf("Memory of First Person's first name : %p \n", &first_person.first_name);
    printf("Memory of First Person's last name : %p \n\n", &first_person.last_name);
    printf("Memory of Second Person's first name : %p \n", &second_person.first_name);
    printf("Memory of Second Person's last name : %p \n\n", &second_person.last_name);

    /*
     Unions :-
     -----------
     	A Unions, which is a derived datat type, that enables you to store various data types in same memory address.
	In contrast to structure data type, where each member has separate memory space, whereas in union data type, members of a union, all share a single memory space.
	A value can only be held by one member of a union at any given moment
	When you need to represent many data types interchangeably, union data types comes in handy
	The members of union data type can be accessed by '.' operator.
     */
   printf("---------------- Unions ------------------------ \n "); 
    union People person_1, person_2;

    strcpy(person_1.first_name, "Ashwin");
    strcpy(person_1.last_name, "Kannan");
    person_1.age = 24;

    
    strcpy(person_2.first_name, "Kannan"); 
    strcpy(person_2.last_name, "Arumugam");
    person_2.age = 45;


    printf("First Name : %s \n", person_1.first_name);
    printf("Last Name : %s \n", person_1.last_name);
    printf("Age : %hd \n", person_1.age);

    printf("First Name : %s \n", person_2.first_name);
    printf("Last Name : %s \n", person_2.last_name);
    printf("Age : %hd \n", person_2.age);

    printf("Memory of First Person's first name : %p \n", &person_1.first_name);
    printf("Memory of First Person's last name : %p \n", &person_1.last_name);
    printf("Memory of Second Person's first name : %p \n", &person_2.first_name);
    printf("Memory of Second Person's last name : %p \n", &person_2.last_name);

    /*
     Reason Why First Name and Last name is not printing on the screen :-

     Since the union data type, shares the same memory all of it's fields on their respective variables, the latest field will be replaced of it's first one. In order to overcome this , you can use the following below to print all of the output value. But remember , it will overwrite everything.
     */

   strcpy(person_1.first_name, "Ashwin");
   printf("First Name : %s \n", person_1.first_name);
   strcpy(person_1.last_name, "Kannan");
   printf("Last Name : %s \n", person_1.last_name);

   printf("First Name : %s \n", person_1.first_name);


   /*
     enum data type :- 
     ---------------------
     	enum is called enumeration, which generally means "a list of items counted one by one".
	enum is a derived data type, which is a set of names constants or enumerators, that represents a collection of connected values
    */

   printf("-------------------------- enum --------------------------- \n");
   enum TrafficLights signal = YELLOW;

  printf("Traffice Light Signal Index : %d \n", signal);
 if (signal == RED)
 {
	 printf("The Vehicles must STOP. \n");
 }
 else if (signal == YELLOW)
 {
	 printf("The Vehicles get ready to go. \n");
 }
 else if (signal == GREEN) 
 {
	 printf("The Vehicles can GO! \n");
 }


 /*
   (IV) void data type :- 
   ------------------------
   	A void data type in C language is used to denote a lack of a particular type.
	Function return types, function parameters and pointers are three situation where it's frequently utilized.
  */
}
