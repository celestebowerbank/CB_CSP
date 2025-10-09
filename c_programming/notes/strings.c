// CB 7th String Notes
#include <stdio.h>
#include <string.h>

int main(void){
    char name[] = "Celeste";

    char last_name[25];
    printf("Tell me your last name: \n");
    scanf("%s", last_name);
    char full_name[50];
    printf("%s\n", full_name);
    strcat(full_name, name);
    printf("%s\n", full_name);

    printf("%c\n", last_name[0]);
    last_name[0] = 'B';
   
    strcat(full_name, " ");
    printf("%s\n", full_name);

    strcat(full_name, last_name);
    printf("%s\n", full_name);

    printf("Your name is %s %s", name, last_name);
    printf("%zu\n", strlen(name));
    printf("%zu\n", sizeof(name));


    return 0;
}




// What is the difference between a string and a character?
     //A character is a single symbol, while a string is a sequence of multiple characters
// What types of quotation marks do we need for a string?
    // You need Double Quotation marks
// What library do we need to include to access the string functions in C?
    //strcat
// List functions the library allows us to use.
    // <stdio.h>, <string.h>, 
// How do we concatenate strings in C?
    //typically using functions like strcat() or strncat() from the <string.h> library
// How do we get individual characters from a string in C?
    // we use %c