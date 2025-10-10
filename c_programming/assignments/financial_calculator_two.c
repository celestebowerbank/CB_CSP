#include <stdio.h>

int main() {
   
    float income, rent, utilities, groceries, transportation;
    float savings, leftover;


    printf("What is your monthly income: ");
    scanf("%f", &income);

    printf("What is your monthly rent/mortgage: ");
    scanf("%f", &rent);

    printf("What is your monthly utilities: ");
    scanf("%f", &utilities);

    printf("What is your monthly groceries: ");
    scanf("%f", &groceries);

    printf("What is your monthly transportation: ");
    scanf("%f", &transportation);


    savings = income * 0.10;


    leftover = income - (rent + utilities + groceries + transportation + savings);

    printf("\nYour rent is $%.2f and that is %.0f%% of your income.\n", rent, (rent / income) * 100);
    printf("Your utilities are $%.2f and that is %.0f%% of your income.\n", utilities, (utilities / income) * 100);
    printf("Your groceries are $%.2f and that is %.0f%% of your income.\n", groceries, (groceries / income) * 100);
    printf("Your transportation is $%.2f and that is %.0f%% of your income.\n", transportation, (transportation / income) * 100);

    printf("\nYou should save $%.2f a month, that is 10%% of your income.\n", savings);
    printf("You have $%.2f of spending money each month!\n", leftover);

    return 0;
}
