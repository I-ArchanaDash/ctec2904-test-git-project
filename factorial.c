#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * The program below is a simple factorial algorithm. It asks the user for a number and then returns
 * the factorial of that result (i.e. if the user enters 3 then the output should be 3 * 2 * 1 = 6).
 * 
 * @author Sabir Kothiya
 */

/**
 * The method calculates the factorial by given number
 * from the user and returns the answer of that factorial.
 * @param n the int value from the user.
 * @return the result of the factorial.
 */
long factorial (int n) {
    // Declare a variable of type long and assign one.
    long result = 1;

	/*! 
	 * Loop through each element. True if and only if
	 * the int value from the user is greater than zero.
	 */
	while(n > 0) {
		/*! 
		 * Multiply the right given value from the user with the left
		 * factorial value and assign the result to left variable (result).
		 */
        result *= n;
		n--; // Decrement the given value from the user by one.
    }
    return result; // Return the result of the factorial.
}

int main() {
    int n = 0; // Declare a variable of type int and assign zero.
	long val; // Declare a variable of type long.

	// Printf the string inside quotation. Prompt the user to type a number and process it.
	printf("Please enter a number\n");

	scanf ("%d", &n); // Read next token as an int.

	// Assign the result of the factorial to value.
	val = factorial(n);

    // Display the factorial result, string inside the quotation.
	printf("Val = %ld\n", val);
	return 0; // Return nothing if the user does not enter a number.
}