/*
 *File: variables.c
 *Author: ruzicka00
 *Version: 1.0
 *Date: 12_03_2026
 *
 *Description:
 *    Exploring variables, data types and basic arithmetic.
 */

 #include <stdio.h>

/* main - demonstrates variables, data types and basic arithmetic 
 *  Returns 0 on successful execution.
 */
  int main(void)
{
    /* Intenger variable - whole numbers */
    int a = 10;
    int b = 3; 

    /* Float variable - decimal numbers */
    float f = 3.14;

    /* Character variable - single character */
    char c = 'A';

    /* Basic arithmetic */ 
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %.2f\n",(float)a / b); /* float cast forces decimal division */
    printf("a %% b = %d\n", a % b); /* mudulo - remainder */

    /* Float output */
    printf("f = %.2f\n", f); 
    
    /* Character output */
    printf("c = %c\n", c);
    
    return 0;
}