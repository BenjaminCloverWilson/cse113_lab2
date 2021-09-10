/**
 * @file ch5_pp8.c
 *  
 * @author Benjamin Wilson
 *  
 * @date 9/10/2021
 * 
 * Assignment: lab 2
 * 
 * @brief Finds closet departing flight to time entered
 * 
 * @details A time is entered by the user in the 24-hour time format. The
 * closest departing flight (and coresponding arrival time) are then printed
 * out to the user in the same 24-hour time format; the closest time is
 * printed even if the closest flight has already departed.
 * 
 * @bug None yet
 * 
 * @todo
 */

 #include <stdio.h>

/* Function Prototypes */
int from_midnight(int hour, int min);

int main(){
    /* Stores user 24-Hour time */
    /* Hardcoded values for test of functions */
    //int u_hour = 13;
    //int u_min = 45;
    int u_hour;
    int u_min;

    /* Stores calculation of minutes from midnight for user value */
    int u_midnight;

    /* User Input for 24-Hour Time */
    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &u_hour, &u_min);

    /* While loop to test for valid user input */
    while(u_hour < 0 || u_hour > 23 || u_min < 0 || u_min > 59){
        printf("Error: Incorrect time format. Please enter a 24-hour time (hh:mm): ");
        scanf("%d:%d", &u_hour, &u_min);
    }

    /* Calculates minutes from midnight with user input */
    u_midnight = from_midnight(u_hour, u_min);

    /*Prints closest departure flight if a valid 24-hour time was inputted. */
    if (u_midnight >= 0 && u_midnight <= 531){
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n\n");
    } else if (u_midnight >= 532 && u_midnight <= 631){
        printf("Closet departure time is 9:43 a.m., arriving at 11:52 a.m.\n\n");
    } else if (u_midnight >= 632 && u_midnight <= 723){
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n\n");
    } else if (u_midnight >= 724 && u_midnight <= 803){
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n\n");
    } else if (u_midnight >= 804 && u_midnight <= 892){
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n\n");
    } else if (u_midnight >= 893 && u_midnight <= 1042){
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n\n");
    } else if (u_midnight >= 1043 && u_midnight <= 1222){
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n\n");
    } else if (u_midnight >= 1223 && u_midnight <= 1439){
        /* printf is split for display purposes */
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m. ");
        printf("This is the last flight of the day.\n\n");
    }
    
    /* End message of program */
    printf("Terminating program... Have a nice day :)\n\n");

    return 0;

}

/* Function Definitions */
/**
 * Finds the amount of time from midnight.
 * @param hour The hour in 24-hour time format
 * @param min The amount of minutes passed within the hour in 24-hour time format
 * @return The sum of min and the product of hour * 60 minutes in minutes.
 */
int from_midnight(int hour, int min){
    return hour * 60 + min;
}
