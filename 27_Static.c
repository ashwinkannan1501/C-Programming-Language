#include<stdio.h>

short increment()
{
    static short count = 0;
    count += 1;
    return count;
}

int main()
{

    printf("------------ Static Variable ------------------- \n");
    printf("%hd \n", increment());
    printf("%hd \n", increment());

    return 0;
}