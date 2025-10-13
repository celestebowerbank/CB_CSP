// CB 7th Time of Day
#include <stdio.h>
#include <time.h>

int main() {
    int hour;
    char choice;

        time_t t;
        t = time(NULL);
    
        printf("What is the hour in military time: ");
        scanf("%d", &hour);
   
    if (hour >= 18 && hour <= 23) {
        printf("Good Evening!\n");
    }
    else if (hour >= 12 && hour < 18) {
        printf("Good Afternoon!\n");
    }
    else if (hour >= 0 && hour < 12) {
        printf("Good Morning!\n");
    }

    return 0;
}
