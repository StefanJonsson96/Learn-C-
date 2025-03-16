#include <stdio.h>

int tempConversion(){
    printf("Please enter a temperature in Fahrenheit: ");
    float fahrenheit;
    scanf("%f", &fahrenheit); // & means we send the memory address of the variable
    float celsius = (fahrenheit - 32) * 5 / 9;
    printf("The temperature in Celsius is: %.2f\n", celsius);
    return 0;
}