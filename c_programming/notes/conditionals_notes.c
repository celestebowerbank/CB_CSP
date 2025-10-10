// CB 7th Conditional Notes 
#include <stdio.h>
#include <string.h>
/*Logical Operators
&& and
|| or
! not
*/
int main(void){
    int grade;
    char name[50];
    printf("What is your grade percent: ");
    scanf("%d",&grade);

    printf("What is your name?: ");
    scanf("%d",&name);

    //printf("%d\n", strcmp(name, "Celeste"));
    if(strcmp(name, "Celeste") == 0){
        printf("You don't get a grade! Because grades SUCK!\n");
    }else if(grade >= 90){
        printf("You have an A!\n");
    }else if(grade >= 80){
        printf("You have a B!\n");
    }else if(grade >= 70){
        printf("You have a C!\n");
    }else{
        printf("You are failing :(\n");
    }

    return 0;
}

// What puts something inside of the “if” statement?
    // A Condition
// How are conditions written in C?
    // if, else, else if
// How do we write elif conditions in C?
    // else if
// When do else conditions run?
    // when the first condition is not true
// What are the 3 logical operators in C?
    // &&, ||, !