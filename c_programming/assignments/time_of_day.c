// CB 7th Time of Day
#include <stdio.h>
#include <time.h>

int main() {
    int hour;
    char choice;

    printf("Would you like to use the current time? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
     
        time_t t;
        struct tm *current_time;
        t = time(NULL);
        current_time = localtime(&t);
        hour = current_time->tm_hour;
        printf("The current hour is: %d\n", hour);
    } 
    else {
      
        printf("What is the hour in military time (0-23): ");
        scanf("%d", &hour);
    }

 
    if (hour >= 18 && hour <= 23) {
        printf("Good Evening!\n");
    }
    else if (hour >= 12 && hour < 18) {
        printf("Good Afternoon!\n");
    }
    else if (hour >= 0 && hour < 12) {
        printf("Good Morning!\n");
    }
    else {
        printf("That’s not a valid hour! Please enter 0–23.\n");
    }

    return 0;
}
