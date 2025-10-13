// CB 7th My Family
#include <stdio.h>

int main (void){
    char members[][20] = {"Dad", "Mom", "Ian", "Logan", "Owen"};

 for(int i = 0; i < 5; i++){
            printf("Hello, %s!\n", members[i]);
        }
    return 0;
}