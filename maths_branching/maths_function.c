#include <stdio.h>
#include <math.h>

int main() {
    int firstNumber, secondNumber, add, subtract, multiply, remainder;
    float divide;
    
    // printf displays the string inside quotation
    printf("Enter two numbers\n");
    scanf("%d%d", &firstNumber, &secondNumber);
    
    // Calculates Addition
    add = firstNumber + secondNumber;
    
    // Calculates Subtraction
    subtract = firstNumber - secondNumber;
    
    // Calculates Multiplication
    multiply = firstNumber * secondNumber;
    
    // Calculates Division
    divide = firstNumber / (float)secondNumber; // Typecasting

    // Calculates Remainder
    remainder = firstNumber % secondNumber;

    // printf displays the string inside quotation
    printf("Addition = %d\n", add);
    printf("Subtraction = %d\n", subtract);
    printf("Multiplication = %d\n", multiply);
    printf("Division = %.2f\n", divide);
    printf("Remainder = %d\n", remainder);
    
    return 0;
}