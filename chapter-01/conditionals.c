/*
 *File: conditionals.c 
 *Author: ruzicka00 
 *Version: 1.0 
 *Date: 16_03_2026
 *
 *Description: 
 *    Understanding and learning conditionals 
 */

#include <stdio.h>

/* main - demonstrates if, else if, and else conditionals 
 *Returns 0 on successful execution. 
 */
int main(void)
{
    int x = 42;

    /* basic if, else if, else */
    if (x > 0 )
    {
        printf("x is positive\n");
    }
    else if (x < 0)
    {
        printf("x is negative\n");
    }
    else
    {
        printf("x is zero\n");
    }

    /* conditionals inside a loop */
    int i;
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is even\n", i);
        }
        else 
        {
            printf("%d is odd\n", i);
        } 
    }
    return 0;
}