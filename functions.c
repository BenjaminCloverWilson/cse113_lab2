/**
 * @file functions.c
 *
 * @author Benjamin Wilson
 *
 * @date 9/8/2021
 *
 * Assignment: Lab 2
 *
 * @brief contains the function definitions for lab 2
 *
 * @details Copied functions (not the main function) from lab 1 into this file
 * so that they can be used in files that reference functions.h in lab 2.
 *
 * @bug none
 *
 * @todo None
 */

#include "functions.h"
#include <stdio.h>

/* Your functions go here */

/**
* Finds the area of a rectangle
* @param h The height of the triangle
* @param w The width of the triangle
* @return The product h * w
*/
/**
 * Multiplies two integer variables, length and width
 * @param l is the length and first multiple
 * @param w is the width and second multiple
 * @return the product l * w
 */
int area_rectangle(int l, int w)
{
    return l * w;
}

/**
 * Multiplies two integer variables by 2 separatly and then adds the two products
 * @param l is the length and first variable
 * @param w is the width and second variable
 * @return the sum (2 * l) + (2 * w)
 */
int perimeter_rectangle(int l, int w)
{
    return 2 * l + 2 * w;
}

/**
 * Pythagorean Theoreom of two integer variables, length and width. Calls sqrt()
 * and pow() from the math.h library.
 * @param l is the length and first side of the pythagorean theorem
 * @param w is the width and second side of the pythagorean theorem
 * @return the square root of the sum of l^2 and w^2
 */
double diagonal_rectangle(int l, int w)
{
    return sqrt((pow(l, 2) + pow(w, 2)));
}

/**
 * Multiples an approximation of pi by the squared double variable. Calls pow()
 * from the math.h library.
 * @param rad is the variable that is squared
 * @return the product of 3.141593 * rad^2
 */
double area_circle(double rad)
{
    return 3.141593 * pow(rad, 2);
}

/**
 * Multiples a doubled approximation of pi by a double variable. Calls pow()
 * from the math.h library.
 * @param rad is the radius.
 * @return the product of 2 * 3.141593 * rad
 */
double circumference(double rad)
{
    return 2 * 3.141593 * rad;
}

/**
 * Divides the product of two double variables by 2
 * @param a is the first multiple
 * @param b is the second multiple
 * @return the quotient of (a * b) / 2
 */
double area_triangle(double a, double b)
{
    return a * b / 2;
}

/**
 * Pythagorean Theorem of two double variables
 * @param a is the first side of the Pythagorean Theorem
 * @param b is the second side of the Pythagorean Theorem
 * @return the square root of the sum of a^2 and b^2
 */
double hypotenuse(double a, double b)
{
    return sqrt((pow(a, 2) + pow(b, 2)));
}

/**
 * Adds three doubles. One of which is calculated by the prior hypotenuse()
 * @param a is the first addend
 * @param b is the second addend
 * @return the sum of a + b + the sum of the called hypotenuse() function
 * @remarks The parameters used in the hypotenuse() function are identical
 * to the parameters of this function. The sum of the hypotenuse() function
 * is then used to calculate the final sum.
 */
double perimeter_triangle(double a, double b)
{
    return a + b + hypotenuse(a, b);
}

/**
 * Divides a 360 by an integer variable
 * @param n is the denominator
 * @return the quotient of 360 / n
 */
double exterior_angle(int n)
{
    return 360 / n;
}

/**
 * The difference of an integer variable subtracted by 2 is multiplied by 180.
 * This product is then divided by the same integer variable mentioned above.
 * @param n is the minuend and the denominator
 * @return the quotient of (180 * (n - 2)) / n
 */
double interior_angle(int n)
{
    return (180 * (n - 2)) / n;
}

/**
 * The difference of an integer variable subtracted by 2 is multipled by 180.
 * @param n is the minuend
 * @return the product of 180 * (n - 2)
 */
double sum_interior_angle(int n)
{
    return 180 * (n - 2);
}

/**
 * Plugs a double variable for the length of sides, and an integer variable
 * for the number of sides into the formula for the area of a regular polygon.
 * @param n is the number of sides (second multiple in numerator and denominator)
 * in the tan() function.
 * @param s is the length of sides (its square is the first multiple of the numerator)
 * @return the area of a regular polygon depending on the number and length of
 * its sides.
 * @remarks tan() and pow() are from the math.h library. Plus, only the
 * approximation of pi is used in the tangent for the regular polygon formula.
 */
double area_regular_polygon(int n, double s)
{
    return (pow(s, 2) * n) / (4 * tan(3.141593 / n));
}
