/*
 * File: types.c
 * Author: ruzicka00 
 * Version: 1.0 
 * Date: 12_04_2026
 *
 * Description:
 *     Exploring all basic C data types, their sizes and limits
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>

/*
 * main - demonstrates all basic C data types and their limits
 * Returns 0 on successful execution
 */

int main(void)
{
    /* integer types - different sizes */
    char c = 'A';
    short s = 32767;
    int i = 2147483647;
    long l = 2147483647L; 

    /* unsigned versions - no negative numbers, double the positive range */
    unsigned int ui = 4294967295U;

    /* floating point types */
    float f = 3.14159f;
    double d = 3.14159265358979;

    /* print sizes in bytes */ 
    printf("char:   %zu bytes, value: %c\n", sizeof(char), c);
    printf("short:  %zu bytes, value: %d\n", sizeof(short), s); 
    printf("int:    %zu bytes, value: %d\n", sizeof(int), i);
    printf("long:   %zu bytes, value: %ld\n", sizeof(long), l);
    printf("uint:   %zu bytes, value: %u\n", sizeof(unsigned int), ui);
    printf("float:  %zu bytes, value: %f\n", sizeof(float), f);
    printf("double: %zu bytes, value: %lf\n", sizeof(double), d);

    /* limits */
    printf("\nint max: %d\n", INT_MAX);
    printf("int min: %d\n", INT_MIN);

    return 0;
}