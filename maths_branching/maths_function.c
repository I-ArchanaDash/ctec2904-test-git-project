#include <stdio.h>
#include <math.h>

int main() {
    int firstNumber, secondNumber, add, subtract, multiply;
    float divide;
    
    // printf displays the string inside quotation
    printf("Enter two numbers\n");
    scanf("%d%d", &firstNumber, &secondNumber);
    
    add = firstNumber + secondNumber;
    subtract = firstNumber - secondNumber;
    multiply = firstNumber * secondNumber;
    divide = firstNumber / (float)secondNumber; // Typecasting

    // printf displays the string inside quotation
    printf("Addition = %d\n", add);
    printf("Subtraction = %d\n", subtract);
    printf("Multiplication = %d\n", multiply);
    printf("Division = %.2f\n", divide);
    
    return 0;
}