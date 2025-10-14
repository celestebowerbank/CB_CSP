#include <stdio.h>

int main() {
    float income, rent, utilities, groceries, transport, expenses, savings, leftover;
    const char *names[] = {"rent/mortgage", "utilities", "groceries", "transportation"};
    float *values[] = {&rent, &utilities, &groceries, &transport};

    printf("Enter your monthly income: ");
    scanf("%f", &income);

    for (int i = 0; i < 4; i++) {
        printf("Enter your monthly %s: ", names[i]);
        scanf("%f", values[i]);
    }

    expenses = rent + utilities + groceries + transport;
    savings = income * 0.10;
    leftover = income - (expenses + savings);

    printf("\nExpense breakdown:\n");
    printf("Rent: $%.2f (%.0f%%)\n", rent, rent / income * 100);
    printf("Utilities: $%.2f (%.0f%%)\n", utilities, utilities / income * 100);
    printf("Groceries: $%.2f (%.0f%%)\n", groceries, groceries / income * 100);
    printf("Transportation: $%.2f (%.0f%%)\n", transport, transport / income * 100);

    printf("\nSavings: $%.2f (10%%)\nLeftover spending money: $%.2f\n", savings, leftover);

    return 0;
}
