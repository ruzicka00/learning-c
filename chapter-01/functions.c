/*
*File: functions.c
*Author: Ruzicka00 
*Version: 1.0
*Date: 09_04_2026
*
*Description:
*    Introduction to functions, parameters and return values
*/

#include <stdio.h> 

/* add - returns the sum of two integer
 * Parameters: a - first integer, b second integer
 */
int add(int a, int b)
{
    return a + b; 
}

/* is_even - checks if a number is even
 * Parametes: n - integer to check 
 * Returns: 1 if even, 0 if odd 
 */
int is_even(int n)
{
    return n % 2 == 0;
}

/* main - demonstrates  function calls and return values
 * Returns 0 on successful execution
 */
int main(void)
{
    int x = 10; 
    int y = 3;
    

    /* calling functions and using return values */
    printf("%d = %d = %d\n", x , y, add(x, y));

    /* using return values as a condition */
    if (is_even(x))
    {
        printf("%d is even \n", x);
    }
    else 
    {
        printf("%d is odd\n", x);
    }

    return 0; 
}