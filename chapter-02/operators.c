/*
 * File: operators.c 
 * Author: ruzicka00
 * Version: 1.0
 * Date: 12_04_2026
 *
 * Description:
 *     Exploring all C operators: arithmetic, relational, logical, increment and compound assignment
 */
 
#include <stdio.h>

int main(void)
{ 
    int a = 10, b = 3; 

    /* arithmetic */
    printf("--- Arithmetic ---\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf(" a %% b = %d\n", a % b);
    
    /* relational - return 1 (true) or 0 (false) */
    printf("\n--- Relational ---\n");
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);

    /* logical */
    printf("\n--- Logical --- \n");
    printf("a > 0 && b > 0 = %d\n", a > 0 && b > 0 );
    printf("a > 0 || b > 20 = %d\n", a > 0 || b > 20);
    printf("!(a > 0) = %d\n", !(a > 0));

    /* increment / decrement */
    printf("\n--- Increment/Decrement ---\n");
    printf("a++ = %d\n", a++);
    printf("a   = %d\n", a);
    printf("++a = %d\n", ++a);
    printf("a   = %d\n", a);

    /* compound assignment */
    printf("\n--- Compound Assignment ---\n");
    a = 10;
    a += 5; printf("a += 5: %d\n", a);
    a -= 3; printf("a -= 3: %d\n", a);
    a *= 2; printf("a *= 2: %d\n", a);
    a /= 4; printf("a /= 4: %d\n", a);

    return 0;
}