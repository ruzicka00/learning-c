/*
 *File: variables_deep.c
 *Author: ruzicka00
 *Version: 1.0
 *Date: 14_03_2026
 *
 *Description:
 *    Understanding variables deeper and how printf displays them
 */

 #include <stdio.h>

 /* main - demonstrates format specifiers and printf behavior
 * Returns 0 on successful execution. 
 */
int main(void)
{
    int a = 10; 
    int b = 3;
    float f = 3.14159;

    /* Basic specifiers */
    printf("%d\n", a);      /* integer */
    printf("%f\n", f);      /* float, default 6 decimal places */
    printf("%.2f\n", f);    /* float, exactly 2 decimal places */
    printf("%.4f\n", f);    /* float, exactly 4 decimal palces */

    /* Field width */
    printf("%10d\n", a);    /* right aligned in 10 char wide field */
    printf("%-10d|\n", a ); /* left aligned, | shows where field ends */

    /* Zero padding */
    printf("%05d\n", a);    /* pad with zeros to width 5*/

    /* Operation inside printf - evaluated before printing */
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%.2f / %d = %.2f\n", f, b, f / b);

    return 0;
}
