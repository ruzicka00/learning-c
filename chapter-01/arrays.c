/*
*File: arrays.c
*Author: ruzicka00 
*Version: 1.0
*Date: 09_04_2026
*
*Description:
*    Understanding and learning arrays - declaration, initialization and iteration    
*/

#include <stdio.h> 

/* print_array - prints all elements of an integer array
 * Parameters: arr - the array, size - number of elements
 */
void print_array(int arr[], int size)
{
    int i; 
    for (i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

int main(void)
{
    /* array declaration and initialization */
    int numbers[5] = {10, 20, 30, 40, 50};

    /* arrays start at index 0 */
    printf("first element: %d\n", numbers[0]);
    printf("last element: %d\n", numbers[4]);

    /* loop through array */
    print_array(numbers, 5);

    return 0;
}