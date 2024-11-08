#include <stdio.h>

void main()
{
    short short_format_specifier = 10;
    unsigned short unsigned_short_format_specifier = 20;
    int integer_format_specifier = 30;
    unsigned int unsigned_integer_format_specifier = 40;
    long long_integer_format_specifier = 5000;
    unsigned long unsigned_long_integer_format_specifier = 40000;
    long long long_long_integer_format_specifier = 450365;
    unsigned long long unsigned_long_long_integer_format_specifer = 4563217890;
    float floating_point_format_specifier = 12.36;
    double double_format_specifier = 7523.698;
    long double long_double_format_specifier = 75896.36985;
    char character_format_specifier = 'a';
    char string_format_specifier[] = "Ashwin Kannan";
    int octal_format_specifier = 26, hexa_format_specifier = 896;
    
    float scientific_notation = 5.369;

    printf("Short Format Specifier : %%hd :- %hd \n", short_format_specifier);
    printf("Unsigned Short Format Specifier : %%hu :- %hu \n", unsigned_short_format_specifier);
    printf("Integer Format Specifier : %%d :- %d \n", integer_format_specifier);
    printf("Unsigned Integer Format Specifier : %%u :- %u \n", unsigned_integer_format_specifier);
    printf("Long Integer Format Specifier : %%ld :- %ld \n", long_integer_format_specifier);
    printf("Unsigned Long Integer Format Specifier : %%lu :- %lu \n", unsigned_long_integer_format_specifier);
    printf("Long Long Integer Format Specifier : %%lld :- %lld \n", long_long_integer_format_specifier);
    printf("Unsigned Long Long Integer Format Specifier : %%llu :- %llu \n", unsigned_long_long_integer_format_specifer);
    printf("Floating Point Format Specifier : %%f :- %f \n", floating_point_format_specifier);
    printf("Double Format Specifier : %%lf :- %lf \n", double_format_specifier);
    printf("Long Double Format Specifier : %%Lf :- %Lf \n", long_double_format_specifier);
    printf("Single Character Format Specifier : %%c :- %c \n", character_format_specifier);
    printf("String Format Specifer : %%s :- %s \n", string_format_specifier);
    //printf("Nothing Format Specifier :- %n \n", 10);
    printf("Octal Format Specifier : %%o :- %o \n", octal_format_specifier);
    printf("Hexadecimal Format Specifer : %%x :- %x \n", hexa_format_specifier);
    printf("Memory Address Format Specifier : %%p :- %p \n", &integer_format_specifier);
    printf("Scientific Notation Format Specifier : %%e :- %e \n", scientific_notation);
    printf("96%%");



}