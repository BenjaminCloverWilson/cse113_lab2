/**
 * @file ch5_pp11.c
 *  
 * @author Benjamin Wilson
 *  
 * @date 9/10/2021
 * 
 * Assignment: lab 2
 * 
 * @brief Prints out word for an inputted two-digit number.
 * 
 * @details A two-digit number is inputted with the tens place assigned a variable
 * and the ones place another, separate variable. Based on the input, the variables
 * are run through a few switchs to determine the proper print out.
 * 
 * @bug None yet
 * 
 * @todo Input
 */

#include <stdio.h>

int main(){
    /* Hardcoded values for testing switch statements */
    //int tens = 9;
    //int ones = 0;

    /* Store user input */
    int num;

    /* Store calculations */
    int tens;
    int ones;

    /* Collects user input */
    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    /* Beginning of output if positve*/
    if(num <= 99 && num > 0){
        printf("You entered the number ");
    }

    /* Beginning of output if negative */
    if(num >= -99 && num < 0){
        printf("You entered the number negative ");
    }

    /* Determines the tens and ones place */
    tens = num / 10;
    ones = num % 10;

    /* Prints the word for the tens place from 20 to 90. Flow through is intentional */
    switch(tens){
    case -2:
    case 2:
        printf("Twenty");
        break;
    case -3:
    case 3:
        printf("Thirty");
        break;
    case -4:
    case 4:
        printf("Forty");
        break;
    case -5:
    case 5:
        printf("Fifty");
        break;
    case -6:
    case 6:
        printf("Sixty");
        break;
    case -7:
    case 7:
        printf("Seventy");
        break;
    case -8:
    case 8:
        printf("Eighty");
        break;
    case -9:
    case 9:
        printf("Ninety");
        break;
    
    /* Handles special cases from 10 to 19. Flow through is intentional */
    case -1:
    case 1:
        switch(ones){
        case 0:
            printf("Ten.");
            break;
        case -1:
        case 1:
            printf("Eleven.");
            break;
        case -2:
        case 2:
            printf("Twelve.");
            break;
        case -3:
        case 3:
            printf("Thirteen.");
            break;
        case -4:
        case 4:
            printf("Fourteen.");
            break;
        case -5:
        case 5:
            printf("Fifteen.");
            break;
        case -6:
        case 6:
            printf("Sixteen.");
            break;
        case -7:
        case 7:
            printf("Seventeen.");
            break;
        case -8:
        case 8:
            printf("Eighteen.");
            break;
        case -9:
        case 9:
            printf("Nineteen.");
            break;
        }
        break;
    default:
        printf("\nError: invalid input. Terminating program...\n\n");
        return 0;
    }

    /* Prints the word for the ones place if the tens place is >1 */
    if(tens > 1 || tens < -1){
        switch(ones){
        case -1:
        case 1:
            printf("-one.");
            break;
        case -2:
        case 2:
            printf("-two.");
            break;
        case -3:
        case 3:
            printf("-three.");
            break;
        case -4:
        case 4:
            printf("-four.");
            break;
        case -5:
        case 5:
            printf("-five.");
            break;
        case -6:
        case 6:
            printf("-six.");
            break;
        case -7:
        case 7:
            printf("-seven.");
            break;
        case -8:
        case 8:
            printf("-eight.");
            break;
        case -9:
        case 9:
            printf("-nine.");
            break;
        case 0:
            printf(".");
            break;
        }
    }

    /* Says that program is terminating */
    printf("\n\nTerminating program. Goodbye :)\n\n");

    return 0;
}