// CB 7th Expression Notes 
#include <stdio.h>

int main(void){
    int year = 2025;
    float pi = 3.14;
    double long_pi = 3.14959265359;
    prinf("%d", year);
    printf("%d\n", 8/3);
    printf("%f.2\n", 8.0/3);
    printf("%d\n", (int) pow(2, 4));

    year += 1; // Compound assignment operator
    prinf("%d", year);
    year++; //Imcrimentor
    printf("%d", year);


return 0;
}

//What is the difference between an integer and a float in C?
    //an int) is a number without a decimal point. A float is a floating-point number
//How does C handle integer division compared to float division?
    //Integer division yields only the whole number quotient by truncating any decimal part, while float (floating-point) division yields a real number result that includes the decimal part
//List the arithmetic operators available in C and their functions.
    // Addition, Subtraction, Division, Multiplacation, Modulo
//What is the modulus operator, and how is it used?
    // % its the remainder
//How do you round a float to the nearest integer in C?
    // .1
//What is type casting in C? Provide an example of explicit type casting.
    // the process of explicitly converting a variable of one data type to another by using the type cast operator
//How do compound assignment operators work in C? List three examples.
    // Addition, Equivalent, Multiplication
//What is the purpose of the math.h library? Name three functions it provides.
    //allow you to perform mathematical tasks on numbers
//How do you print a float with a specific number of decimal places using printf()?
    // %.NF