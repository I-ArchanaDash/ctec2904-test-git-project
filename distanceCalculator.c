#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define STARTX 0
#define STARTY 0

/**
 * The distance between two points (x0,y0) and (x1,y1) is given by: sqrt ((x0-x1)^2 + (y0-y1)^2).
 * 
 * @author Sabir Kothiya
 */

/**
 * Calculates the distance between two points.
 * @param x0
 * @param y0
 * @param x1
 * @param y1
 * @return the calculation of the distance between two points.
 */
double distance(int x0, int y0, int x1, int y1) {
    return sqrt(((x1 - x0) * (x1 - x0)) + ((y1 - y0) * (y1 - y0)));
}

int main() {
    // Declare a variable of type int and assign STARTX to x0, STARTY, x1 & y1 to y0.
    int x0 = STARTX, y0 = STARTY, x1, y1;
	double d, f, s = 10.0; // Declare a variable of type double and assign 0.0 to s.

	do {
        // Printf the current distance between two points.
        printf("You are at\t(%6i,%6i)\n", x0, y0);

        // Prompt the user to type x & y coordinates and process it.
		printf("\t\t\t\tInput next coordinate x y:");

		scanf(" %i %i", &x1, &y1); // Read next token as an int.
		
        // Assign the result of the distance between two points to s.
        d = distance(x0, y0, x1, y1);
		s = s - d; // Assign the result of the distance between two points to s.
		f = distance(x1, STARTX, y1, STARTY); // Assign the result of the distance between two points to f.

        // Printf all.
		printf("\t\t\t\tDistance (this leg)   = %7.2f\n", d);
		printf("\t\t\t\tDistance (travelled)  = %7.2f\n", s);
		printf("\t\t\t\tDistance (from start) = %7.2f\n", f);

        // Assign coordinates to each other.
		x0 = x1;
		y0 = y1;
    }

    /**
     * Check if the first part of the while loop values of two variable are equal or not.
     * Check if the second part of the while loop values of two variable are equal or not,
     * if no then keep looping the condition.
     * @return nothing if the first & second part of the while loop values of two variable equal to.
     */
    while (x1 != STARTX && y1 != STARTY);
	return 0;
}