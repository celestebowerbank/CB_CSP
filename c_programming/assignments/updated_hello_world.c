// CB 7th update hello
#include <stdio.h>

void sayHello(char name[]) {
    printf("Hello, %s! Welcome to your first C program!\n", name);
}

int main(void) {
    sayHello("Chris");
    sayHello("Ian");
    sayHello("Owen");
    sayHello("Logan");
    sayHello("Celeste");

    return 0;
}
