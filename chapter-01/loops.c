/*
 *File: loops.c
 *Author: ruzicka00
 *Version: 1.0 
 *Date: 15_03_2026
 *
 *Description:
 *    Understanding and learning for and while loops 
 */

 #include <stdio.h>

 /* main - demonstrates for and while loops in c 
  * Returns 0 on successful execution 
  */
int main(void)
{
    int i;

    /* for loop - counts from 0-4 */
    for (i = 0; i < 5; i++)
    {
        printf("for loop iteration: %d\n", i);
    }

    /* while loop - same thing, different syntax */
    i = 0;
    while (i < 5)
    {
        printf("while loop iteration: %d\n", i);
        i++;
    }
    
    return 0;
}