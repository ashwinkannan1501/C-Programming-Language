/*
Operators :-
---------------
    The Operators are used to perform operations on variables and values. 

Types :-
----------
    There are 6 types of operators in c. They are :-
        (i) Arithmetic Operator
        (ii) Comparison / Relational Operator
        (iii) Logical / Boolean Operator
        (iv) Bitwise Operators
        (v) Assignemnt Operators
        (vi) Special / Miscellaneous Operators
*/
#include <stdio.h>
void main()
{
    printf("------------------- Operators ------------------ \n");

    short first_number, second_number;

    printf("Enter the first number : ");
    scanf("%hd", &first_number);

    printf("Enter the second number :- ");
    scanf("%hd", &second_number);

    /*
    (i) Arithmetic Operators :-
    -----------------------------
        The Arithmetic Operators are used to perform the common mathematical operations. There are 7 categories of 
    Arithmetic Operators. They are :-
        (A) '+' -> Addition -> This operator is used to add the 2 numbers
        (B) '-' -> Subtraction -> This operator is used to subtract the 2 numbers.
        (C) '*' => Multiplication ->  This operator is used to multiply the 2 numbers.
        (D) '/' => Division -> This Operator is used to divide the 2 numbers.
        (E) '%' => Modulus => This Operator is used to the remainder calaulation for 2 numbers.
        (F) ++ => Increment => This operator is used to do the +1 incrementation of 2 numbers. It is of 2 types :-
            (a) Pre-Inrement -> 'printf("%d", ++variable)' -> This pre-increment operator is used to perform the +1 
                addition operation before printing the variable 
            (b) Post-Increment -> 'printf("%d", variable++)' -> This post-increment operator is used to perform the 
                +1 addition operation after printing the variable
        (G) -- => Decrement => This operator is used to do the -1 decrementation of 2 numbers. It is of 2 types :-
            (a) Pre-Decrement -> 'printf("%d", --variable)' -> This pre-decrement operator is used to perform the -1
                subtraction operation before printing the variable
            (b) Post-Decrement => 'printf("%d", variable--)' => This post-decrement operator is used to perform the
                -1 subtraction operation after printing the variable
    */

    printf("----------------------- Arithmetic Opertor ------------------------\n ");
    //1) Arithmetic Operator
    short addition = first_number + second_number;
    short subtraction = first_number - second_number;
    short multiplicaton = first_number * second_number;
    short division = first_number / second_number;
    short modulus = first_number % second_number;
    printf("%hd + %hd = %hd \n", first_number, second_number, addition);
    printf("%hd - %hd = %hd \n", first_number, second_number, subtraction);
    printf("%hd * %hd = %hd \n", first_number, second_number, multiplicaton);
    printf("%hd / %hd = %hd \n", first_number, second_number, division);
    printf("%hd %% %hd = %hd \n", first_number, second_number, modulus);

    short pre_increment = ++first_number;
    short post_increment = first_number ++;
    short pre_decrement = --second_number;
    short post_decrement = second_number--;
    printf("++%hd = %hd \n", first_number, pre_increment);
    printf("%hd++ = %hd \n", first_number, post_increment);
    printf("--%hd = %hd \n", second_number, pre_decrement);
    printf("%hd-- = %hd \n", second_number, post_decrement);

    /*
    (ii) Comparison / Relational Operators :-
    -------------------------------------------
        The Comparison / Relational Operators are used to compare the 2 values / variables. It returns either 
    0 (false) / 1 (true). These values are known as 'Boolean Values'.
    
        There are 6 categories of comparison / relational operators. They are :-
            (A) '<' -> Lesser than -> This operator is used to return 1(true) if 'a' is lesser than 'b', 
                otherwise returns 0(flase).
            (B) '<=' -> Lesser than or equal to -> This Operator is used to return 0(true) if 'a' is lesser than or 
                equal to 'b', otherwise returns 0(false).
            (C) '>' -> Greater than -> This operator is used to return 1(true) if 'a' is greater than 'b',
                otherise returns 0(false) .
            (D) '>=' -> Greater than or equal to -> This operator is used to return 1(true) is 'a' is greater than or
                equal to 'b', otherise returns 0(flase).
            (E) '==' -> Equal to -> This operator is used to return 1(true) if 'a' is equal to 'b', otherwise returns
                0(false).
            (F) '!=' -> Not Equal to / Inequality -> This operator is used to return 1(true) if 'a' is not equal to 
                'b', otherwise returns 0(false).
    */

    printf("------------------- Comparison / Relational Operator ----------------------\n");
    // 2) Comparison / Relational Operator :-
    printf("%hd < %hd = %hd \n", first_number, second_number, first_number < second_number);
    printf("%hd <= %hd = %hd \n", first_number, second_number, first_number <= second_number);
    printf("%hd > %hd = %hd \n", first_number, second_number, first_number > second_number);
    printf("%hd >= %hd = %hd \n", first_number, second_number, first_number >= second_number);
    printf("%hd == %hd = %hd \n", first_number, second_number, first_number == second_number);
    printf("%hd != %hd = %hd \n", first_number, second_number, first_number != second_number);

    /*
    (iii) Logical / Boolean Operator :-
    -------------------------------
        The Logical / Boolean Operators are used to determine the logic between the variables / values. There are 
    3 categories of logical / boolean operators. They are :-
        (A) '&&' -> Logical AND Operator -> This operator is used to return 1(true) if both statements / conditions
            are true, otherwise returns 0(false).
        (B) '||' -> Logical OR Operator -> This operatr is used to return 1(true) if both statements / conditions
            are true, otherwise returns 0(false)
        (C) '!'-> Logical NOT Operator -> This operator is used to return 0(false) if the result is true. It Reverse
            the result (i.e)
                result 'false' means, it returns '1(true)'
                result 'true' means, it returns '0(false)'
    */

    printf("--------------- Logical / Boolean Operators ------------------------- \n");
    // 3) Logical / Boolean Operators
    printf("%hd && %hd = %hd \n", first_number, second_number, first_number && second_number);
    printf("%hd || %hd = %hd \n", first_number, second_number, first_number || second_number);
    printf("! %hd \n", ! first_number);

    /*
    (iv) Bitwise Operators :-
    -----------------------
        In the ALU (Arithmetic Logic Unit), which is within the CPU (Central Processing Unit), the mathematical 
    operations are done in bit-level.
        To Perform the bit-level operations, the bitwise operators are used.
        There are 6 categories of bitwise Operators. They are :-
            (A) '&' -> Bitwise AND Operator
            (B) '|' -> Bitwise OR Operator
            (C) '~' -> Bitwise NOT / Complement Operator
            (D) '^' -> Bitwise XOR Operator
            (E) '<<' -> Bitwise Left Shift Operator
            (F) '>>' -> Bitwise Right Shift Operator

        Firstly, it converts the decimal numbers into binary values and then it perform the operations.
        Then the binary result is converted into decimal values
    */

    printf("---------------- Bitwise Operators -------------------- \n");
    // 4) Bitwise Operators
    short bitwise_and = first_number & second_number;
    short bitwise_or = first_number | second_number;
    short bitwise_not = ~ first_number;
    short bitwise_xor = first_number ^ second_number;
    short bitwise_left_shift = first_number << second_number;
    short bitwise_right_shift = first_number >> second_number;

    printf("%hd & %hd = %hd \n", first_number, second_number, bitwise_and);
    printf("%hd | %hd = %hd \n", first_number, second_number, bitwise_or);
    printf("~ %hd = %hd \n", first_number, bitwise_not);
    printf("%hd ^ %hd = %hd \n", first_number, second_number, bitwise_xor);
    printf("%hd << %hd = %hd \n", first_number, second_number, bitwise_left_shift);
    printf("%hd >> %hd = %hd \n", first_number, second_number, bitwise_right_shift);

    /*
    (v) Assignment Operators :-
    ------------------------------
        The Assignment Operators are used to assign the values to the variables. There are 10 categories of 
    assignment operators. They are :-
            =, +=, -=, *=, %=, &=, |=, ^=, <<=, >>=
    */

    printf("------------- Assignment Operators ---------------- \n");
    // 5) Assignment Operators
    short first_num, second_num;
    printf("Enter the first number : ");
    scanf("%hd", &first_num);
    printf("Enter the second number : ");
    scanf("%hd", &second_num);

    first_num += second_num; // Equivalent to "first_num = first_num + second_num"
    first_num -= second_num;// Equivalent to "first_num = first_num - second_num"
    first_num *= second_num;// Equivalent to "first_num = first_num * second_num"
    first_num /= second_num;// Equivalent to "first_num = first_num / second_num"
    first_num %= second_num;// Equivalent to "first_num = first_num % second_num"
    first_num &= second_num;// Equivalent to "first_num = first_num & second_num"
    first_num |= second_num;// Equivalent to "first_num = first_num | second_num"
    first_num ^= second_num;// Equivalent to "first_num = first_num ^ second_num"
    first_num <<= second_num;// Equivalent to "first_num = first_num << second_num"
    first_num >>= second_num;// Equivalent to "first_num = first_num >> second_num"

    printf("The Value of 1st number = %hd \n", first_num);
    printf("The value of 2nd number = %hd \n", second_num);

    /*
    (vi) Special Operators / Miscellaneous Operators :-
    -----------------------------------------------------
        (A) sizeof operator :-
        ------------------------
            The 'sizeof' operator is used to compute the size of the variable/operand. Basically, it returns the byte
            size of the datatype. It is a compile time unary operator
    */
    printf("---------------- sizeof() operator ------------------- \n");
    printf("%lu \n", sizeof(short)); // output :- 2

    /*
(vii) Ternary / Conditional Operators :-
---------------------------------------------
    It is also known as the simple if statement
    Problem : Check if you are eligible to vote or not using ternary operator
    */
   unsigned short age;
   printf("Age : ");
   scanf("%hd", &age);
   printf("%s \n", (age >= 18 ? "You are eligibile to vote" : "You are not eligible to vote"));
   /*
   Explanation :- 
   ----------------
   SYNTAX :- (condition ? statement_1 : statement_2)
   if condition satiesfies, statement 1 will get executed otherwise statement 2 will get executed 
   */
}