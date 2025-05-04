#include<stdio.h>

static int increment() // If the function itself is declared as 'static' function, then the static function is can't accessed by other files
{
    short count = 0;
    count += 1;
    return count;
}

void main()
{
    printf("----------Static Variable -------------- \n");
    

    static short count = increment();
    count = increment();

    printf("The current incremented value is : \n");

    for (short index = 1; index <= count; index += 1)
    {
        printf("%hd \n", index);
    }
}
