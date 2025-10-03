// CB 7th Variable Notes 
#include <stdio.h>

int main(void){
    int grade=95; //4 bytes
    float pi = 3.14; //4 bytes
    double long_pi = 3.1415926358; //8 bytes
    char letter_grade = 'A'; //1 byte
    char name[] = "Celeste";
    printf("%s I did it!", name);
    printf("You have a %d, in the class. That is an %c, grade, letter_grade");

    return 0;
}


//What is the main difference between declaring variables in Python and C?
    // Variables in C have static types that have to be declared
//In C, what is the purpose of specifying a data type when declaring a variable?
    // Informs the compiler about the kind of data the variable will store and the amount of memory to allocate for it
//List three common data types used in C and their corresponding format specifiers for printf().
    // int = printf() , float = %f, and char = %c
//How do you declare and initialize an integer variable named "age" with the value 25 in C?
    //In C, an integer variable named "age" with the value 25 is declared and initialized using the statement: int age = 25;
//What is the difference between printf() and scanf() functions in C?
    //In C, printf() is used for formatted output to display information on the console, while scanf() is used for formatted input to read data from the user.
//Write a C program that asks the user for their name and age, then prints a greeting message with their information.
    //#include <stdio.h> // Required for input/output functions like printf and scanf
//How do you add comments in C? What are the two types of comments?
    //Single-line comments, Single-line comments
//What is the purpose of the #include <stdio.h> line at the beginning of a C program?
    //The purpose of the line #include <stdio.h> at the beginning of a C program is to include the standard input/output header file.
//In C, what is the significance of the main() function?
    //the required entry point where a program's execution begins
//Write a C program that calculates the area of a rectangle. Ask the user to input the length and width, then display the result.

//What is the difference between %d and %f format specifiers in printf()?
    //The %d format specifier in printf() is used for printing signed decimal integers, while %f is used for printing floating-point numbers.
//How do you print a newline character in C?
    //In C, a newline character is represented by the escape sequence \n.
//Write a C program that converts temperature from Celsius to Fahrenheit. Ask the user for input in Celsius and display the result in Fahrenheit.

//What is the purpose of the & symbol when using scanf() to get user input?
    //, is the address-of operator. Its purpose is to provide scanf() with the memory address 
//How do you declare a constant in C? Provide an example.
    //The const keyword is used to declare a variable whose value cannot be changed after its initialization. Any attempt to modify a const variable after its declaration will result in a compile-time error.
