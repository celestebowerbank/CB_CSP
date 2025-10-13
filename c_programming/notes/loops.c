// CB 7th Loops Notes
#include <stdio.h>

int main (void){
    int nums[] = {1,2,3,4,5,6,7}; // Arrays
    char candies[][20] = {"KitKat", "Skittles", "Nerds", "Hershey", "Reese's"};

    for(int x = 0; x < 7; x++){
        printf("%d\n", nums[x]);
    }

        for(int i = 0; i < 5; i++){
            printf("%s, is my favorite candy!\n", candies[i]);
        }
        for(int num = 1; num < 11; num++){
            printf("%d\n", num);
        }

        int num = 0;
        while(num < 11){

        printf("%d\n", num);
        num++;
        }
    return 0;
}




// What is a loop? 
    // When code is repeated a specific amount of times
//What are the two types of loops?
    //entry-controlled loops and exit-controlled loops
//What is iteration
    //Repeating something
//What are arrays? 
    // Lists
//How do you make lists in C?
    // with "" [] i or x
//How do you make for loops in C?
    //
//How do you make while loops in C?
    //