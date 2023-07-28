/*
Strings in C :- 
-----------------
    The strings are used for storing text / characters. Example :- "Hello World" is a string of characters.
    Unlike many other programming languages, C does not have a string data type.
    To declare the string, you must use the 'char' datatype to create a array of characters. You must use the ("").

SYNTAX :- 
-----------
    ---------------------------
    | char string_name[size]; |
    ---------------------------

EXAMPLE :- 
------------
    ----------------------------
    | char string[] = "Geeks"; |
    ----------------------------

                0   1   2   3   4      5
              -------------------------------------
    string    | G | E | E | K | S | (backslash) 0 |
              -------------------------------------
             
             --------------------------------------
    Address  | 100  | 101 | 110 | 123 | 125 | 102 |
             --------------------------------------
    
    Use the '%s' format specifier in C to print the string values
*/
#include <stdio.h>
#include <string.h>

void main()
{
    printf("--------------- Strings -------------------- \n");

    // Example of string
    char greetings[] = "Hello World!";
    printf("%s \n", greetings);

    /*
    Access the Strings :- 
    -----------------------
        Since strings are actually arrays in C, you can access a string by referring to it's index number. You have 
    to use the "%c" format specifier to print a single character.
    */
    printf("%c", greetings[2]); // Exmaple of Accessing a character in the string

    /*
    Modification of Strings :- 
    ----------------------------
        To change the values of a specific characters in a string, refer to it's index number and use ('').
        Since Strings is an array of characters, like arrays, strings are also mutable.
    */
    greetings[0] = 'J';
    printf("%s \n", greetings);

    /*
    Loop througn a string :- 
    --------------------------
        You can also loop through a individual characters in a string using either for / while loop. 
    */
   short index = 0;
   while(index < strlen(greetings)) // Using While loop
   {
       printf("%c \n", greetings[index]);
       index += 1;
   }

    for (int i = 0; i < strlen(greetings); i++) // Using For loop
    {
        printf("%c \n", greetings[i]);
    }
    
    /*
    String Functions :-
    ---------------------
        C also have many useful functions, which can be used to perform certain operations on strings. To use them, 
    you must include / import the "<string.h>" header file in your program.

    -----------------------
    | #include <string.h> |
    -----------------------
    */

   /*
   (i) String Length :- 
   ----------------------
        To get the length of the string, you can use the 'strlen()' function.
    Example :- 
    -----------
        ---------------------------------
        | char name[] = "Ashwin";       |
        | printf("%d", strlen(name));   |
        ---------------------------------

        In the strings, we also use the 'sizeof' operator to get the size of the string / array.
        Note that the 'sizeof' operator and 'strlen()' function behaves differently, as the 'sizeof' operator also 
    includes the '\0' character when counting while the 'strlen()' function doesn't count that.
   */

    // Example :-
    char ALPHABETS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("String Length :- %d \n", strlen(ALPHABETS)); // Output :- 26
    printf("sizeof() operator :- %d \n", sizeof(ALPHABETS)); // Output :- 27

    /*
        It is also important that you know that 'sizeof' operator will always return the memory size(in bytes), and 
    not the actual string length.
    */
   
   // Exmaple :- 
    char alphabets[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("String Length :- %d \n", strlen(alphabets)); // Output :- 26
    printf("sizeof() operator :- %d \n", sizeof(alphabets)); // Output :- 50

    /*
    (ii) Concatenate String :- 
    ----------------------------
        To concatenate / combine 2 strings, use the 'strcat()' function.
    */

    // Example :-
    char first_name[] = "Ashwin";
    char last_name[] = "Kannan";
    strcat(first_name, last_name); // It concates / combines the 'first_name' and 'last_name' and store it in the 'first_name' variable
    printf("String Concatenation :- Ashwin + %s = %s \n", last_name, first_name);
    //printf("String Concatenation :- %s \n", strcat("Ashwin", "Kannan"));

    /*
    Note :- 
    --------
        The 'strcat()' function combines the 1st parameter and the 2nd parameter and store it in the 1st parameter.
        Hence the 1st parameter should be large enough to store both the values.
    */

    /*
    (iii) Copy Strings :- 
    -------------------------
        To copy the value of one string to another string, you can use the 'strcpy()' function

    SYNTAX :-
    -----------
        strcpy(first_parameter, second_parameter);

        The value of the 2nd parameter is copied to the 1st parameter.
    */
    // EXAMPLE :-
    char string1[10] = "Hello", string2[10];
    strcpy(string2, string1); // It will copy the value of 'string1' to 'string2'
    printf("String 1 :- %s \n", string1);
    printf("Address of 'string1 = %s' : %p \n", string1, &string1);
    printf("String 2 :- %s \n", string2);
    printf("Address of 'string2 = %s' : %p \n", string2, &string2);
    /*
    By the above output, we can understand that both variables stores in separate memory address, so alteration of 
    one variable doesn't affect the another variable 
    */

    /*
    (iv) Comapre Strings :- 
    -------------------------
        To comapre 2 strings, you can use the 'strcmp()' function.
        It returns , if 2 strings are equal, otherwise a value that is not 0.
    */
    // Example :- 
    printf("String Compare :- %d \n", strcmp("Hello", "a"));
    printf("String Compare :- %d \n", strcmp("Hello", "Hi"));
    printf("String Compare :- %d \n", strcmp("Hi", "Hi"));

    /*
    Uppercase Strings :- 
    -----------------------
        The 'strupr()' function returns string characters in uppercase.
    */
    // Example :-
    char lower[] = "ashwinkannan";
    printf("String UpperCase :- %s \n", strupr(lower));

   /*
    String Lowercase :- 
    ---------------------
        The 'strlwr()' function returns the string characters in lowercase.
    */
    // Example :-
    char upper[] = "ASHWINKANNAN";
    printf("String LowerCase :- %s \n", strlwr(upper));

    /*
    String 'strstr()' function :- 
    -------------------------------
        The String 'strstr()' function returns the pointers to the 1st occurence of tghe matched string in the given 
    string.
        It is used to return tghe substring from the 1st match till the last character.

    SYNATX :- 
    -----------
        char *strstr(const char *string, const char *match);

    String 'strstr()' parameters :- 
    ----------------------------------
        (a) String :- 
        ---------------
            It represents the full string from where the substring will be searched
        (b) Match :- 
        ---------------
            It represents the substring to be searched in the full string.
    */
    // Example :- 
    printf("strstr() function :- %s \n", strstr("GeeksForGeeks", "F")); // Output :- ForGeeks

    /*
    String Reverse :- 
    -------------------
        The 'strrev()' function returns the reverse of the given string.
    */
    char string[] = "ashwinkannan";
    printf("String Reverse :- %s \n", strrev(string));  // Output :- nannakniwhsa

    //----------------------------------------------------------------
    // General Program for string 
    char name[25], roll_no[15], department[5], branch[5], email_id[100];
    unsigned short age; 
    unsigned long long reg_no, mobile_no;

    printf("Enter your name : ");
    fgets(name, 25, stdin);

    printf("Enter your age : ");
    scanf("%hu", &age);

    printf("Enter your roll no : ");
    scanf("%s", roll_no);

    printf("Enter your reg no : ");
    scanf("%lu", &reg_no);

    printf("Enter your mobile number : ");
    scanf("%lu", &mobile_no);

    printf("Enter your Email ID : ");
    scanf("%s", email_id);

    printf("Enter your department : ");
    scanf("%s", department);

    printf("Enter your branch : ");
    scanf("%s", branch);

    printf("Name : %s \n", name);
    printf("Age : %hu \n", age);
    printf("Roll No : %s \n", roll_no);
    printf("Reg : No : %lu \n", reg_no);
    printf("Mobile No : %lu \n", mobile_no);
    printf("Email ID : %s \n", email_id);
    printf("Department : %s \n", department);
    printf("Branch : %s \n", branch);
}
