/**
 * @file functions.h
 *
 * @author Benjamin Wilson
 *
 * @date 9/8/2021
 *
 * Assignment: Lab 2
 *
 * @brief header file for functions.c
 *
 * @details see functions.c for details
 *
 * @bugs none
 *
 * @todo none
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

/* You may need #include <> statements here */
#include <math.h>
#include "functions.c"

/* Function prototyes go here */
int area_rectangle(int l, int w);
int perimeter_rectangle(int l, int w);
double diagonal_rectangle(int l, int w);

double area_circle(double rad);
double circumference(double rad);

double area_triangle(double a, double b);
double hypotenuse(double a, double b);
double perimeter_triangle(double a, double b);

double exterior_angle(int n);
double interior_angle(int n);
double sum_interior_angle(int n);
double area_regular_polygon(int n, double s);

#endif
