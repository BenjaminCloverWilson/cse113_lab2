/**
 * @file lab2.c
 *
 * @author Benjamin Wilson
 *
 * @date 9/8/2021
 *
 * Assignment: Lab 2
 *
 * @brief A program that uses the functions in functions.c 
 *
 * @details A second iteration of a geometry calculator. It uses the functions
 * in functions.c, retrieved from functions.h. This second version, asks the
 * user for input on which calculation to complete, checks the input for
 * errors, and then wishes the user a lovely day!
 *
 * @bug None that I've seen (maybe some typos in the print statements).
 * But, for the love of god, don't put a floating point in integer values.
 *
 * @todo none
 */

#include "functions.h"
#include <stdio.h>


int main(void) {
        
        /* Pre-coded part of the assignment 
         * int h = 2;
         * int w = 3;
         * int area;
         * 
         * area = area_rectangle(h, w);
         * printf("A rectangle with height %d and width %d has an area of %d.\n", h, w, area); */

        printf("Welcome to Benjamin Wilson's Geometry Calculator (Version 2.0)!\n\n\n");

        /* Variables for storing character inputs */
        int SHAPE;
                int tmp_shape;
        int TYPE;
                int tmp_type;

        /* variables for storing inputs */
        /* Hardcoded rectangle variables */
        /* int l = 2;
         * int w = 3; */
        /* Variables for storing rectangle input */
        int l;
        int w;

        /* Variable for storing circle input */
        /* Hardcoded circle variables */
        /* double r = 2.0; */
        double r;

        /* Hardcoded triangle variables */
        /* double base = 1.0;
         * double height = 1.0; */
        /* Variables for storing triangle input */
        double base;
        double height;

        /* Hardcoded values for regular polygons */
        /* int sides = 8;
         * double poly_length = 2.0; */
        /* Variables for storing regular polygon input */
        int sides;
        double poly_length;
        
        
        /* Beginning prompt printf functions */
        printf("----------New Calculation----------\n\n");
        printf("Please select a SHAPE for geometry calculation:\n");
        printf("R: Rectangle\n");
        printf("C: Cirlce\n");
        printf("T: Right Triangles\n");
        printf("P: Regular Polygons\n\n");

        printf("Please enter your choice (R, C, T, P): ");
        while((tmp_shape = getchar()) != '\n')
                SHAPE = tmp_shape;
 
        /* Asks for what type of calculation the user wants depending on the shape 
         * Also provides check for valid user input that terminates the program */
        switch(SHAPE){
        case 'r':
        case 'R':
                /* Character input for which rectangle function to perform */
                printf("\nPlease select a TYPE of calculation:\n");
                printf("A: Area of a rectangle\n");
                printf("P: Perimeter of a rectangle\n");
                printf("D: Diagonal of a rectangle\n\n");
                printf("Please enter your choice: ");
                while((tmp_type = getchar()) != '\n')
                        TYPE = tmp_type;

                /* Completes user requested calculation on input. Default input
                 * causes termination of the program */
                switch(TYPE){
                case 'a':
                case 'A':
                        /* Take user input for numbers in rectangle calculations */
                        printf("Enter the integer value of the length: ");
                        scanf("%d", &l);

                        /* Checks that input is valid for values */
                        if(l < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative! ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /* Take user input for numbers in rectangle calculations */
                        printf("Enter the integer value of the width: ");
                        scanf("%d", &w);

                        /* Checks that input is valid for values */
                        if(w < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative! ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /* Store calculations */
                        int area_rect;

                        /* Area calculations */
                        area_rect = area_rectangle(l, w);
                        /* Split printf for display purposes */
                        printf("\nThe area of your rectangle with length");
                        printf(" %d and witdth %d equals: %d\n\n", l, w, area_rect);
                        break;
                case 'p':
                case 'P':
                        /* Take user input for numbers in rectangle calculations */
                        printf("Enter the integer value of the length: ");
                        scanf("%d", &l);

                        /* Checks that input is valid for values */
                        if(l < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative! ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /* Take user input for numbers in rectangle calculations */
                        printf("Enter the integer value of the width: ");
                        scanf("%d", &w);

                        /* Checks that input is valid for values */
                        if(w < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative! ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /* Store calculations */
                        int peri_rect;

                        /* Perimeter calculations */
                        peri_rect = perimeter_rectangle(l, w);
                        /* Split printf for display purposes */
                        printf("The perimeter of your rectangle with length");
                        printf(" %d and width %d equals: %d\n\n", l, w, peri_rect);
                        break;
                case 'd':
                case 'D':
                        /* Take user input for numbers in rectangle calculations */
                        printf("Enter the integer value of the length: ");
                        scanf("%d", &l);

                        /* Checks that input is valid for values */
                        if(l < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative! ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /* Take user input for numbers in rectangle calculations */
                        printf("Enter the integer value of the width: ");
                        scanf("%d", &w);

                        /* Checks that input is valid for values */
                        if(w < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative! ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /* Store calculations */
                        double diag_rect;

                        /* Diagonal calculations */
                        diag_rect = diagonal_rectangle(l, w);
                        /* Split printf for display purposes */
                        printf("The diagonal of your rectangle with length");
                        printf(" %d and width %d equals: %lf\n\n", l, w, diag_rect);
                        break;
                default:
                        printf("Error: invalid input! Terminating program, goodbye\n");
                        return 0;
                break;
                }
                break;
        
        case 'c':
        case 'C':
                /* Character input for which circle function to perform */
                printf("\nPlease select a TYPE of calculation:\n");
                printf("A: Area of a circle\n");
                printf("C: Circumference of a cricle\n\n");
                printf("Please enter your choice: ");
                while((tmp_type = getchar()) != '\n')
                        TYPE = tmp_type;

                /* Completes user requested calculation on input. Invalid input
                 * causes termination of the program */
                switch(TYPE){
                case 'a':
                case 'A':
                        /* Asks for value input for circle calculations */
                        printf("\nEnter the value of the radius as a floating point: ");
                        scanf("%lf", &r);

                        /* Checks that inputted values are valid */
                        if(r < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative!  ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /*Variables for storing circle calculations */
                        double area_cir;

                        /* Circle calculations */
                        area_cir = area_circle(r);
                        /* printf is split for display purposes */
                        printf("The area of the circle with radius");
                        printf("%lf is: %lf\n\n", r, area_cir);
                        break;
                case 'c':
                case 'C':
                        /* Asks for value input for circle calculations */
                        printf("\nEnter the value of the radius as a floating point: ");
                        scanf("%lf", &r);

                        /* Checks that inputted values are valid */
                        if(r < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative! ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /* Variables for storing circle calculations */
                        double circum;

                        /* Circle calculations */
                        circum = circumference(r);
                        /* Split printf for display purposes */
                        printf("The circumference of the circle with radius");
                        printf(" %lf is: %lf\n\n", r, circum);
                        break;
                default:
                        printf("Error: invalid input! Terminating program, goodbye\n");
                        return 0;
                }
                break;
        
        case 't':
        case 'T':
                /* Character input for which triangle function to perform */
                printf("\nPlease select a TYPE of calculation:\n");
                printf("A: Area of a triangle\n");
                printf("H: Hypotenuse of a triangle\n");
                printf("P: Perimeter of a triangle\n\n");
                printf("Please enter your choice: ");
                while((tmp_type = getchar()) != '\n')
                        TYPE = tmp_type;
                
                /* Completes user requested calculation on input. Invalid input
                 * causes termination of the program. */
                switch(TYPE){
                case 'a':
                case 'A':
                        /* Asks for value input for triangle calculations */
                        printf("Enter the value of the base as a floating point: ");
                        scanf("%lf", &base);

                        /* Checks that values are not negative */
                        if(base < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative! ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /* Asks for value input for triangle calculations */
                        printf("Enter the value of the height as a floating point: ");
                        scanf("%lf", &height);

                        /* Checks that values are not negative */
                        if(height < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative! ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /* Variables for storing triangle calculations */
                        double area_tri;

                        /* Triangle calculations */
                        area_tri = area_triangle(base, height);
                        /* printf is split for display purposes */
                        printf("The area of the right triangle with a base of");
                        printf(" %lf and a height of %lf equals: %lf\n\n", base, height, area_tri);
                        break;
                case 'h':
                case 'H':
                         /* Asks for value input for triangle calculations */
                        printf("Enter the value of the base as a floating point: ");
                        scanf("%lf", &base);

                        /* Checks that values are not negative */
                        if(base < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative! ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /* Asks for value input for triangle calculations */
                        printf("Enter the value of the height as a floating point: ");
                        scanf("%lf", &height);

                        /* Checks that values are not negative */
                        if(height < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative! ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /* Variables for storing triangle calculations */
                        double hypo;

                         /* Triangle calculations */
                        hypo = hypotenuse(base, height);
                        /* printf is split for display purposes */
                        printf("The hypotenuse of the right triangle with a base of");
                        printf(" %lf and a height of %lf equals: %lf\n\n", base, height, hypo);
                        break;
                case 'p':
                case 'P':
                         /* Asks for value input for triangle calculations */
                        printf("Enter the value of the base as a floating point: ");
                        scanf("%lf", &base);

                        /* Checks that values are not negative */
                        if(base < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative! ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /* Asks for value input for triangle calculations */
                        printf("Enter the value of the height as a floating point: ");
                        scanf("%lf", &height);

                        /* Checks that values are not negative */
                        if(height < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative! ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /* Variables for storing triangle calculations */
                        double peri_tri;

                        /* Triangle calculations */
                        peri_tri = perimeter_triangle(base, height);
                        /* printf is split for display purposes */
                        printf("The perimeter of the right triangle with a base of");
                        printf(" %lf and a height of %lf equals: %lf\n\n", base, height, peri_tri);
                        break;
                default:
                        printf("Error: invalid input! Terminating program, goodbye.\n");
                        return 0;
                }
                break;

        case 'p':
        case 'P':
                /* Character input for which polygon function to perform */
                printf("\nPlease select a TYPE of calculation:\n");
                printf("A: Area of a regular polygon\n");
                printf("X: Exterior angle of a regular polygon\n");
                printf("N: Interior angle of a regular polygon\n");
                printf("S: Sum of the interior angle of a regular polygon\n\n");
                printf("Please enter your choice: ");
                while((tmp_type = getchar()) != '\n')
                        TYPE = tmp_type;
                
                /* Completes user requested calculation on input. Invalid input
                 * causes termination of the program */
                switch(TYPE){
                case 'a':
                case 'A':
                        /* Asks for input of values for polygon calculations */
                        printf("Enter the integer number of sides in the Regular Polygon: ");
                        scanf("%d", &sides);

                        /* Checks that inputted values are not negative */
                        if(sides < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative! ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /* Asks for input of values for polygon calculations */
                        printf("Enter the length of the sides in the Regular Polygon as a floating point value: ");
                        scanf("%lf", &poly_length);

                        /* Checks that inputted values are not negative */
                        if(poly_length < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative! ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /* Variables for storing calculations */
                        double area_poly;

                        /* Regular Polygon calculations */
                        area_poly = area_regular_polygon(sides, poly_length);
                        /* printf is split for display purposes */
                        printf("The area of a regular polygon with");
                        printf(" %d sides and a side length of %lf is: %lf\n\n", sides, poly_length, area_poly);
                        break;
                case 'x':
                case 'X':
                        /* Asks for input of values for polygon calculations */
                        printf("Enter the integer number of sides in the Regular Polygon: ");
                        scanf("%d", &sides);

                        /* Checks that inputted values are not negative */
                        if(sides < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative! ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /* Variables for storing calculations */
                        double ext_ang;

                        /* Regular Polygon calculations */
                        ext_ang = exterior_angle(sides);
                        /* printf is split for display purposes */
                        printf("The exterior angle of a regular polygon with");
                        printf(" %d sides is: %lf\n\n", sides, ext_ang);
                        break;
                case 'n':
                case 'N':
                        /* Asks for input of values for polygon calculations */
                        printf("Enter the integer number of sides in the Regular Polygon: ");
                        scanf("%d", &sides);

                        /* Checks that inputted values are not negative */
                        if(sides < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative! ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /* Variables for storing calculations */
                        double int_ang;

                        /* Regular Polygon calculations */
                        int_ang = interior_angle(sides);
                        /* printf is split for display purposes */
                        printf("The interior angle of a regular polygon with");
                        printf(" %d sides is: %lf\n\n", sides, int_ang);
                        break;
                case 's':
                case 'S':
                        /* Asks for input of values for polygon calculations */
                        printf("Enter the integer number of sides in the Regular Polygon: ");
                        scanf("%d", &sides);

                        /* Checks that inputted values are not negative */
                        if(sides < 0){
                                /* printf split for display purposes */
                                printf("Error: Geometric values can not be negative! ");
                                printf("Terminating program, goodbye.\n");
                                return 0;
                        }

                        /* Variables for storing calculations */
                        double sum_int_ang;

                        /* Regular Polygon calculations */
                        sum_int_ang = sum_interior_angle(sides);
                        /* printf is split for display purposes */
                        printf("The sum of the interior angles of a regular polygon with");
                        printf(" %d sides is: %lf\n\n", sides, sum_int_ang);
                        break;
                default:
                        printf("Error: invalid input! Terminating program, goodbye.\n");
                        return 0;
                }
                break;

        default:
                printf("Error: invalid input! Terminating program, goodbye.\n");
                return 0;
        }

        printf("\nCompleted calculation. Terminating program. Have a lovely day :)\n\n");

        return 0;
}
