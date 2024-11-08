/*
Data Types in C :-
--------------------
    A Variable in C must be a specified 'datatype' and you must use a 'format specifier' inside the 'printf()' 
function to display it.

    The datatype specifies the size and type of information the variable will store. It refers to the type and the 
size of data associated with variables and functions.

    In the C programming language, data types constitute the semantics and characteristics of storage of data 
elements.

    They are expressed in the language syntax in form of declarations for memory locations or variables. 
    Data types also determine the types of operations or methods of processing of data elements.

    C data types are defined as the data storage format that a variable can store a data to perform a specific 
operation.

    Data types are used to define a variable before to use in a program.

*/
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>

void main()
{
    printf("---------------------- Data Types ---------------------------\n");

    /*
    Integer DataType :- 
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
    short short_data_type = -32768;
    unsigned short unsigned_short_data_type = 655;
    int int_data_type = 25639785;
    unsigned int unsigned_int_data_type = 2563;
    long long_data_type = 569841;
    unsigned long unsigned_long_data_type = 2563984;
    long long long_long_int_data_type = 45636989542;
    unsigned long long unsigned_long_long_data_type = 45698723;

    printf("The value of short data type = %hd \n", short_data_type);
    printf("The value of Unsigned Short Data Type = %hu \n", unsigned_short_data_type);
    printf("The value of int data type = %d \n", int_data_type);
    printf("The value of Unsigned Int data type = %u \n", unsigned_int_data_type);
    printf("The value of long data type = %ld \n", long_data_type);
    printf("The value of Usigned Long Data Type = %lu \n", unsigned_long_data_type);
    printf("The value of long long int data type = %lld \n", long_long_int_data_type);
    printf("The value of unsigned long long int data type = %llu \n", unsigned_long_long_data_type);

    /*
    Character Datatype :- 
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

    // 2) Character Data Type
    char char_data_type = '4';
    unsigned char unsigned_char_data_type = 'P';
    printf("The Value of char data type = %c \n", char_data_type);
    printf("The value of unsigned char data type = %c \n", unsigned_char_data_type);


    /*
    Floating Point Data Type :- It is of 3 types :-

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
    float float_data_type = 25.3695;
    double double_data_type = -5263.752639;
    printf("The value of float data type = %f \n", float_data_type);
    printf("The value of double data type = %lf \n", double_data_type);

    /*
    Boolean Data Type :-
    ---------------------
        The boolean in represented as 'bool' in C. We must import/include the 'stdbool' header file to use the boolean data type. 

        It only contains one value either 'true'/'false'. It is of 1 bit. There is no format specifiers for boolean
    data type. We can print it's values by using some of the existing format specifiers like '%d', '%i', '%s', etc.,
    */

    // 4) Boolean Data Type
    bool boolean_data_type = true;
    printf("Boolean data type = %d \n", boolean_data_type);
    if (boolean_data_type == true)
    {
        printf("Boolean data type = true  \n");
    }

    printf("----------------------------------------------------------------------------------- \n");

    printf(" Printing the size(in bytes), range of the each data type :- \n");
    // Integer
    printf("\nShort data type | %u Bytes | %d To %d", sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf("\nunsigned short data type | %u Bytes | 0 To %d", sizeof(unsigned short int), USHRT_MAX);
    printf("\nunsigned int data type | %u Bytes | 0 To %u", sizeof(unsigned int), UINT_MAX);
    printf("\nint data type | %u Bytes | %d To %d", sizeof(int), INT_MIN, INT_MAX);
    printf("\nlong data type | %u Bytes | %ld To %ld", sizeof(long int), LONG_MIN, LONG_MAX);
    printf("\nunsigned long data type | %u Bytes | 0 To %u", sizeof(unsigned long int), ULONG_MAX);
    printf("\nlong long data type | %u Bytes | %lld To %lld", sizeof(long long int), LLONG_MIN, LLONG_MAX);
    printf("\nunsigned long long data type | %u Bytes | 0 To %llu \n\n", sizeof(unsigned long long int), ULLONG_MAX);
    // Character
    printf("\nCharacter data type | %u Bytes | %d To %d", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("\nCharacter data type | %u Bytes | 0 To %d\n\n", sizeof(unsigned char), UCHAR_MAX);
    // Float
    printf("\nFloat data type | %u Bytes", sizeof(float));
    printf("\nDouble data type | %u Bytes", sizeof(double));
    printf("\nLong Double data type | %u Bytes\n\n", sizeof(long double));
}
