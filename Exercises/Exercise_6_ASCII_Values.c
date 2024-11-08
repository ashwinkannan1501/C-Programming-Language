//ASCII  American Standard Code For Information Interchange
/*
128 total character which is used mostly during program.
 
Total number of Character in ASCII table is 256 (0 to 255).
 
0 to 31(total 32 character ) is called as ASCII control characters
include 'Escape', 'Backspace' and 'Delete'.
 
32 to 127 character is called as ASCII printable characters
 
128 to 255 is called as The extended ASCII codes
*/

#include <stdio.h>

void main()
{
    printf("----------------- ASCII Values -------------------");

    for (unsigned short index = 0; index <= 255; index ++)
    {
        printf("%hu | %c \n", index, index);
    }
}
