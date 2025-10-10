// CB 7th Silly Sentences
#include <stdio.h>

int main() {
    char name[50];
    char word_one[50];
    char word_two[50];
    char word_three[50];
    char word_four[50];

    printf("What is your name:\n");
    scanf("%49s", name);
    printf("Hello %s\n", name);
    printf("Tell me a plural noun:\n");
    scanf("%49s", word_one);

    printf("Tell me a last name:\n");
    scanf("%49s", word_two);

    printf("Tell me an adjective:\n");
    scanf("%49s", word_three);

    printf("Tell me a noun:\n");
    scanf("%49s", word_four);

    printf("\nA one-act play to be performed by %s.\n", word_one);
    printf("Thank you very much for seeing me, Doctor %s, on such %s notice.\n", word_two, word_three);
    printf("What seems to be your problem, young %s?\n", word_four);

    return 0;
}
