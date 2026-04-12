/*
 *File: temp_converter.c
 *Author: ruzicka00 
 *Version: 1.0
 *Date: 10_04_2026
 *
 *Description:
 *    Converting Celsius to Fahrenheit and  Fahrenheit to Celsius and then displaying them   
 */

#include <stdio.h>

/* celsius_to_fahrenheit - converts Celsius to Fahrenheit
 * Parameters: c - temperature in Celsius
 * Returns: temperature in Fahrenheit
 */
float celsius_to_fahrenheit(float c)
{
    return (c * 1.8) + 32;
}

/* fahrenheit_to_celsius - converts Fahrenheit to Celsius
 * Parameters: f - temperature in Fahrenheit
 * Returns: temperature in Celsius
 */
float fahrenheit_to_celsius(float f)
{
    return (f - 32) * 5 / 9;
}

/* main - demonstrates functions and return values 
 * Returns 0 on a successful execution 
 */
int main(void)
{   
    int i;
    int j; 
   
    printf("----- Temperature Converter ------\n");
    printf("    Celsius    Fahrenheit\n");
    printf("----------------------------------\n");

    /* Converts Celsius to Fahrenheit and prints them out */
    for (i = 0; i <= 100; i += 10 )
    {
        printf("%7d C  =  %7.2f F\n", i, celsius_to_fahrenheit(i));

    }
    
    printf("----------------------------------\n");
    printf("    Fahrenheit   Celsius\n");
    printf("----------------------------------\n");

    /* Converts Fahrenheit to Celsius and prints them out */
    for (j = 32; j <= 212; j += 18)
    {
        printf("%7d F = %7.2f C \n", j, fahrenheit_to_celsius(j));
    }

    return 0; 
}