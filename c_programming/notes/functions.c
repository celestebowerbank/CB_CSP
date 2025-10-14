// CB 7th Function Notes 
#include <stdio.h>
void birthday(char* name, int age){
printf("Happy Birthday to you\n");
    printf("Happy Birthday to you\n");
    printf("Happy Birthday dear %s!\n", name);
    printf("Happy Birthday to you\n");
    printf("Happy Birthday %s you are %d!\n", name, age);
}

int mul(int x, int y){
    return x *y;
}

float get_number(char* type){
    float value;
    printf("How many %s do you have?:\n", type);
    scanf("%f", &value);
    return value;
}

int main (void){
    birthday("Jesus",15);
    birthday("Gwen",14);
    birthday("Cecily",16);
    int product = mul(8,5);
    printf("%d\n", product);
    printf("%d\n", mul(4,6));
    float pencils = get_number("Pencils");
    float notebooks = get_number("Notebooks");
    printf("You have %.2f pencils and %.2f notebooks!", pencils, notebooks);
    return 0;
}


// What a function is
    // Something that assigns each input one output
// Why we use functions
    // It takes up less space
// How to write a function in C
// What are arguments and parameters?
    // variables and guidelines
// How do arguments and parameters work together?
    // passing of data into functions or methods
// How to use parameters and arguments in C
    // Call by value
// What are return statements?
    // WHne the code ends
// How do return statements change how you define a function in C?
    // determining its return type and the value it provides
// What do return statements do with the information?
    // Determin its return type and the value it provides